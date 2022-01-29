enableSentences false;
enableRadio false;
enableSaving [false, false];

//Using ACRE2
//[] execVM "include\acre2_compat.sqf";

missionNamespace setVariable ["SOCOMD_InitComplete", 1];

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
finishMissionInit;
enableEnvironment [false, true];