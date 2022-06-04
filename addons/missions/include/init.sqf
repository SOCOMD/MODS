enableSentences false;
enableRadio false;
enableSaving [false, false];

// HALO Enable
call{
    HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];
};

//missionNamespace setVariable ["SOCOMD_InitComplete", 1];

// Werthles HC Parameters - Uncomment array when needed. 

// -Repeat on/off, 
// -Repeat delay, 
// -Debug on/off, 
// -Balancing mode (true = advanced, false = simple), 
// -Start delay, 
// -Sync delay, 
// -Setup status report, 
// -Units to ignore (in array format)

//[true,30,false,false,30,3,true,[]] execVM "WerthlesHeadless.sqf";

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
finishMissionInit;
enableEnvironment [false, true];