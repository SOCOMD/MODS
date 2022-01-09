// Initialise HALO. Variables must be present in mission.
HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];

/*
//Unique Map Marker channels for 6 Avn. & Support to decrease map clutter
// For now, EXECUTE MANUALLY on a respective NAMED object. 
6AVN_MAP addAction [
    "<t color='#ff9900'>6 Avn's Map</t>",
    {
    private _6AVNChannel = "6 Avn.";
    private _6AVNChannelID = radioChannelCreate [[128.0, 0.0, 128.0, 0.8], _6AVNChannel, [player], []];
    [_6AVNChannelID, {_this radioChannelAdd [player]}] remoteExec ["call", [0, -2] select isDedicated, _6AVNChannel];
    }
];

WATCHTOWER_MAP addAction [
    "<t color='#ff9900'>Watchtower's Map</t>",
    {
    private _WTChannel = "Watchtower";
    private _WTChannelID = radioChannelCreate [[128.0, 0.0, 128.0, 0.8], _WTChannel, [player], []];
    [_WTChannelID, {_this radioChannelAdd [player]}] remoteExec ["call", [0, -2] select isDedicated, _WTChannel];
    }
];
*/
