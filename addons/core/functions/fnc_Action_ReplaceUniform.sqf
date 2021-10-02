#include "script_component.hpp"

params ["_player","_uniform"];

if(_uniform == (uniform _player)) exitWith {systemChat "changing to the same";};

if(isNil QGVAR(settingUniform)) then { 
    GVAR(settingUniform) = false; 
}; 
 
if(isNil QGVAR(uniformsToSet)) then { 
    GVAR(uniformsToSet) = []; 
}; 
 
if(!GVAR(settingUniform)) then {
    GVAR(settingUniform) = true; 
    _items = uniformItems _player; 
    _player addUniform _uniform; 
    { 
        _player addItemToUniform _x; 
    } forEach _items;  
    GVAR(settingUniform) = false; 
} else { 
    GVAR(uniformsToSet) pushBack _uniform; 
}; 
if!(GVAR(uniformsToSet) isEqualTo []) then { 
    _uniformToPlace = GVAR(uniformsToSet) select 0; 
    GVAR(uniformsToSet) deleteAt 0; 
    [{ 
        params [QGVAR(settingUniform)]; 
        GVAR(settingUniform) == false 
    },{ 
        params ["","_player","_uniform"]; 
        ["_player","_uniform"] call FUNC(Action_ReplaceUniform); 
    },[GVAR(settingUniform), _player,_uniformToPlace] ] call cba_fnc_waitUntilAndExecute; 
};