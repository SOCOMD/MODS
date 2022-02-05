enableSentences false;
enableRadio false;
enableSaving [false, false];

// Dynamic Simulation Enable
if(isServer)then{
    enableDynamicSimulationSystem true;
    "Group" setDynamicSimulationDistance 2000;
    "Vehicle" setDynamicSimulationDistance 2500;
    "Prop" setDynamicSimulationDistance 50;
    "EmptyVehicle" setDynamicSimulationDistance 250;
    "IsMoving" setDynamicSimulationDistanceCoef 1.5;
};

// HALO Enable
call{
    HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];
};

//Using ACRE2
//[] execVM "include\acre2_compat.sqf";
//missionNamespace setVariable ["SOCOMD_InitComplete", 1];

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
finishMissionInit;
enableEnvironment [false, true];