HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];

// Ensure groupIDs are correct for cTab ORBAT.
/*
call{
        ZeroA setGroupIdGlobal ["0-A"];
        HAVOC setGroupIdGlobal ["HAVOC"];
        Homestead0 setGroupIdGlobal ["Homestead"];
        OVERFLOW1 setGroupIdGlobal ["OVERFLOW-1"];
        OVERFLOW2 setGroupIdGlobal ["OVERFLOW-2"];
        PHANTOM0 setGroupIdGlobal ["PHANTOM-0"];
        PHANTOM1 setGroupIdGlobal ["PHANTOM-1"];
        PHANTOM2 setGroupIdGlobal ["PHANTOM-2"];
        PHANTOM3 setGroupIdGlobal ["PHANTOM-3"];
        RAIDER0 setGroupIdGlobal ["RAIDER-0"];
        RAIDER1 setGroupIdGlobal ["RAIDER-1"];
        RAIDER2 setGroupIdGlobal ["RAIDER-2"];
        RAIDER3 setGroupIdGlobal ["RAIDER-3"];
        SOLSA setGroupIdGlobal ["SOLS-A"];
        WT1 setGroupIdGlobal ["WT-1"];
        WT2 setGroupIdGlobal ["WT-2"];
};
*/

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
