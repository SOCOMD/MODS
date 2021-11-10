enableSentences false;
enableRadio false;

//Using ACRE2
[] execVM "include\acre2_compat.sqf";

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
finishMissionInit;
enableEnvironment [false, true];

missionNamespace setVariable ["SOCOMD_InitComplete", 1];
