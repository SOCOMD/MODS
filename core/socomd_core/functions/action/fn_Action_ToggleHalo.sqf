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

if(("VQI_BOTTLE_DF1_GAS" in ((vestItems player) + (uniformItems player) + (backpackItems player)))) then {
	hint format ["%1", _player getVariable ["savedGps"]];
	_savedGps = _player getVariable ["savedGps"];
	hint format ["%1", _savedGps];
	_player removeItems "VQI_BOTTLE_DF1_GAS";
	_player unassignItem "VQI_ReserveChute";
	_player unassignItem "VQI_AR3";
	_player unassignItem "ACE_Altimeter";
	_player removeItem "VQI_ReserveChute";
	_player removeItem "VQI_AR3";
	_player removeItem "ACE_Altimeter";
	_player removeItem "VQI_Sentinel";
	_player addItem "ItemCompass";
	_player addItem "ItemWatch";
	_player assignItem _savedGps;
	_player assignItem "ItemCompass";
	_player assignItem "ItemWatch";
} else {
	_gpsItem =  assignedItems _player select 4;
	_player setVariable ["savedGps", _gpsItem];
	// hint format ["%1", _player getVariable ["savedGps"]];
	_player unassignItem _gpsItem;
	_player addItem "VQI_ReserveChute";
	_player addItem "VQI_Sentinel";
	_player addItem "VQI_AR3";
	_player addItem "ACE_Altimeter";
	_player assignItem "VQI_ReserveChute";
	_player assignItem "VQI_AR3";
	_player assignItem "ACE_Altimeter";
	removeGoggles _player;
	_player addGoggles "Mask_M50";
	(vestContainer _player) addItemCargoGlobal ["VQI_BOTTLE_DF1_GAS", 1];
};

[_player, _switchUniform] call SOCOMD_fnc_Action_ReplaceUniform;
[_player, _switchVest] call SOCOMD_fnc_Action_ReplaceVest;