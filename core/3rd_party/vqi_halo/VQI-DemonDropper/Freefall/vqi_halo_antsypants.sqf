// IF Jump too soon --- then OFF COURSE! ------> Wait for GREEN LIGHT!
//
if (VQI_HINTS_HALO == 1) then { hint "antsypants.sqf"; };
sleep 1;


private ["_unit","_pAlt"];
_unit = _this select 0;
/*
_antsy = "Land_PenBlack_F" createVehicle position _unit;

// Redo with Direction or Markers of FlightPath
_antsyPosNB = [getPos _antsy, (4444 + (random 3333)), random 360] call BIS_fnc_relPos; //4-6
_antsyPosBL = [getPos _antsy, (3333 + (random 2222)), random 360] call BIS_fnc_relPos; //3-5
_antsyPosR1 = [getPos _antsy, (2222 + (random 2222)), random 360] call BIS_fnc_relPos; //2-4
_antsyPosR2 = [getPos _antsy, (1111 + (random 2222)), random 360] call BIS_fnc_relPos; //1-3
*/

_pAlt = getPosASL VQI_HALO_JUMPCRAFT select 2;


if (!isNull lightBLUE) then {
	_unit setPosASL [getMarkerPos "mkrHT0" select 0, getMarkerPos "mkrHT0" select 1, _pAlt];
	if (VQI_HINTS_HALO == 1) then { hint "Jumped WAY too soon! \n WAY Off Course!"; };
} else {
	if (!isNull lightRED1) then {
		_unit setPosASL [getMarkerPos "mkrHT1" select 0, getMarkerPos "mkrHT1" select 1, _pAlt];
		if (VQI_HINTS_HALO == 1) then { hint "Jumped too soon! \n Off Course!"; };
	} else {
		if (!isNull lightRED2) then {
			_unit setPosASL [getMarkerPos "mkrHT2" select 0, getMarkerPos "mkrHT2" select 1, _pAlt];
			if (VQI_HINTS_HALO == 1) then { hint "Jumped a little soon \n Slightly Off Course"; };	
		};
	};
};




sleep 5;
if (VQI_HINTS_HALO == 1) then { hint "antsypants.sqf -END-"; };

////////////////////////////
/* NOTES:



*/