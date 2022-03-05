#include "script_component.hpp"
params ["_player"];
private _hasDivingGear = _player getVariable ["SOCOMD_hasDivingGear", false];
_switchUniform = "";
_switchVest = "";
_switchBackpack = "";


private _currentGear = getUnitLoadout _player;
if !(_hasDivingGear) then {
    private _uniformClass = (_currentGear select 3) select 0;
    private _vestClass = (_currentGear select 4) select 0;
    private _bagClass = (_currentGear select 5) select 0;
    private _goggleClass = _currentGear select 7;
    _player setVariable ["SOCOMD_originalGear",  [_uniformClass, _vestClass, _bagClass,_goggleClass]];
    _switchGoggles = "G_Diving";
    _switchUniform = "SOCOMD_Uniform_Wetsuit";
    _switchVest = "V_RebreatherB";
    _switchBackpack = "SOCOMD_drybag_blk";
    _currentGear set [7, _switchGoggles];
    _uniformLoadout = _currentGear select 3;
    _uniformLoadout set [0, _switchUniform]; 
    _currentGear set [3, _uniformLoadout];
    _vestLoadout = _currentGear select 4;
    _vestLoadout set [0, _switchVest]; 
    _currentGear set [4, _vestLoadout];
    _backpackLoadout = _currentGear select 5;
    _backpackLoadout set [0, _switchBackpack]; 
    _currentGear set [5, _backpackLoadout];
    [_player, _currentGear] call FUNC(SetUnitLoadout);
    _player setVariable ["SOCOMD_hasDivingGear", true];
} else {
    _player getVariable ["SOCOMD_originalGear",  ["","" ,"", "" ]] params ["_ogUniform", "_ogVest","_ogBag", "_ogGoggles"];_currentGear set [7, _switchGoggles];
    _uniformLoadout = _currentGear select 3;
    _uniformLoadout set [0, _ogUniform]; 
    _currentGear set [3, _uniformLoadout];
    _vestLoadout = _currentGear select 4;
    _vestLoadout set [0, _ogVest]; 
    _currentGear set [4, _vestLoadout];
    _backpackLoadout = _currentGear select 5;
    _backpackLoadout set [0, _ogBag]; 
    _currentGear set [5, _backpackLoadout];
    _currentGear set [7, _ogGoggles];
    [_player, _currentGear] call FUNC(SetUnitLoadout);
    _player setVariable ["SOCOMD_originalGear",  ["", "", "", ""]];
    _player setVariable ["SOCOMD_hasDivingGear", false];
};
