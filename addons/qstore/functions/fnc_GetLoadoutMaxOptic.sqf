#include "script_component.hpp"
_unrestrictedOptic = "";
_args = _this;
_player = _args select 0;

if(!(isPlayer _player)) exitWith {_unrestrictedOptic};

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];
if(_loadoutId == "") exitWith {_unrestrictedOptic};

_unitConfig = (missionConfigFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
if(isNull _unitConfig) then {
    _unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
};

if(isNull _unitConfig) exitWith {_unrestrictedOptic};

_maxOptic = getText(_unitConfig >> "maxOptic");
if(_maxOptic == "") exitWith {_unrestrictedOptic};

_maxOptic;