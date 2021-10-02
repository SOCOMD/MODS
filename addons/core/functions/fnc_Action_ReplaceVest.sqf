#include "script_component.hpp"


params ["_player","_vest"];

if(_vest == (vest _player)) exitWith {systemChat "changing to the same";};

if(isNil QGVAR(settingVest)) then {
    GVAR(settingVest) = false;
};

if(isNil QGVAR(vestsToSet)) then {
    GVAR(vestsToSet) = [];
};

if(!GVAR(settingVest)) then {
    GVAR(settingVest) = true;
    _items = vestItems _player;
    _player addVest _vest;
    {
        _player addItemToVest _x;
    } forEach _items; 
    GVAR(settingVest) = false;
} else {
    GVAR(vestsToSet) pushBack _vest;
};
if!(GVAR(vestsToSet) isEqualTo []) then {
    _vestToPlace = GVAR(vestsToSet) select 0;
    GVAR(vestsToSet) deleteAt 0;
    [{
        params [QGVAR(settingVest)];
        GVAR(settingVest) == false
    },{
        params ["","_player","_vest"];
        ["_player","_vest"] call FUNC(Action_ReplaceVest);
    },[GVAR(settingVest), _player,_vestToPlace] ] call cba_fnc_waitUntilAndExecute;
};

// _args = _this;
// _player = _this select 0;
// _vest = _this select 1;

// _unitLoadout = getUnitLoadout _player;
// _vestLoadout = _unitLoadout select 4;
// _vestLoadout set [0, _vest]; 
// _unitLoadout set [4, _vestLoadout];

// [_player, _unitLoadout] call EFUNC(qstore,SetUnitLoadout);