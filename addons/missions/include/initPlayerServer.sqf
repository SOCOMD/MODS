// Initialise HALO. Variables must be present in mission.
HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];

/*
//Map Marker channel for SOLS to decrease clutter
// EXECUTE THIS MANUALLY AT MISSION START AFTER PLAYERS HAVE SORTED OUT THEIR GROUP IDs.
if (isServer) then
{
    private _SOLSChannel = "SOLS";
    private _SOLSChannelID = radioChannelCreate [[128.0, 0.0, 128.0, 0.8], _SOLSChannel, ["ZeroA","SOLSA","HAVOC"], []];
    [_SOLSChannelID, {_this radioChannelAdd ["ZeroA","SOLSA","HAVOC"]}] remoteExec ["call", [0, -2] select isDedicated, _SOLSChannel];
};
*/
