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

if(_wornUniform == _loadoutUniform) then 
{
	_switchUniform = "CUP_I_B_PMC_Unit_27";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
};

[_player, _switchUniform] call SOCOMD_fnc_Action_ReplaceUniform;
