// Section 20 Tactical Operations Centre
//

private ["_start0"];

_start0 = [0,0,0];

/*
if (isServer) then {
	// _var = [ COMP_NAME, POS_ATL, OFFSET, DIR, ALIGN_TERRAIN, ALIGN_WATER ] call LARs_fnc_spawnComp;
	//_S20TOC = [ "S20TOC", _start0, [0,0,1000], 0, false, true ] call LARs_fnc_spawnComp;
	["S20TOC"] call LARs_fnc_spawnComp;
};
*/

sleep 15;
player attachTo [VQI_CORE_TOC2,[-6.5,0.5,-1]]; sleep 1; detach player;
sleep 1;


if (isServer) then {
	GCS1 setObjectTextureGlobal [3, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_data_1.jpg"];
	GCS1 setObjectTextureGlobal [2, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_drone_1.jpg"];
	TacScreen1 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_weather_3.jpg"];
	TacScreen2 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_sat_3.jpg"];
	GCS2 setObjectTextureGlobal [3, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_map_1.jpg"];
	GCS2 setObjectTextureGlobal [2, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_map_2.jpg"];

	GCS3 setObjectTextureGlobal [3, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_radar_1.jpg"];
	GCS3 setObjectTextureGlobal [2, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_radar_2.jpg"];
	GCS4 setObjectTextureGlobal [3, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_map_3.jpg"];
	GCS4 setObjectTextureGlobal [2, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\2x2\gcs_sur_1.jpg"];

	TSC setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_cctv_1.jpg"];

	TSWL1 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_tac_1.jpg"];
	TSWL2 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_map_1.jpg"];
	TSWL3 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_weather_2.jpg"];
	TSWL4 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_map_2.jpg"];

	TSWR1 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_tac_2.jpg"];
	TSWR2 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_sat_1.jpg"];
	TSWR3 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_data_1.jpg"];
	TSWR4 setObjectTextureGlobal [0, "vqi_core\VQI-StartingOptions\StartLocation\TOC\TacScreen\images\ts_sat_2.jpg"];

	//sleep 10 + (random 90);
	//};





	sleep 1;




	// GCS no1
	GCSguy1 attachTo [GL1,[0.3, 0.01, -0.1]];
	 [[GCSguy1,"Unarmed_Reading_Clipboard"], 
	 "switchMove"] call BIS_fnc_MP;
	sleep 1;
	 
	 
	 
	// GCS no2
	GL2 attachTo [GCS2,[0, 0, 0]]; sleep 0.1;
	detach GL2;
	GCSguy2 attachTo [GL2,[-0.07, -0.67, -1.09]]; 
	GCSchair2 attachTo [GCS2,[0, -0.60, -0.42]];
	sleep 0.1; 
	detach GCSchair2;
	GCSchair2 setDir (getDir GCS2 - 180);
	sleep 0.1;
	 [[GCSguy2,"UAV_Pilot_Idle"], 
	 "switchMove"] call BIS_fnc_MP;

	 
	 // Commander
	CMDR attachTo [GLC,[0, 0.3, -0.14]];
	 [[CMDR,"InBaseMoves_table1"], 
	 "switchMove"] call BIS_fnc_MP;
	 
	 CMDR2 attachTo [GLC2,[0, 0.3, -0.14]];
	 CMDR2 setDir (getDir GLC2 + 90);
	 [[CMDR2,"InBaseMoves_HandsBehindBack1"], 
	 "switchMove"] call BIS_fnc_MP;
	 // InBaseMoves_table1
	 // Acts_A_M01_briefing
	 // InBaseMoves_HandsBehindBack1
	 // HubStandingUB_idle1
	 
	 // GCS no3
	GCSguy3 attachTo [GL4,[-0.07, -0.67, -1.05]]; 
	sleep 0.1; 
	 [[GCSguy3,"UAV_Observer_Idle"], 
	 "switchMove"] call BIS_fnc_MP;
	 
	 
	 // GCS no4
	GL4 attachTo [GCS4,[0, 0, 0]]; sleep 0.1;
	detach GL4;
	GCSguy4 attachTo [GL4,[-0.07, -0.67, -1.09]]; 
	GCSchair4 attachTo [GCS4,[0, -0.60, -0.42]];
	sleep 0.1; 
	detach GCSchair4;
	GCSchair4 setDir (getDir GCS4 - 180);
	sleep 0.1;
	 [[GCSguy4,"UAV_Pilot_Idle"], 
	 "switchMove"] call BIS_fnc_MP;
	 
	 
	 // SEAL sitting
	GLbox attachTo [BoxBench,[0, 0, 0]]; sleep 0.1;
	detach GLbox; GLbox setDir (getDir BoxBench -180);
	SEALboxGuy attachTo [GLbox,[0, 0.1, -0.02]]; 
	sleep 0.1;
	 [[SEALboxGuy,"HubSittingChairA_idle1"], 
	 "switchMove"] call BIS_fnc_MP;
	 
	 
	sleep 1;
	 
	 
	 
	 
	 
	// Lockers
	locker1 attachTo [GLlockers,[0.55, 0.97, 1.3]]; locker1 setDir 90; 
	locker2 attachTo [GLlockers,[0.55, 0.45, 1.3]]; locker2 setDir 90; 
	locker3 attachTo [GLlockers,[0.55,-0.55, 1.3]]; locker3 setDir 90;
	locker4 attachTo [GLlockers,[0.55,-1.08, 1.3]]; locker4 setDir 90;
	sleep 1;
	 
	// Interrogation Container
	container attachTo [GLcontainer,[0.15,3.6,1.2]]; container setDir -90;
	
	
	// HALO Crate
	if (!isNil "HALOCrate") then {
	HALOCrate attachTo [GLhalo,[0,-1.1,0.8]]; HALOcrate setDir 0; }
 };
 
 
 

	
	
	
	
//player attachTo [S20TOC,[-6.5,0.5,-1]]; sleep 1; detach Player;
/////////////////////////
/* NOTES:



*/