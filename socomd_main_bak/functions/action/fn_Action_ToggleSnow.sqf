_args = _this;
_player = _this select 0;
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];

if(_loadoutId == "") exitWith { };

_unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);

if(isNull _unitConfig) exitWith { };

_uniformConfig = (_unitConfig >> "Uniform");
if(isNull _uniformConfig) exitWith { };
_loadoutUniform =  getText (_uniformConfig >> "type");

_wornUniform = uniform _player;
_switchUniform = _loadoutUniform;
_switchHeadgear = "H_Watchcap_blk";

if(_wornUniform == _loadoutUniform) then
{
	_switchUniform = "SOCOMD_Uniform_Snow_HoodUp";
};

[_player, _switchUniform] call SOCOMD_fnc_Action_ReplaceUniform;
[_player, _switchHeadgear] call SOCOMD_fnc_Action_ReplaceHeadgear;