// Activate All TOC Systems - UpLink Initialized
//



// Open - OnLine
[dataTerminal,3] call BIS_fnc_dataTerminalAnimate;
sleep 3;

// SOCOM Mission
[[dataTerminal, ["[ Activate Mission ]", "execVM 'vqi_socom\VQI-MissionGenerator\MISSION\vqi_socom_mission_activate.sqf'; [dataTerminal, 1]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;

/*
// HALO/PARA Ops
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Flight Plan: XC-130 Nightmare -- H.A.L.O.", "missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightHALO', 1, true]; missionNamespace setVariable ['flightPARA', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [LogisticsDesk, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Flight Plan: XC-130 Nightmare -- ParaJump", "missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightPARA', 1, true]; missionNamespace setVariable ['flightHALO', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; [LogisticsDesk, 3]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;

// Combat Diver Ops
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 4]"]], "addAction", true, true] call BIS_fnc_MP;

//[[LogisticsDesk, ["Request Transport: HMS Proteus -- Surface", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_surface.sqf'; [LogisticsDesk, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Request Transport: HMS Proteus -- Shallow", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_shallow.sqf'; [LogisticsDesk, 5]"]], "addAction", true, true] call BIS_fnc_MP;
//[[LogisticsDesk, ["Request Transport: HMS Proteus -- Deepest", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_deepest.sqf'; [LogisticsDesk, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 7]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Request HELI -- Infil Option FlightPlan", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_start.sqf'; [LogisticsDesk, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Clear SOCOM Marker", "deleteMarker 'mkrSOCOM'; hint 'CANCELLED \n REQUEST NEW HELI INFIL'; [LogisticsDesk, 9]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 10]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Paperwork: CIA - SAD/SOG MH-9", "VQI_CORE_SUPPORT_HELI = 1; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 1 \n \n CIA - SAD/SOG MH-9'; [LogisticsDesk, 11]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Paperwork: USAF - 160th SOAR MH-9", "VQI_CORE_SUPPORT_HELI = 2; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 2 \n \n USAF - 160th SOAR MH-9'; [LogisticsDesk, 12]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Paperwork: NATO - UH-80 GhostHawk", "VQI_CORE_SUPPORT_HELI = 3; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 3 \n \n NATO - UH-80 GhostHawk'; [LogisticsDesk, 13]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["Paperwork: NATO - CH-67 Huron-Twin", "VQI_CORE_SUPPORT_HELI = 4; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 4 \n \n NATO - CH-67 Huron-Twin \n CAS: AH-99 Blackfoot'; [LogisticsDesk, 14]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 15]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;

// Intelligence
[[AODesk, ["------------------------", "hint ' '; [AODesk, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: COMBATANTS", "execVM 'vqi_scar\VQI-EnemySpawner\AO\rog\vqi_scar_ao_rog_mkrs_intel.sqf'; [AODesk, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: INFANTRY: STD", "execVM 'vqi_scar\VQI-EnemySpawner\AO\inf\vqi_scar_ao_inf_mkrs_intel.sqf'; [AODesk, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: MOTORIZED/VEH", "execVM 'vqi_scar\VQI-EnemySpawner\AO\veh\vqi_scar_ao_veh_mkrs_intel.sqf'; [AODesk, 4]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: AIR OPs: HELI", "execVM 'vqi_scar\VQI-EnemySpawner\AO\hel\vqi_scar_ao_hel_mkrs_intel.sqf'; [AODesk, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: ARMORED/MECH", "execVM 'vqi_scar\VQI-EnemySpawner\AO\arm\vqi_scar_ao_arm_mkrs_intel.sqf'; [AODesk, 6]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["------------------------", "hint ' '; [AODesk, 7]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: RADAR STATIONS", "execVM 'vqi_halo\VQI-DemonDropper\Airspace\Radar\vqi_leap_radar_mkrs_intel.sqf'; [AODesk, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: S.A.M. SITES", "execVM 'vqi_halo\VQI-DemonDropper\Airspace\SAM\vqi_leap_sam_mkrs_intel.sqf'; [AODesk, 9]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: AA-ACK SITES", "execVM 'vqi_halo\VQI-DemonDropper\Airspace\ACK\vqi_leap_ack_mkrs_intel.sqf'; [AODesk, 10]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["------------------------", "hint ' '; [AODesk, 11]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: SUBMARINES", "execVM 'vqi_frogs\VQI-CombatDiver\EnemyWaters\vqi_frogs_ao_sub_mkrs_intel.sqf'; [AODesk, 12]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: NAVAL OPs", "execVM 'vqi_frogs\VQI-CombatDiver\EnemyWaters\vqi_frogs_ao_sub_mkrs_intel.sqf'; [AODesk, 13]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["------------------------", "hint ' '; [AODesk, 14]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: MINEFIELDS", "execVM 'vqi_fuse\VQI-EOD\AO\minefields\vqi_fuse_ao_minefield_mkrs_intel.sqf'; [AODesk, 15]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: SURFZONE", "execVM 'vqi_fuse\VQI-EOD\AO\surfzones\vqi_fuse_ao_surfzone_mkrs_intel.sqf'; [AODesk, 16]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: WATERMINES", "execVM 'vqi_fuse\VQI-EOD\AO\watermines\vqi_fuse_ao_watermine_mkrs_intel.sqf'; [AODesk, 17]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["------------------------", "hint ' '; [AODesk, 18]"]], "addAction", true, true] call BIS_fnc_MP;
[[AODesk, ["INTEL - AO: ALL INTEL", "execVM 'vqi_scar\VQI-EnemySpawner\Intel\vqi_scar_ao_allintel.sqf'; [AODesk, 19]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;

// HALO & ParaJumps Ops
[[JumpMaster, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["ParaJump Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_para.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
//{ JumpMaster addAction ["H.A.L.O. Inspection2","[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf';"]; } remoteExec ["bis_fnc_call",0];

[[HALOCrate, ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; [HALOCrate, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[HALOCrate, ["ParaJump Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_para.sqf'; [HALOCrate, 2]"]], "addAction", true, true] call BIS_fnc_MP;
//{ HALOCrate addAction ["H.A.L.O. Inspection2","[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf';"]; } remoteExec ["bis_fnc_call",0];
sleep 1;

// Enter/Exit Area
[[ExitStand, ["------------------------", "hint ' '; [ExitStand, 1]"]], "addAction", true, true] call BIS_fnc_MP;
[[ExitStand, ["Board Plane -- XC-130 Nightmare", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf'; [ExitStand, 2]"]], "addAction", true, true] call BIS_fnc_MP;
//{ ExitStand addAction ["Board Plane -- XC-130 Nightmare2","[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf';"]; } remoteExec ["bis_fnc_call",0];
[[ExitStand, ["Board Sub -- H.M.S Proteus", "[player] execVM 'vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding_sub_interior.sqf'; [ExitStand, 3]"]], "addAction", true, true] call BIS_fnc_MP;
//[[ExitStand, ["Board Sub -- H.M.S Proteus", "[player] execVM 'vqi_frogs\VQI-CombatDiver\LOC\vqi_frogs_loc_disembark_sub.sqf'; [ExitStand, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[ExitStand, ["Board Heli -- Support HELI", "player moveInCargo (coreHELI select 0); [ExitStand, 4]"]], "addAction", true, true] call BIS_fnc_MP;	// cutText ['', 'BLACK', 1]; sleep 2;
[[ExitStand, ["------------------------", "hint ' '; [ExitStand, 5]"]], "addAction", true, true] call BIS_fnc_MP;
sleep 1;



// VA Crate
0 = ["AmmoboxInit",[VACrate,true]] spawn BIS_fnc_arsenal;
*/
///////////////////////
/* NOTES:


Move ALL into TOC Objects? -- Easier to manage for players?
*/