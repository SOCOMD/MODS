#include "script_component.hpp"
params ["_player","_title","_changingOut"];
if (stance _player != "CROUCH" && stance _player != "PRONE") then {
    _player playActionNow "Crouch";
};

[20, [_player,_changingOut], {
   params ["_args"]; 
   _args params ["_player","_changingOut"];
        private _currentGear = getUnitLoadout _player;
        
        if !(_changingOut) then {
            private _switchGoggles = "G_Diving";
            private _switchUniform = "SOCOMD_Uniform_Wetsuit";
            private _switchVest = "V_RebreatherB";
            _currentGear set [7, _switchGoggles];
            _uniformLoadout = _currentGear select 3;
            _uniformLoadout set [0, _switchUniform]; 
            _currentGear set [3, _uniformLoadout];
            _vestLoadout = _currentGear select 4;
            _vestLoadout set [0, _switchVest]; 
            _currentGear set [4, _vestLoadout];
            [_player, _currentGear] call EFUNC(qstore,SetUnitLoadout);
        } else {
            _player getVariable ["SOCOMD_originalGear",  ["","" ,"", "" ]] params ["_ogUniform", "_ogVest","_ogBag", "_ogGoggles"];
            _currentGear set [7, _switchGoggles];
            _uniformLoadout = _currentGear select 3;
            _uniformLoadout set [0, _ogUniform]; 
            _currentGear set [3, _uniformLoadout];
            _vestLoadout = _currentGear select 4;
            _vestLoadout set [0, _ogVest]; 
            _currentGear set [4, _vestLoadout];
            _currentGear set [7, _ogGoggles];
            [_player, _currentGear] call EFUNC(qstore,SetUnitLoadout);
        };
        _player setVariable ["SOCOMD_stashedGear", _changingOut];
    }, {
        
    }, _title] call ace_common_fnc_progressBar