if(isServer) then {
	[] remoteExec ["SOCOMD_fnc_ZeusInitLocal", 2, true];
} else {
	call SOCOMD_fnc_ZeusInitLocal;
};