//
//






//NEW MP Menu
//[[JumpMaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Request NEW H.A.L.O. Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Request NEW ParaJump Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_para.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["ParaJump Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_para.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_halo.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[CrewMaster, ["CLEARED for PARA Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_para.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["Request Cargo Drop", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_cargodrop.sqf'; [CrewMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;

[[VQI_HALO_C130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_C130, 1]"]], "addAction", true, true] call BIS_fnc_MP;