params ["_player"];
private _hasDivingGear = _player getVariable ["SOCOMD_hasDivingGear", false];
private _originalGear = _player getVariable ["SOCOMD_originalGear",  getUnitLoadout _player];
_switchUniform = "";
_switchVest = "";
_switchBackpack = "";

if !(_hasDivingGear) then {
	_player setVariable ["SOCOMD_originalGear",  getUnitLoadout _player];
	_uniformClass = (_originalGear select 3) select 0;
	_vestClass = (_originalGear select 4) select 0;
	_mass = [_uniformClass,_vestClass] call SOCOMD_fnc_getMass;
	_newGear = _originalGear;
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
	[_player, _newGear] call SOCOMD_fnc_SetUnitLoadout;
	_bagContainer = backpackContainer _player;
	[_player,_mass,_bagContainer] call SOCOMD_fnc_handleMass;
	// [_player, _bagContainer, 15] call ace_movement_fnc_addLoadToUnitContainer;
	_player setVariable ["SOCOMD_hasDivingGear", true];
} else {
	[_player, _originalGear] call SOCOMD_fnc_SetUnitLoadout;
	_bagContainer = backpackContainer _player;
	[_player,0,_bagContainer,true,true] call SOCOMD_fnc_handleMass;
	_player setVariable ["SOCOMD_hasDivingGear", false];
};
