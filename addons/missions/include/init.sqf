enableSentences false;
enableRadio false;
enableSaving [false, false];

// HALO Enable
call{
    HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];
};

//missionNamespace setVariable ["SOCOMD_InitComplete", 1];

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
finishMissionInit;
enableEnvironment [false, true];