#include "script_component.hpp"
params ["_player", "_title", "_changingOut"];
if (stance _player != "CROUCH" && stance _player != "PRONE") then {
    _player playAction "playerCrouch";
};

_player setVariable ["SOCOMD_hasStashedGear",  _changingOut];
[20, [_player], {
    params ["_args"];
    _args params ["_player"];
    
    private _currentgear = getUnitloadout _player;
    private _originalGear = [_player] call FUNC(getStashedGear);
    private _switchUniform = (_currentgear select 3) select 0;
    private _seitchVest = (_currentgear select 4) select 0;
    [_player, _currentgear] call FUNC(setStashedGear);
    // changing out of diving gear
    //uniform
    _uniformLoadout = _currentgear select 3;
    _uniformLoadout set [0, _switchUniform]; 
    _currentgear set [3, _uniformLoadout];
    // vest
    _vestLoadout = _currentgear select 4;
    _vestLoadout set [0, _seitchVest]; 
    _currentgear set [4, _vestLoadout];
    //goggles
    _currentgear set [7, (_originalGear select 7)];
    [_player, _currentgear] call EFUNC(qstore,setUnitLoadout);
}, {}, _title] call ace_common_fnc_progressBar