enableSentences false;
enableRadio false;

//Using ACRE2
[] execVM "include\acre2_compat.sqf";

// FOB initialisation for spawners & group IDs
// [] execVM "initFOB.sqf";

// Works fine for me, probably an issue with the Vanilla corpseRemovalManager which is being disabled for testing.
// If this issue persists for others this could be called via module when needed, instead of a scheduled loop.
// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
//[] spawn {
//    while {true} do {{
//        deleteGroup _x
//    }forEach allGroups;
//    sleep 61;
//    };
//};

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
sleep 0.2;
enableEnvironment [false, true];

// Initialise ASORVS & HALO. Variables must be present in mission. Otherwise can be manually run via Zeus. 
[BOXSPAWNER_1, BOXSPAWNAREA_1, "SUPPLY", "LAND"] call SOCOMD_fnc_ASORVSSetup;
[LANDSPAWNER_1, LANDSPAWNAREA_1, "SUPPLY", "LAND"] call SOCOMD_fnc_ASORVSSetup;
[LANDSPAWNER_1, LANDSPAWNAREA_1, "LAND", "LAND"] call SOCOMD_fnc_ASORVSSetup;
[AIRSPAWNER_1, AIRSPAWNAREA_1, "AIR_ROTARY", "LAND"] call SOCOMD_fnc_ASORVSSetup;
[AIRSPAWNER_2, AIRSPAWNAREA_2, "AIR_ROTARY", "LAND"] call SOCOMD_fnc_ASORVSSetup;
[SEASPAWNER_1, SEASPAWNAREA_1, "SEA", "SEA"] call SOCOMD_fnc_ASORVSSetup;

HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];

missionNamespace setVariable ["SOCOMD_InitComplete", 1];
