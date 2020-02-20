// to make TOC, Camps, etc more user friendly
// Compositions are pre-set with these Menus






// Logistics Desk
this addAction ["----------------------------","hint ' '; "];
this addAction ["Flight Plan: XC-130 Nightmare -- H.A.L.O.","missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightHALO', 1, true]; missionNamespace setVariable ['flightPARA', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; "];
this addAction ["Flight Plan: XC-130 Nightmare -- ParaJump","missionNamespace setVariable ['planeType', 2, true]; missionNamespace setVariable ['flightPARA', 1, true]; missionNamespace setVariable ['flightHALO', 0, true]; execVM 'vqi_halo\VQI-DemonDropper\FlightPlan\vqi_halo_flightplan.sqf'; "];
this addAction ["----------------------------","hint ' '; "];
this addAction ["----------------------------","hint ' '; "];
this addAction ["Request Submarine: USER SUB NAVIGATION","hint 'Board and Gear-Up INSIDE the Submarine Directly \n \n Board from EXIT DOOR \n \n \n USER will have Navigational Command once inside Submarine'; "];
this addAction ["Request Submarine: HMS Proteus -- Surface", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_surface.sqf'; "];
this addAction ["Request Submarine: HMS Proteus -- Shallow", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_shallow.sqf'; "];
this addAction ["Request Submarine: HMS Proteus -- Deepest", "execVM 'vqi_frogs\VQI-CombatDiver\Transport\vqi_frogs_transport_sub_deepest.sqf'; "];
this addAction ["----------------------------","hint ' '; "];
this addAction ["----------------------------","hint ' '; "];
this addAction ["Support Heli: CIA - SAD/SOG MH-9", "VQI_CORE_SUPPORT_HELI = 1; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 1 \n \n CIA - SAD/SOG MH-9'; "];
this addAction ["Support Heli: USAF - 160th S.O.A.R MH-9", "VQI_CORE_SUPPORT_HELI = 2; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 2 \n \n USAF - 160th SOAR MH-9'; "];
this addAction ["Support Heli: NATO - UH-80 GhostHawk", "VQI_CORE_SUPPORT_HELI = 3; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 3 \n \n NATO - UH-80 GhostHawk'; "];
this addAction ["Support Heli: NATO - CH-67 Huron-Twin", "VQI_CORE_SUPPORT_HELI = 4; publicVariable 'VQI_CORE_SUPPORT_HELI'; hint 'FlightCrew On-Notice \n Code: 4 \n \n NATO - CH-67 Huron-Twin \n CAS: AH-99 Blackfoot'; "];
this addAction ["----------------------------","hint ' '; "];
this addAction ["Request HELI -- Infil Option FlightPlan", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_start.sqf'; "];
this addAction ["Clear SOCOM Marker", "deleteMarker 'mkrSOCOM'; hint 'CANCELLED \n REQUEST NEW HELI INFIL'; "];
this addAction ["----------------------------","hint ' '; "];





// AO Desk
this addAction ["----------------------------","hint ' '; "];
this addAction ["INTEL - AO: GROUND FORCES","vqi_scar\VQI-EnemySpawner\Intel\vqi_scar_ao_groundforces.sqf"];
this addAction ["----------------------------","hint ' '; "];
this addAction ["INTEL - AO: ROGUE/UNKNOWN","vqi_scar\VQI-EnemySpawner\AO\rog\vqi_scar_ao_rog_mkrs_intel.sqf"];
this addAction ["INTEL - AO: INFANTRY: STD","vqi_scar\VQI-EnemySpawner\AO\inf\vqi_scar_ao_inf_mkrs_intel.sqf"];
this addAction ["INTEL - AO: MOTORIZED/VEH","vqi_scar\VQI-EnemySpawner\AO\veh\vqi_scar_ao_veh_mkrs_intel.sqf"];	
this addAction ["INTEL - AO: AIR OPs: HELI","vqi_scar\VQI-EnemySpawner\AO\hel\vqi_scar_ao_hel_mkrs_intel.sqf"];
this addAction ["INTEL - AO: AIR OPs: JETs","vqi_scar\VQI-EnemySpawner\AO\air\vqi_scar_ao_air_mkrs_intel.sqf"];
this addAction ["INTEL - AO: ARMORED/MECH","vqi_scar\VQI-EnemySpawner\AO\arm\vqi_scar_ao_arm_mkrs_intel.sqf"];
this addAction ["----------------------------","hint ' '; "];
this addAction ["INTEL - AO: RADAR ANTENNA","vqi_scar\VQI-EnemySpawner\AO\xDEF\aa\RAD\vqi_scar_rad_mkrs_intel.sqf"]; 
this addAction ["INTEL - AO: S.A.M. SITES","vqi_scar\VQI-EnemySpawner\AO\xDEF\aa\SAM\vqi_scar_sam_mkrs_intel.sqf"]; 
this addAction ["INTEL - AO: FLAK POD SITES","vqi_scar\VQI-EnemySpawner\AO\xDEF\aa\ACK\vqi_scar_ack_mkrs_intel.sqf"]; 
this addAction ["----------------------------","hint ' '; "];
this addAction ["INTEL - AO: SUBMARINES","vqi_scar\VQI-EnemySpawner\AO\xNAV\sub\vqi_scar_ao_sub_mkrs_intel.sqf"];
this addAction ["INTEL - AO: NAVAL OPs","vqi_scar\VQI-EnemySpawner\AO\xNAV\nav\vqi_scar_ao_nav_mkrs_intel.sqf"];
this addAction ["----------------------------","hint ' '; "];
this addAction ["INTEL - AO: MINEFIELDS","vqi_scar\VQI-EnemySpawner\AO\xDEF\mf\minefields\vqi_scar_minefield_mkrs_intel.sqf"]; 
this addAction ["INTEL - AO: SURFZONE","vqi_scar\VQI-EnemySpawner\AO\xDEF\mf\surfzones\vqi_scar_surfzone_mkrs_intel.sqf"]; 
this addAction ["INTEL - AO: WATERMINES","vqi_scar\VQI-EnemySpawner\AO\xDEF\mf\watermines\vqi_scar_watermine_mkrs_intel.sqf"]; 
this addAction ["----------------------------","hint ' '; "];
this addAction ["INTEL - AO: ALL INTEL","vqi_scar\VQI-EnemySpawner\Intel\vqi_scar_ao_allintel.sqf"];
this addAction ["----------------------------","hint ' '; "];







// HALO & ParaJump Ops
this addAction ["H.A.L.O. Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_halo.sqf'; "];
this addAction ["ParaJump Inspection", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_inspection_para.sqf'; "];







// Enter/Exit TOC
this addAction ["------------------------", "hint ' '; "];
this addAction ["Board Plane -- XC-130 Nightmare", "[player] execVM 'vqi_halo\VQI-DemonDropper\FlightCrew\vqi_halo_takeoff.sqf'; "];
this addAction ["Board Sub -- H.M.S Proteus", "[player] execVM 'vqi_frogs\VQI-CombatDiver\Boarding\vqi_frogs_boarding_sub_interior.sqf'; "];
this addAction ["Board Heli -- Support HELI", "player moveInCargo (coreHELI select 0); "];
this addAction ["------------------------", "hint ' '; "];








////////////////////////
/* NOTES:



*/