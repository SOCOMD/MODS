#include "script_component.hpp"
params ["_player","_title","_changingOut"];
if (stance _player != "CROUCH" && stance _player != "PRONE") then {
    _player playAction "PlayerCrouch";
};
private _currentGear = getUnitLoadout _player;
if !(_changingOut) then {
    systemChat "setting gear":
    _player setVariable ["SOCOMD_originalGear",  _currentGear];
};
[20, [_player,_changingOut,_currentGear], {
   params ["_args"]; 
   _args params ["_player","_changingOut","_currentGear"];
        if (_changingOut) then {
            private _originalGear = _player getVariable ["SOCOMD_originalGear",  getUnitLoadout _player];
            // changing out of diving gear
            _switchBackpack = "SOCOMD_drybag_blk";
            _uniformClass = (_currentGear select 3) select 0;
            _vestClass = (_currentGear select 4) select 0;
            _bagClass = (_currentGear select 5) select 0;
            _mass = [_uniformClass,_vestClass] call FUNC(getMass);
            _backpackLoadout = _originalGear select 5;
            _backpackLoadout set [0, _switchBackpack]; 
            _originalGear set [5, _backpackLoadout];
            [_player, _originalGear] call EFUNC(qstore,SetUnitLoadout);
            _bagContainer = backpackContainer _player;
            [_player,_mass,_bagContainer] call FUNC(handleMass);
            _player setVariable ["SOCOMD_stashedGear", true];
        } else {
            // changing into diving gear
            _player setVariable ["SOCOMD_stashedGear", false];
            private _newGear = _currentGear;
            _uniformClass = (_currentGear select 3) select 0;
            _vestClass = (_currentGear select 4) select 0;
            _mass = [_uniformClass,_vestClass] call FUNC(getMass);
            _switchGoggles = "G_Diving";
            _switchUniform = "SOCOMD_Uniform_Wetsuit";
            _switchVest = "V_RebreatherB";
            _switchBackpack = "SOCOMD_drybag_blk";
            _newGear set [7, _switchGoggles];
            _uniformLoadout = _newGear select 3;
            _uniformLoadout set [0, _switchUniform]; 
            _newGear set [3, _uniformLoadout];
            _vestLoadout = _newGear select 4;
            _vestLoadout set [0, _switchVest]; 
            _newGear set [4, _vestLoadout];
            _backpackLoadout = _newGear select 5;
            _backpackLoadout set [0, _switchBackpack]; 
            _newGear set [5, _backpackLoadout];
            [_player, _newGear] call EFUNC(qstore,SetUnitLoadout);
            _bagContainer = backpackContainer _player;
            [_player,_mass,_bagContainer] call FUNC(handleMass);
        };
    }, {
        
    }, _title] call ace_common_fnc_progressBar