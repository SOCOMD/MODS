if(!hasInterface) exitWith {};

_zeusWhitelist = [
	"SOCOMD_Homestead",
	"SOCOMD_SASR_Homestead",
	"SOCOMD_Trainer"
];

_type = typeOf player;
if(_type in _zeusWhitelist) then
{
	player remoteExec ["SOCOMD_fnc_ZeusRegisterCurator", 2];
};

[objNull, player] call SOCOMD_fnc_ZeusAddObject;