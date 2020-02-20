//	HotFix / Alt for NO RADIO or Odd Mapgrid Configs
//







SR_HQ_NAME_MP = "PAPA BEAR";
_callSign = "ECHO ONE";





// Set HQ Battle Net
_radioN = createGroup west;
_pos00N = [0,0,0];
SR_NET_HQ1_MP = _radioN createUnit ["LOGIC",_pos00N,[],0,""];

SR_NET_HQ1_MP setGroupID [SR_HQ_NAME_MP];	// HQ Set














if (VQI_CORE_HINTS == 1) then { hint "heli_pickup_mapclick.sqf"; };
sleep 1;


private ["_gpsLOC","_player","_rngCHX","_tooFAR","_maxNUM","_callSign","_radio","_pos00","_logic","_mapSize","_mapHalf","_mapCent","_rDir","_sLoc","_nameLZ","_mkrLZ","_heli","_posFSP","_smoke"];


//_gpsLOC = _this select 0;
_player = _this select 0;
_rngCHX = 0;
_tooFAR = false;
_maxNUM = false;
//_callSign = 0;


_radio = createGroup west;
_pos00 = [0,0,0];
_logic = _radio createUnit ["LOGIC",_pos00,[],0,""];
/*
if (SR_CH_TRANSMIT == 1) then { _logic setGroupID [SR_GID_CH1]; _callSign = SR_GID_CH1; };
if (SR_CH_TRANSMIT == 2) then { _logic setGroupID [SR_GID_CH2]; _callSign = SR_GID_CH2; };
if (SR_CH_TRANSMIT == 3) then { _logic setGroupID [SR_GID_CH3]; _callSign = SR_GID_CH3; };
if (SR_CH_TRANSMIT == 4) then { _logic setGroupID [SR_GID_CH4]; _callSign = SR_GID_CH4; };
if (SR_CH_TRANSMIT == 5) then { _logic setGroupID [SR_GID_CH5]; _callSign = SR_GID_CH5; };
if (SR_CH_TRANSMIT == 6) then { _logic setGroupID [SR_GID_CH6]; _callSign = SR_GID_CH6; };
if (SR_CH_TRANSMIT == 7) then { _logic setGroupID [SR_GID_CH7]; _callSign = SR_GID_CH7; };
if (SR_CH_TRANSMIT == 8) then { _logic setGroupID [SR_GID_CH8]; _callSign = SR_GID_CH8; };
if (SR_CH_TRANSMIT == 9) then { _logic setGroupID [SR_GID_CH9]; _callSign = SR_GID_CH9; };
if (SR_CH_TRANSMIT == 0) then { _logic setGroupID [SR_GID_CH0]; _callSign = SR_GID_CH0; };
*/


_code1 = ["ALPHA","BRAVO","CHARLIE","DELTA","ECHO","FOXTROT","GOLF","HOTEL","INDIA","JULIETT","KILO","LIMA","MIKE","NOVEMBER","OSCAR","PAPA","QUEBEC","ROMEO","SIERRA","TANGO","UNIFORM","VICTOR","WHISKEY","XRAY","YANKEE","ZULU"] call BIS_fnc_selectRandom;
_code2 = ["ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","ZERO"] call BIS_fnc_selectRandom;
_code3 = ["ALPHA","BRAVO","CHARLIE","DELTA","ECHO","FOXTROT","GOLF","HOTEL","INDIA","JULIETT","KILO","LIMA","MIKE","NOVEMBER","OSCAR","PAPA","QUEBEC","ROMEO","SIERRA","TANGO","UNIFORM","VICTOR","WHISKEY","XRAY","YANKEE","ZULU"] call BIS_fnc_selectRandom;

_player sideChat format ["%1... Requesting %2...",SR_HQ_NAME_MP,_callSign];
sleep 2 + (random 2);

_player sideChat format ["Authenticate... %1, %2, %3, Over!",_code1,_code2,_code3];
sleep 5 + (random 10);

SR_NET_HQ1_MP commandChat "Net Secure. Verified. Stand By..."; sleep (5 + random 5);



/*
// Support Radio - Ch.X - Range Check
if (SR_CH_TRANSMIT == 1) then { if (SR_RNG_CH1 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH1; }; if (_rngCHX > SR_RNG_CH1) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 2) then { if (SR_RNG_CH2 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH2; }; if (_rngCHX > SR_RNG_CH2) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 3) then { if (SR_RNG_CH3 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH3; }; if (_rngCHX > SR_RNG_CH3) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 4) then { if (SR_RNG_CH4 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH4; }; if (_rngCHX > SR_RNG_CH4) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 5) then { if (SR_RNG_CH5 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH5; }; if (_rngCHX > SR_RNG_CH5) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 6) then { if (SR_RNG_CH6 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH6; }; if (_rngCHX > SR_RNG_CH6) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 7) then { if (SR_RNG_CH7 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH7; }; if (_rngCHX > SR_RNG_CH7) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 8) then { if (SR_RNG_CH8 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH8; }; if (_rngCHX > SR_RNG_CH8) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 9) then { if (SR_RNG_CH9 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH9; }; if (_rngCHX > SR_RNG_CH9) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 0) then { if (SR_RNG_CH0 == -1) then { _rngCHX = -2; } else { _rngCHX = _player distance2D getMarkerPos SR_MKR_CH0; }; if (_rngCHX > SR_RNG_CH0) then { _tooFAR = true; }; };
if (_tooFAR) exitWith { SR_NET_HQ1_MP commandChat "Negative. Request Denied."; hint "- OUT OF RANGE -"; };


// Support Radio - Ch.X - Number Check
if (SR_CH_TRANSMIT == 1) then { if (SR_CALL_CH1 > SR_NUM_CH1) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 2) then { if (SR_CALL_CH2 > SR_NUM_CH2) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 3) then { if (SR_CALL_CH3 > SR_NUM_CH3) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 4) then { if (SR_CALL_CH4 > SR_NUM_CH4) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 5) then { if (SR_CALL_CH5 > SR_NUM_CH5) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 6) then { if (SR_CALL_CH6 > SR_NUM_CH6) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 7) then { if (SR_CALL_CH7 > SR_NUM_CH7) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 8) then { if (SR_CALL_CH8 > SR_NUM_CH8) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 9) then { if (SR_CALL_CH9 > SR_NUM_CH9) then { _maxNUM = true; }; };
if (SR_CH_TRANSMIT == 0) then { if (SR_CALL_CH0 > SR_NUM_CH0) then { _maxNUM = true; }; };
if (_maxNUM) exitWith { SR_NET_HQ1_MP commandChat "Negative. Request Denied."; hint "- LIMIT EXCEEDED -"; };


// Support Radio - Ch.X - Call Count
if (SR_CH_TRANSMIT == 1) then { missionNameSpace setVariable ["SR_CALL_CH1", (SR_CALL_CH1 + 1), true]; };	// SR_CALL_CH1 = SR_CALL_CH1 + 1;
if (SR_CH_TRANSMIT == 2) then { missionNameSpace setVariable ["SR_CALL_CH2", (SR_CALL_CH2 + 1), true]; };
if (SR_CH_TRANSMIT == 3) then { missionNameSpace setVariable ["SR_CALL_CH3", (SR_CALL_CH3 + 1), true]; };
if (SR_CH_TRANSMIT == 4) then { missionNameSpace setVariable ["SR_CALL_CH4", (SR_CALL_CH4 + 1), true]; };
if (SR_CH_TRANSMIT == 5) then { missionNameSpace setVariable ["SR_CALL_CH5", (SR_CALL_CH5 + 1), true]; };
if (SR_CH_TRANSMIT == 6) then { missionNameSpace setVariable ["SR_CALL_CH6", (SR_CALL_CH6 + 1), true]; };
if (SR_CH_TRANSMIT == 7) then { missionNameSpace setVariable ["SR_CALL_CH7", (SR_CALL_CH7 + 1), true]; };
if (SR_CH_TRANSMIT == 8) then { missionNameSpace setVariable ["SR_CALL_CH8", (SR_CALL_CH8 + 1), true]; };
if (SR_CH_TRANSMIT == 9) then { missionNameSpace setVariable ["SR_CALL_CH9", (SR_CALL_CH9 + 1), true]; };
if (SR_CH_TRANSMIT == 0) then { missionNameSpace setVariable ["SR_CALL_CH0", (SR_CALL_CH0 + 1), true]; };
*/

_logic sideChat "Solid Copy. Bird Inbound. Stand By to Pop Smoke. Will Advise..."; sleep (2 + random 5);











if ("ItemRadio" in assignedItems _player) then {

	openMap true;
	hint "L-Click to Mark LZ";



	_smoke = 0;


	_ROE = "CARELESS";
	_heli = "B_Heli_Light_01_F";

	// Heli Classname
	if (VQI_CORE_SUPPORT_HELI == 1) then { _heli = VQI_CORE_COREHELI_1; };
	if (VQI_CORE_SUPPORT_HELI == 2) then { _heli = VQI_CORE_COREHELI_2; };
	if (VQI_CORE_SUPPORT_HELI == 3) then { _heli = VQI_CORE_COREHELI_3; };
	if (VQI_CORE_SUPPORT_HELI == 4) then { _heli = VQI_CORE_COREHELI_4; };

	// Heli
	_spawn = _player getPos [3000,random 360];
	coreHELI = createVehicle [_heli, _spawn, [], 0, "FLY"];
	createVehicleCrew coreHELI;
	publicVariable "coreHELI"; 
	sleep 2;


	// set helicopter options?
	if (typeOf coreHELI == "C_Heli_Light_01_civil_F") then { coreHELI animate ["AddDoors",1]; coreHELI setObjectTextureGlobal [0,"A3\Air_F\Heli_light_01\Data\heli_light_01_ext_co.paa"]; };
	if (typeOf coreHELI == "B_Heli_Light_01_F") then { coreHELI allowDamage false; /* coreHELI setCaptive true;*/ coreHELI setObjectTextureGlobal [0,"A3\Air_F\Heli_light_01\Data\heli_light_01_ext_ion_co.paa"]; };
	if (typeOf coreHELI == "B_Heli_Transport_01_camo_F") then { coreHELI allowDamage false; };
	if (typeOf coreHELI == "B_Heli_Transport_03_F") then { if (random 100 < 75) then { coreHELI allowDamage false; }; };		// 75% of armor
	coreHELI setCaptive true;


	// Map Click Option? --------------------------------------------------------------------
	MapClicked = false;
	onMapSingleClick "clickPos = _pos; MapClicked = true; onMapSingleClick {};";
	waitUntil {MapClicked};

	if (!isNil "newClick") then { deleteVehicle newClick; sleep 2; };
	newClick = "Land_PenBlack_F" createVehicle clickPos;

	// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
	//_posFSP = [getPos clickPos, 0, 200, 20, 1, 0, 0] call BIS_fnc_findSafePos;
	///////////////////-----------------------------------------------------------------------

	deleteMarker "mkrLZ";
	_nameLZ = name _player;


	_mkrLZ = createMarker["mkrLZ", getPos newClick];		// _gpsLOC
	"mkrLZ" setMarkerShape "ICON";
	"mkrLZ" setMarkerType "hd_pickup";
	"mkrLZ" setMarkerColor "ColorBlack";
	"mkrLZ" setMarkerText format [" LZ %1",_nameLZ];
	//"mkrLZ" setMarkerAlpha 0;
	sleep 1;
	openMap false;





	_heli = coreHELI;


	if (!isNil "coreLZ") then { deleteVehicle coreLZ; sleep 1; };
	coreLZ = createVehicle ["Land_HeliPadEmpty_F", getPos newClick, [], 0, "CAN_COLLIDE"];
	sleep 5;


	_heli move position coreLZ;
	_heli allowFleeing 0;
	_heli setSpeedMode "FULL";


	// CARGO - Weapons & Equipment
	clearWeaponCargoGlobal coreHELI;
	clearMagazineCargoGlobal coreHELI;
	clearItemCargoGlobal coreHELI;
	clearBackpackCargoGlobal coreHELI;

	if (VQI_CORE_SUPPORT_HELI == 1) then { 	// MH-9 SAD/SOG
		coreHELI addWeaponCargoGlobal ["SMG_05_F",2];
		coreHELI addMagazineCargoGlobal ["30Rnd_9x21_Mag_SMG_02",10];
		coreHELI addWeaponCargoGlobal ["arifle_AKS_F",1];
		coreHELI addMagazineCargoGlobal ["30Rnd_545x39_Mag_F",6];
	};
	if (VQI_CORE_SUPPORT_HELI == 2) then { 	// MH-9 160th SOAR
		coreHELI addWeaponCargoGlobal ["SMG_02_F",4];
		coreHELI addMagazineCargoGlobal ["30Rnd_9x21_Mag_SMG_02",40];
		coreHELI addWeaponCargoGlobal ["srifle_DMR_03_DMS_F",1];
		coreHELI addMagazineCargoGlobal ["20Rnd_762x51_Mag",20];
		coreHELI addItemCargoGlobal ["optic_MRCO",4];
		coreHELI addItemCargoGlobal ["optic_Nightstalker",1];
		coreHELI addItemCargoGlobal ["acc_flashlight",4];
		coreHELI addItemCargoGlobal ["Rangefinder",1];
		coreHELI addMagazineCargoGlobal ["MiniGrenade",16];
		coreHELI addMagazineCargoGlobal ["HandGrenade",8];
		coreHELI addMagazineCargoGlobal ["B_IR_Grenade",4];
		coreHELI addMagazineCargoGlobal ["Chemlight_red",10];
		coreHELI addMagazineCargoGlobal ["SmokeShellBlue",4];
		coreHELI addMagazineCargoGlobal ["DemoCharge_Remote_Mag",2];
	};
	if (VQI_CORE_SUPPORT_HELI == 3) then {	// UH-80 Ghost Hawk
		coreHELI addWeaponCargoGlobal ["arifle_SPAR_01_blk_F",4];
		coreHELI addMagazineCargoGlobal ["30Rnd_556x45_Stanag",80];
		coreHELI addWeaponCargoGlobal ["arifle_SPAR_02_blk_F",1];
		coreHELI addMagazineCargoGlobal ["150Rnd_556x45_Drum_Mag_F",6];
		coreHELI addWeaponCargoGlobal ["arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",1];
		coreHELI addMagazineCargoGlobal ["20Rnd_762x51_Mag",16];
		coreHELI addWeaponCargoGlobal ["launch_NLAW_F",1];
		coreHELI addMagazineCargoGlobal ["NLAW_F",4];
		coreHELI addMagazineCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",4];
		coreHELI addMagazineCargoGlobal ["DemoCharge_Remote_Mag",2];
		coreHELI addItemCargoGlobal ["optic_DMS",4];
		coreHELI addItemCargoGlobal ["optic_NVS",1];
		coreHELI addItemCargoGlobal ["optic_tws",1];
		coreHELI addItemCargoGlobal ["acc_flashlight",4];
		coreHELI addItemCargoGlobal ["acc_pointer_IR",4];
		coreHELI addItemCargoGlobal ["Rangefinder",2];
		coreHELI addMagazineCargoGlobal ["MiniGrenade",30];
		coreHELI addMagazineCargoGlobal ["HandGrenade",20];
		coreHELI addMagazineCargoGlobal ["B_IR_Grenade",4];
		coreHELI addMagazineCargoGlobal ["Chemlight_green",20];
		coreHELI addMagazineCargoGlobal ["SmokeShellGreen",8];
		coreHELI addMagazineCargoGlobal ["SmokeShell",16];
		coreHELI addWeaponCargoGlobal ["arifle_TRG21_GL_MRCO_F",1];
		coreHELI addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
		coreHELI addMagazineCargoGlobal ["UGL_FlareWhite_F",10];
	};
	if (VQI_CORE_SUPPORT_HELI == 4) then {	// CH-67 Huron -- w/ CAS
		coreHELI addWeaponCargoGlobal ["arifle_SPAR_01_blk_F",4];
		coreHELI addMagazineCargoGlobal ["30Rnd_556x45_Stanag",80];
		coreHELI addWeaponCargoGlobal ["arifle_SPAR_02_blk_F",1];
		coreHELI addMagazineCargoGlobal ["150Rnd_556x45_Drum_Mag_F",6];
		coreHELI addWeaponCargoGlobal ["arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",1];
		coreHELI addMagazineCargoGlobal ["20Rnd_762x51_Mag",16];
		coreHELI addWeaponCargoGlobal ["launch_NLAW_F",1];
		coreHELI addMagazineCargoGlobal ["NLAW_F",4];
		coreHELI addWeaponCargoGlobal ["launch_I_Titan_short_F",1];
		coreHELI addWeaponCargoGlobal ["launch_I_Titan_F",1];
		coreHELI addMagazineCargoGlobal ["Titan_AP",4];
		coreHELI addMagazineCargoGlobal ["Titan_AT",4];
		coreHELI addMagazineCargoGlobal ["Titan_AA",4];
		coreHELI addMagazineCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",4];
		coreHELI addMagazineCargoGlobal ["DemoCharge_Remote_Mag",2];
		coreHELI addItemCargoGlobal ["optic_DMS",4];
		coreHELI addItemCargoGlobal ["optic_NVS",1];
		coreHELI addItemCargoGlobal ["optic_tws",1];
		coreHELI addItemCargoGlobal ["acc_flashlight",4];
		coreHELI addItemCargoGlobal ["acc_pointer_IR",4];
		coreHELI addItemCargoGlobal ["Rangefinder",2];
		coreHELI addMagazineCargoGlobal ["MiniGrenade",30];
		coreHELI addMagazineCargoGlobal ["HandGrenade",20];
		coreHELI addMagazineCargoGlobal ["B_IR_Grenade",4];
		coreHELI addMagazineCargoGlobal ["Chemlight_green",20];
		coreHELI addMagazineCargoGlobal ["SmokeShellGreen",8];
		coreHELI addMagazineCargoGlobal ["SmokeShell",16];
		coreHELI addWeaponCargoGlobal ["arifle_TRG21_GL_MRCO_F",1];
		coreHELI addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",20];
		coreHELI addMagazineCargoGlobal ["UGL_FlareWhite_F",10];
		coreHELI addBackpackCargoGlobal ["B_Mortar_01_Support_F",1];
		coreHELI addBackpackCargoGlobal ["B_Mortar_01_Weapon_F",1];
		coreHELI addBackpackCargoGlobal ["B_UAV_01_Backpack_F",1];
		coreHELI addWeaponCargoGlobal ["B_UAVTerminal",2];
	};
	sleep 1;



	coreHELI addAction ["--------------"," "];
	[[coreHELI, ["Board Heli -- Ride in Back", {player moveInCargo coreHELI; [coreHELI, 4]}]], "addAction", true, true] call BIS_fnc_MP;
	coreHELI addAction ["--------------"," "];
	coreHELI addAction ["HELI - Request MOVE","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_move.sqf"];
	coreHELI addAction ["HELI - Request DROP-OFF LZ","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_land_lz.sqf"];
	coreHELI addAction ["HELI - Request HELOCAST","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_helocast.sqf"];
	coreHELI addAction ["HELI - LAND!!!",{ doStop coreHELI; coreHELI land "LAND"; player sideChat "DOWN! DOWN! DOWN! Land this bird NOW!!!"; }];
	coreHELI addAction ["--------------"," "];
	coreHELI addAction ["HELI - Close Doors",{ 	coreHELI animateDoor ["Door_L", 0]; sleep 1; coreHELI animateDoor ["Door_R", 0]; }];
	coreHELI addAction ["HELI - Open Doors",{ 		coreHELI animateDoor ["Door_L", 1]; sleep 1; coreHELI animateDoor ["Door_R", 1]; }];
	coreHELI addAction ["--------------"," "];
	coreHELI addAction ["HELI - Take it UP! Climb 200m",{ coreHELI flyInHeight 200; coreHELI setSpeedMode "NORMAL"; player sideChat "Grab some altitude! Up Up Up!"; }];
	coreHELI addAction ["HELI - Keep it on the DECK!",{ coreHELI flyInHeight 20; coreHELI setSpeedMode "FULL"; player sideChat "Low & FAST!!!"; }];
	coreHELI addAction ["HELI - Low and Slow...",{ coreHELI flyInHeight 10; coreHELI setSpeedMode "LIMITED"; player sideChat "Mow the lawn! Treetop level."; }];
	coreHELI addAction ["--------------"," "];
	coreHELI addAction ["HELI - HELOCAST - Drop to 5m",{ coreHELI flyInHeight 5; coreHELI setSpeedMode "LIMITED"; player sideChat "Time to get Wet. Bring her down..."; }];
	coreHELI addAction ["HELI - HELOCAST - Deploy CRRC","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_helocast_duck.sqf"];
	coreHELI addAction ["--------------"," "];
	coreHELI addAction ["HELI - FULL Exfil - Return TOC","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_exfil_return_toc.sqf"];
	coreHELI addAction ["HELI - FULL Exfil - Mission End","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_exfil_missionend.sqf"];










	waitUntil { sleep 1; coreLZ distance2D coreHELI < 1000; };

	// Smoke
	if (getPosASL player select 2 > 0) then {

		if ("SmokeShellBlue" in magazines player) then { 
			_logic sideChat "On Site... POP BLUE SMOKE to confirm!"; _smoke = 1; 
		} else {
			if ("SmokeShellRed" in magazines player) then {
				_logic sideChat "On Site... POP RED SMOKE to confirm!"; _smoke = 2; 
			} else {
				if ("SmokeShellYellow" in magazines player) then { 
					_logic sideChat "On Site... POP YELLOW SMOKE to confirm!"; _smoke = 3; 
				} else {
					if ("SmokeShellPurple" in magazines player) then { 
						_logic sideChat "On Site... POP PURPLE SMOKE to confirm!"; _smoke = 4; 
					} else {
						if ("SmokeShellGreen" in magazines player) then { 
							_logic sideChat "On Site... POP GREEN SMOKE to confirm!"; _smoke = 5; 
						} else {
							if ("SmokeShellOrange" in magazines player) then { 
								_logic sideChat "On Site... POP BLUE ORANGE to confirm!"; _smoke = 6; 
							};
						};
					};
				};
			};
		};
	} else { 
		_logic sideChat "On Site..."; _smoke = 7;
	};

	//----LZ---------------------------------------------------------
	waitUntil { sleep 1; coreLZ distance coreHELI < 200; };


	// Smoke/IR
	if (_smoke == 0) exitWith { 
		_logic sideChat "On Site... POP BLUE SMOKE to confirm!"; sleep 10; 
		_logic sideChat "CAN NOT CONFIRM LZ!!!"; _heli move position _sLoc;
		sleep 30;
		
		{ if (vehicle _x != _x) then { deleteVehicle vehicle _x; }; deleteVehicle _x }
		forEach (units coreHELI);
		sleep 2;

		
		coreHELI = nil;
		publicVariable "coreHELI";
	};



	if (getPosASL player select 2 > 0) then {
		if (_smoke == 1) then { waitUntil { sleep 1; count (position coreLZ nearObjects ["SmokeShellBLUE",250]) > 0; }; };
		if (_smoke == 2) then { waitUntil { sleep 1; count (position coreLZ nearObjects ["SmokeShellRED",250]) > 0; }; };
		if (_smoke == 3) then { waitUntil { sleep 1; count (position coreLZ nearObjects ["SmokeShellYELLOW",250]) > 0; }; };
		if (_smoke == 4) then { waitUntil { sleep 1; count (position coreLZ nearObjects ["SmokeShellPURPLE",250]) > 0; }; };
		if (_smoke == 5) then { waitUntil { sleep 1; count (position coreLZ nearObjects ["SmokeShellGREEN",250]) > 0; }; };
		if (_smoke == 6) then { waitUntil { sleep 1; count (position coreLZ nearObjects ["SmokeShellORANGE",250]) > 0; }; };
		sleep 3;
	};

	// Landing
	_logic sideChat "Visual on SMOKE!... Stand Clear. Scanning for a Good Spot...";
	doStop coreHELI; coreHELI land "LAND"; // land, get in, get out, none		doStop coreHELI;
	sleep 10;
	_logic sideChat "Landing...";


	// Doors
	if (VQI_CORE_SUPPORT_HELI == 3) then {

		waitUntil { sleep 1; getPosATL coreHELI select 2 < 10; };
		sleep 1 + (random 10);

		coreHELI animateDoor ["Door_L", 1]; sleep 1;
		coreHELI animateDoor ["Door_R", 1];
	};

	//--------------------------------------------------------------



} else { hint "Radio Missing"; };







sleep 1;
if (VQI_CORE_HINTS == 1) then { hint "heli_pickup.sqf -END-"; };

/* =================================================================
NOTES:


*/