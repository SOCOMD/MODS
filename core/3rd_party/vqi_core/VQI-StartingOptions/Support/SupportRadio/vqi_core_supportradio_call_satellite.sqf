// Mark and Fadeout Intel from X pos - Satellite
// Local or Global ??

private ["_marker","_markers"];


_number = 0;
_markers = [];

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

/*
_rRadio = selectRandom [1,2,3,4];
if (_rRadio == 1) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_0"; };
if (_rRadio == 2) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_1"; };
if (_rRadio == 3) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_2"; };
if (_rRadio == 4) then { player sideRadio "mp_groundsupport_70_tacticalstrikeinbound_BHQ_3"; };
*/

_logic sideChat "LAT/LONG Recieved. Stand by..."; sleep (2 + random 5);
_logic sideChat "Satellite Uplink GREEN"; sleep (2 + random 5);
_logic sideChat "Target Area Locked... 16km2 Resolution"; sleep (2 + random 5);
_logic sideChat "Downloading..."; sleep 5;


// Target Area Object
SATpos = "Land_PenBlack_F" createVehicle _gpsLOC;

_rTime = round (1 + random 15);
_logic sideChat format ["ETA %1s",_rTime];
sleep _rTime;








{
	if (vehicle leader _x == leader _x) then {
	
		_markername = format ["InfGroup_%1",_number];
		_pos = getPos leader _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		if (_posUAV distance2D _posXYZ < 2000) then {
			_marker = createMarker [_markername, _posXYZ];
			if (side _x == civilian) then { _marker setMarkerType "n_unknown"; } else { _marker setMarkerType "n_inf"; };
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			if (side _x == civilian) then { _marker setMarkerColor "ColorCIV"; };
			
			_markers = _markers + [_marker];
		};
	};
	
_number = _number + 1;
} forEach allGroups;
sleep 1;




{
	if (_x isKindOf "Car") then {		// "Truck_F" for Support?
		_markername = format ["Motorized_%1",_number];
		_pos = getPos _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		if (_posUAV distance2D _posXYZ < 2000) then {		
			_marker = createMarker [_markername, _posXYZ];
			_classX = getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName");
			//_marker setMarkerText _classX;
			_marker setMarkerType "o_motor_inf";
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			if (side _x == civilian) then { _marker setMarkerColor "ColorCIV"; };
			
			_markers = _markers + [_marker];
		};
	};
_number = _number + 1;
} forEach vehicles;
sleep 1;




{
	if (_x isKindOf "Wheeled_APC_F") then {
		_markername = format ["Mechanized_%1",_number];
		_pos = getPos _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_marker = createMarker [_markername, _posXYZ];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		if (_posUAV distance2D _posXYZ < 2000) then {		
			_classX = getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName");
			//_marker setMarkerText _classX;
			_marker setMarkerType "o_mech_inf";
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			
			_markers = _markers + [_marker];
		};
	};
_number = _number + 1;
} forEach vehicles;
sleep 1;




{
	if (_x isKindOf "Tank") then {
		_markername = format ["Armor_%1",_number];
		_pos = getPos _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		if (_posUAV distance2D _posXYZ < 2000) then {		
			_marker = createMarker [_markername, _posXYZ];
			_classX = getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName");
			//_marker setMarkerText _classX;
			_marker setMarkerType "o_armor";
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			
			_markers = _markers + [_marker];
		};
	};
_number = _number + 1;
} forEach vehicles;
sleep 1;





{
	if (_x isKindOf "StaticWeapon") then {
		_markername = format ["Static_%1",_number];
		_pos = getPos _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		if (_posUAV distance2D _posXYZ < 2000) then {		
			_marker = createMarker [_markername, _posXYZ];
			_classX = getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName");
			//_marker setMarkerText _classX;
			_marker setMarkerType "o_mortar";
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			
			_markers = _markers + [_marker];
		};
	};
_number = _number + 1;
} forEach vehicles;
sleep 1;




{
	if (_x isKindOf "Air") then {
		_markername = format ["AirVehicle_%1",_number];
		_pos = getPos _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		if (_posUAV distance2D _posXYZ < 2000) then {		
			_marker = createMarker [_markername, _posXYZ];
			_classX = getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName");
			//_marker setMarkerText _classX;
			if (_x isKindOf "Helicopter") then {_marker setMarkerType "o_air";} else {_marker
			setMarkerType "o_plane";};
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			
			_markers = _markers + [_marker];
		};
	};
_number = _number + 1;
} forEach vehicles;
sleep 1;




{
	if (_x isKindOf "Ship") then {
		_markername = format ["Ship_%1",_number];
		_pos = getPos _x;
		_posXYZ = [_pos select 0, _pos select 1];
		_posUAV = getPos SATpos;									// GPS LRSR
		
		
		if (_posUAV distance2D _posXYZ < 2000) then {		
			_marker = createMarker [_markername, _posXYZ];
			_classX = getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName");
			//_marker setMarkerText _classX;
			_marker setMarkerType "o_naval";
			_marker setMarkerSize [1, 1];
			if (side _x == east) then { _marker setMarkerColor "ColorOPFOR"; };
			if (side _x == resistance) then { _marker setMarkerColor "ColorGUER"; };
			if (side _x == west) then { _marker setMarkerColor "ColorBLUFOR"; };
			
			_markers = _markers + [_marker];
		};
	};
_number = _number + 1;
} forEach vehicles;	
sleep 1;









// 1 min
sleep 60;



_alpha = 1.0;
// fadeout each array
while {_alpha > 0} do {

	_alpha = _alpha - 0.1;
	{ _x setMarkerAlpha _alpha; } forEach _markers;

	sleep 120; // 2 min (20 min fade)
};











/*
_marker setMarkerAlpha 0.9; sleep 1;
_marker setMarkerAlpha 0.8; sleep 1;
_marker setMarkerAlpha 0.7; sleep 1;
_marker setMarkerAlpha 0.6; sleep 1;
_marker setMarkerAlpha 0.5; sleep 1;
_marker setMarkerAlpha 0.4; sleep 1;
_marker setMarkerAlpha 0.3; sleep 1;
_marker setMarkerAlpha 0.2; sleep 1;
_marker setMarkerAlpha 0.1; sleep 1;
_marker setMarkerAlpha 0.0; sleep 1;
*/