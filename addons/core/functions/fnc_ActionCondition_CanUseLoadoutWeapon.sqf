#include "script_component.hpp"
_args = _this;
_player = _args select 0;
_weaponId = _args select 1;

_allowed = false;

_loadoutWeaponConfig = (missionConfigFile >> "CfgLoadoutWeapons" >> _weaponId);
if(isNull _loadoutWeaponConfig) then {
    _loadoutWeaponConfig = (configFile >> "CfgLoadoutWeapons" >> _weaponId);
};

if(isNull _loadoutWeaponConfig) exitWith { _allowed };

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];
_loadoutWhitelist = getArray (_loadoutWeaponConfig >> "loadoutWhitelist");
if(count _loadoutWhitelist <= 0) exitWith
{
     _allowed = true;
     _allowed
};

if(_loadoutId in _loadoutWhitelist) then
{
    _allowed = true;
};

_allowed;