_whitelist = [];

_args = _this;
_class = _this select 0;

if(!hasInterface) exitWith {_whitelist};

if(!(_class isKindOf ["ItemCore", configFile >> "CfgWeapons"])) exitWith {_whitelist};

_config = (configFile >> "CfgWeapons" >> _class);
if(isNull _config) exitWith {_whitelist};

_opticModes = (_config >> "ItemInfo" >> "OpticsModes");
if(isNull _opticModes) exitWith {_whitelist};

_loadoutId = player getVariable ["SOCOMD_LOADOUTID", ""];
if(_loadoutId == "") exitWith {_whitelist};

_unitConfig = (missionConfigFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
if(isNull _unitConfig) then {
    _unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
};

if(isNull _unitConfig) exitWith {_whitelist};

_whitelist = getArray(_unitConfig >> "optics");
_whitelist;