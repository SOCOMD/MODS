if(!hasInterface) exitWith {};

_type = typeOf player;
if((_type == "SOCOMD_Homestead") or (_type == "SOCOMD_SASR_Homestead")) then
{
	player remoteExec ["SOCOMD_fnc_ZeusRegisterCurator", 2];
};

[objNull, player] call SOCOMD_fnc_ZeusAddObject;