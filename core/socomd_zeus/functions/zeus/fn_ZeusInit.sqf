if(isServer) then
{
	//Create Admin Zeus so that players show up in curator
	//objNull call SOCOMD_fnc_ZeusRegisterAdminCurator;

	[] remoteExec ["SOCOMD_fnc_ZeusInitLocal", 2, true];
}
else
{
	call SOCOMD_fnc_ZeusInitLocal;
};