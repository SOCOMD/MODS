//
//	
if (VQI_CORE_HINTS == 1) then { hint "supportradio_call_blackfoot.sqf"; };
sleep 1;





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


_logic sideChat "Five by Five on COMs. AH-99 Bird Inbound..."; sleep (2 + random 5);
_logic sideChat "Weapon Systems HOT!";
sleep 30;
//---------------------------------------------------------------------------------------------------------





_uPos = getPos _player;

// center, min, max, obj, water, grad, shore, black, default
_hPos = [_uPos, 3000, 6000, 0, 1] call BIS_fnc_findSafepos;

// pos, dir, "classname", side/group				
_heli = [_hPos, 180, "B_Heli_Attack_01_dynamicLoadout_F", WEST] call bis_fnc_spawnvehicle;
_CAS0 = _heli select 0;
_CAS1 = _heli select 1;
_CAS2 = _heli select 2;	// heli group



	
	
	



// addWaypoint [[x,y,z], index];
_wp0 = _CAS2 addWaypoint [_uPos, 0]; 
_wp0 setWaypointType "MOVE"; 
_wp0 setWaypointSpeed "FULL";
sleep 10;

_wp1 = _CAS2 addWaypoint [_uPos, 0]; 
_wp1 setWaypointType "SAD"; 
_wp1 setWaypointSpeed "NORMAL";













//////////////////////////
/* NOTES:


*/