_args = _this;
_player = _args select 0;
_vestId = _args select 1;

_allowed = false;

_loadoutVestConfig = (configFile >> "CfgLoadoutVests" >> _vestId);
if(isNull _loadoutVestConfig) exitWith { _allowed };

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", "SOCOMD_Unarmed"];
_loadoutWhitelist = getArray (_loadoutVestConfig >> "loadoutWhitelist");
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