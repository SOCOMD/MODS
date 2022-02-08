#include "script_component.hpp"
params ["_player"];
private _hasDivingGear = _player getVariable ["SOCOMD_hasDivingGear", false];
_switchUniform = "";
_switchVest = "";
_switchBackpack = "";

private _originalGear =  getUnitLoadout _player;
if !(_hasDivingGear) then {
    _player setVariable ["SOCOMD_originalGear", _originalGear];
    _switchGoggles = "G_Diving";
    _switchUniform = "SOCOMD_Uniform_Wetsuit";
    _switchVest = "V_RebreatherB";
    _switchBackpack = "SOCOMD_drybag_blk";
    _backpackLoadout = _originalGear select 5;
    _backpackLoadout set [0, _switchBackpack]; 
    _originalGear set [5, _backpackLoadout];    
    [_player,_originalGear] call EFUNC(core,setStashedGear);
    // Set backpack in stashed Gear
    _uniformLoadout = _originalGear select 3;
    _uniformLoadout set [0, _switchUniform]; 
    _originalGear set [3, _uniformLoadout];
    _vestLoadout = _originalGear select 4;
    _vestLoadout set [0, _switchVest]; 
    _originalGear set [4, _vestLoadout];
    _originalGear set [7, _switchGoggles];
    [_player, _originalGear] call FUNC(SetUnitLoadout);
    _player setVariable ["SOCOMD_hasDivingGear", true];
    _player setVariable ["SOCOMD_hasStashedGear",  true];
} else {
    private _stashedGear = _player getVariable ["SOCOMD_originalGear", _originalGear];
    [_player, _stashedGear] call FUNC(SetUnitLoadout);
    _player setVariable ["SOCOMD_hasDivingGear", false];
    _player setVariable ["SOCOMD_hasStashedGear",  false];
};
