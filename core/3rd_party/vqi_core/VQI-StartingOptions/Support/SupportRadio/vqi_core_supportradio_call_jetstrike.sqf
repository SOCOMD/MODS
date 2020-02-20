//
//	
if (VQI_CORE_HINTS == 1) then { hint "supportradio_call_jetstrike.sqf"; };
sleep 1;





_gpsLOC = _this select 0;
_player = _this select 1;
_rngCHX = 0;
_tooFAR = false;
_maxNUM = false;
_callSign = 0;
_rRadio = 1;

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


_rRadio = selectRandom [1,2,3,4];
if (_rRadio == 1) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_0"; };
if (_rRadio == 2) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_1"; };
if (_rRadio == 3) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_2"; };
if (_rRadio == 4) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_3"; };


_logic sideChat "COMs GREEN. Coming Around..."; sleep (2 + random 5);
_logic sideChat "Pylons Hot! Starting Approach Run..."; sleep (2 + random 5);
_logic sideChat "GPS GRID Confirmed. Target Area Locked."; sleep (2 + random 5);
_logic sideChat "Stand By..."; sleep 5;

_rTime = round (10 + random 40);
_logic sideChat format ["ETA %1s",_rTime];
sleep _rTime;








["battlefieldJet1"] remoteExec ["playSound",0];	// MP sfx

_logic sideChat "FOX 1"; 	sleep (random 1);
_logic sideChat "FOX 2"; 	sleep (random 1);
_logic sideChat "FOX 3"; 	sleep (random 1);
_logic sideChat "FOX 4"; 	sleep (random 1);
_logic sideChat "FOX 5"; 	







_strikeType = "Sh_82mm_AMOS";		// Weapon
_strikeArea = 10;					// Dispersion
_strikeRdir = random 360;			// Random Dir
F18TargetXY = "Land_PenBlack_F" createVehicle _gpsLOC;
F18TargetXY setDir _strikeRdir;



// Attack Line
_Fox1 = F18TargetXY getPos [100,_strikeRdir];	
_Fox2 = F18TargetXY getPos [50,_strikeRdir];
_Fox3 = F18TargetXY getPos [10,_strikeRdir];
_Fox4 = F18TargetXY getPos [-50,_strikeRdir];
_Fox5 = F18TargetXY getPos [-100,_strikeRdir];

//hint format ["%1 \n %2 \n %3 \n %4 \n %5",_Fox1,_Fox2,_Fox3,_Fox4,_Fox5]; sleep 3;








// Fox 1
_strike1 = _strikeType createVehicle [((_Fox1 select 0) + random _strikeArea) - _strikeArea/2, ((_Fox1 select 1) + random _strikeArea) - _strikeArea/2, 400];
_strike1 setVelocity [0, 0,-10];
sleep 0.4;

// Fox 2
_strike2 = _strikeType createVehicle [((_Fox2 select 0) + random _strikeArea) - _strikeArea/2, ((_Fox2 select 1) + random _strikeArea) - _strikeArea/2, 400];
_strike2 setVelocity [0, 0,-10];
sleep 0.4;

// Fox 3
_strike = _strikeType createVehicle [((_Fox3 select 0) + random _strikeArea) - _strikeArea/2, ((_Fox3 select 1) + random _strikeArea) - _strikeArea/2, 400];
_strike setVelocity [0, 0,-10];
sleep 0.4;

// Fox 4
_strike = _strikeType createVehicle [((_Fox4 select 0) + random _strikeArea) - _strikeArea/2, ((_Fox4 select 1) + random _strikeArea) - _strikeArea/2, 400];
_strike setVelocity [0, 0,-10];
sleep 0.4;

// Fox 5
_strike = _strikeType createVehicle [((_Fox5 select 0) + random _strikeArea) - _strikeArea/2, ((_Fox5 select 1) + random _strikeArea) - _strikeArea/2, 400];
_strike setVelocity [0, 0,-10];
sleep 0.4;












sleep (10 + random 10);
_logic sideChat "CAS, OUT";

deleteVehicle _logic;


sleep 1;
//hint "0.sqf -END-";