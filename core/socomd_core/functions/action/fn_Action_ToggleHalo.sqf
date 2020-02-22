_args = _this;
_player = _this select 0;
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];

if(_loadoutId == "") exitWith { };

_unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);

if(isNull _unitConfig) exitWith { };

_vestConfig = (_unitConfig >> "Vest");
if(isNull _vestConfig) exitWith { };
_loadoutVest =  getText (_vestConfig >> "type");

_uniformConfig = (_unitConfig >> "Uniform");
if(isNull _uniformConfig) exitWith { };

_uniformType = [] call SOCOMD_fnc_GetWorldUniform;
_loadoutUniformType = getText (_uniformConfig >> "type");
if(!(_loadoutUniformType == "")) then {
	_uniformType = _loadoutUniformType;
};

_wornVest = vest _player;
_switchUniform = _uniformType;
_switchVest = _loadoutVest;

if(_wornVest == _loadoutVest) then {
	removeVest _player;
	_player addVest _loadoutVest;
	_switchVest = "VQI_Vest_Dragonfly_GAS";
	_player addItemToVest "VQI_BOTTLE_DF1_GAS";
};

[_player, _switchUniform] call SOCOMD_fnc_Action_ReplaceUniform;
[_player, _switchVest] call SOCOMD_fnc_Action_ReplaceVest;