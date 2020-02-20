//
//
//hint "AreaClear_NATOpara.sqf";
sleep 1;

private ["_player","_posA","_posB","_posP","_rDir","_rAlt","_heliBad","_heliVeh","_heliCrw","_heliQRF","_heliGrp","_posP","_dropZone","_chute","_wpH1","_wpPT1","_wpPT2"];



_gpsLOC = _this select 0;
_player = _this select 1;
_rngCHX = 0;
_tooFAR = false;
_maxNUM = false;
_callSign = 0;


_radio = createGroup west;
_pos00 = [0,0,0];
_logic = _radio createUnit ["LOGIC",_pos00,[],0,""];

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





_code1 = ["ALPHA","BRAVO","CHARLIE","DELTA","ECHO","FOXTROT","GOLF","HOTEL","INDIA","JULIETT","KILO","LIMA","MIKE","NOVEMBER","OSCAR","PAPA","QUEBEC","ROMEO","SIERRA","TANGO","UNIFORM","VICTOR","WHISKEY","XRAY","YANKEE","ZULU"] call BIS_fnc_selectRandom;
_code2 = ["ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","ZERO"] call BIS_fnc_selectRandom;
_code3 = ["ALPHA","BRAVO","CHARLIE","DELTA","ECHO","FOXTROT","GOLF","HOTEL","INDIA","JULIETT","KILO","LIMA","MIKE","NOVEMBER","OSCAR","PAPA","QUEBEC","ROMEO","SIERRA","TANGO","UNIFORM","VICTOR","WHISKEY","XRAY","YANKEE","ZULU"] call BIS_fnc_selectRandom;

_player sideChat format ["%1... Requesting %2...",SR_HQ_NAME,_callSign];
sleep 2 + (random 2);

_player sideChat format ["Authenticate... %1, %2, %3, Over!",_code1,_code2,_code3];
sleep 5 + (random 10);

SR_NET_HQ1 commandChat "Net Secure. Verified. Stand By..."; sleep (5 + random 5);





// Support Radio - Ch.X - Range Check
if (SR_CH_TRANSMIT == 1) then { if (SR_RNG_CH1 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH1; }; if (_rngCHX > SR_RNG_CH1) then { _tooFAR = true; }; };		// _gpsLOC in place of _player?
if (SR_CH_TRANSMIT == 2) then { if (SR_RNG_CH2 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH2; }; if (_rngCHX > SR_RNG_CH2) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 3) then { if (SR_RNG_CH3 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH3; }; if (_rngCHX > SR_RNG_CH3) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 4) then { if (SR_RNG_CH4 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH4; }; if (_rngCHX > SR_RNG_CH4) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 5) then { if (SR_RNG_CH5 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH5; }; if (_rngCHX > SR_RNG_CH5) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 6) then { if (SR_RNG_CH6 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH6; }; if (_rngCHX > SR_RNG_CH6) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 7) then { if (SR_RNG_CH7 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH7; }; if (_rngCHX > SR_RNG_CH7) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 8) then { if (SR_RNG_CH8 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH8; }; if (_rngCHX > SR_RNG_CH8) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 9) then { if (SR_RNG_CH9 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH9; }; if (_rngCHX > SR_RNG_CH9) then { _tooFAR = true; }; };
if (SR_CH_TRANSMIT == 0) then { if (SR_RNG_CH0 == -1) then { _rngCHX = -2; } else { _rngCHX = _gpsLOC distance2D getMarkerPos SR_MKR_CH0; }; if (_rngCHX > SR_RNG_CH0) then { _tooFAR = true; }; };
if (_tooFAR) exitWith { SR_NET_HQ1 commandChat "Negative. Request Denied."; hint "- OUT OF RANGE -"; };


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
if (_maxNUM) exitWith { SR_NET_HQ1 commandChat "Negative. Request Denied."; hint "- LIMIT EXCEEDED -"; };


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











_logic sideChat "COMs Recieved! Huron-Twin is Oscar Mike..."; sleep 5 + (random 10);
_logic sideChat "ParaTroops Inbound. Stand By..."; sleep 5 + (random 10);
_logic sideChat "ETA 3 Minutes...";




_posA = [getPos _player, 3000, random 360] call BIS_fnc_relPos;
_posB = [getPos _player, 3000, random 360] call BIS_fnc_relPos;
_posP = getPos _player; 

_rDir = random 360;
//_rAlt = 300;

//////////////////////////////////////////////////////////////
_heliCrw = createGroup WEST;
	
if (true) then {
	_heliBad = [_posA, _rDir, "B_Heli_Transport_03_F", _heliCrw] call BIS_fnc_spawnVehicle; // 1.CH-67 Huron (transport)	
	_heliQRF = [_posA, WEST, (configFile >> "CfgGroups" >> "WEST" >> "BLU_F" >> "Infantry" >> "BUS_InfSquad_Weapons")] call BIS_fnc_spawnGroup; 	//
	
	{_x assignAsCargo (_heliBad select 0); _x moveInCargo (_heliBad select 0);} forEach (units _heliQRF);										//
};
sleep 1;


// Skill Setup?
//[_heliQRF] call VQI_dark_fnc_Xskill; 	
//[_heliQRF] call VQI_dark_fnc_Xitems;
//	-OR-
{ _x setSkill 0.7 } forEach units _heliQRF; // Advanced QRF Team!


sleep 2;

_heliVeh = _heliBad select 0;
__heliCrw = _heliBad select 1;
_heliGrp = _heliBad select 2;

_heliVeh flyinHeight 300; // Flight/Jump Altitude

sleep 2;

_wpP = _heliGrp addWaypoint [_gpsLOC, 1];
_wpP setWaypointType "MOVE";
_wpP setWaypointSpeed "LIMITED";
_wpP setWaypointBehaviour "CARELESS";

sleep 2;





// DropZone
_dropZone = waypointPosition [_heliGrp, 1];
waitUntil { sleep 10; (getPos _heliVeh) distance2D _dropZone < 300; };

_logic sideChat "DropZone... GO! GO! GO!";

 
 
 
{	// ParaDrop Enemy ParaTroops! 
	unassignVehicle _x; 
	_x allowDamage false; 
	moveOut _x; 
	sleep 1; //FreeFall Timer
	_chute = createVehicle ["B_parachute_02_F", (getPos _x), [], 0, "NONE"]; //cargo chute, static-line style
	_chute setPos (getPos _x);
	_x attachTo [_chute,[0,0,-1]];
	//_x moveInDriver _chute;
	sleep 0.1;
	_x switchMove "";
	_x allowDamage true;
	sleep 0.3; //Troop Interval
	
} forEach units _heliQRF;
sleep 1;


if (random 100 < 10) then { _logic sideChat "5 Minutes or Less, or your next ParaTroops are Free."; sleep 2; };
_logic sideChat "Good Luck down there... HURON-TWIN, OUT!";









_wpH1 = _heliCrw addWaypoint [_posB, 1];
_wpH1 setWaypointType "MOVE";
_wpH1 setWaypointSpeed "FULL";

sleep 120 + (random 120);

_wpPT1 = _heliQRF addWaypoint [_gpsLOC, 0];
_wpPT1 setWaypointType "MOVE";
_wpPT1 setWaypointSpeed "FULL";
_wpPT1 setWaypointCombatMode "RED";

sleep 60 + (random 120);




if (true) then { // -TBD-  Tracking Guide or Ghillie-Suit Modifier
	
	_wpPT2 = _heliQRF addWaypoint [_gpsLOC, 1];
	_wpPT2 setWaypointType "MOVE";
	_wpPT2 setWaypointSpeed "FULL";
	_wpPT2 setWaypointBehaviour "AWARE";
	_wpPT2 setWaypointCombatMode "RED";
};


_heliVeh flyinHeight 100; // NEW Heli Flight Altitude?

// Delete Unnecessary Units
[_heliCrw] execVM "vqi_core\VQI-CreepyCORE\Support\vqi_core_x_despawn.sqf";























//