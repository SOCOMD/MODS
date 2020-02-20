//
//

private ["_altFP","_mkrFP","_mkrHT","_dirHT0","_dirHT1","_dirFP0","_dirFP1","_dirFP2","_dirFP3","_dirFP4","_mkrHT0","_mkrHT1","_mkrHT2","_mkrHT3","_mkrHT4"];

deleteMarker "mkrFP";
deleteMarker "mkrHT";
deleteMarker "mkrHT1";
deleteMarker "mkrHT2";
deleteMarker "mkrHT3";
deleteMarker "mkrHT4";

if (true) then {

	// Set Marker Setup - FlightPlan ONLY (not actual aircraft)
	if (flightHALO == 1) then {
		_altFP = round (((getPosASL VQI_HALO_JUMPCRAFT) select 2)*3.2808);
		_mkrFP = createMarker ["mkrFP", posFLIGHTPLAN];
		"mkrFP" setMarkerShape "ICON";
		"mkrFP" setMarkerType "mil_end";
		"mkrFP" setMarkerColor "ColorGreen";
		"mkrFP" setMarkerText format ["HALO - %1'ft",_altFP];
		"mkrFP" setMarkerAlpha 1;
	};
	if (flightPARA == 1) then {
		_altFP = round (((getPosASL VQI_HALO_JUMPCRAFT) select 2)*3.2808);
		_mkrFP = createMarker ["mkrFP", posFLIGHTPLAN];
		"mkrFP" setMarkerShape "ICON";
		"mkrFP" setMarkerType "mil_end";
		"mkrFP" setMarkerColor "ColorGreen";
		"mkrFP" setMarkerText format ["ParaJump - %1'ft",_altFP];
		"mkrFP" setMarkerAlpha 1;
	};
	//////////////////////////////////////////////////////////////
	
	

	if (VQI_HINTS_HALO == 1) then { //F.O.W. info (actual aircraft)
		_mkrHT = createMarker ["mkrHT", getPos VQI_HALO_JUMPCRAFT];
		"mkrHT" setMarkerShape "ICON";
		"mkrHT" setMarkerType "mil_dot";
		"mkrHT" setMarkerColor "ColorRed";
		"mkrHT" setMarkerText "JumpCraft";
		"mkrHT" setMarkerAlpha 1;
	};
	
	
	// Flight Path of the Flight Plan
	if (VQI_HALO_FLIGHTPATH_MKR == 1) then {
	
		_dirHT1 = getDir VQI_HALO_JUMPCRAFT;
		
		_dirFP0 = [getPos objHALO, 9000, (_dirHT1 - 180)] call BIS_fnc_relPos;
		_dirFP1 = [getPos objHALO, 6000, (_dirHT1 - 180)] call BIS_fnc_relPos;
		_dirFP2 = [getPos objHALO, 3000, (_dirHT1 - 180)] call BIS_fnc_relPos;
		_dirFP3 = [getPos objHALO, 3000, _dirHT1] call BIS_fnc_relPos;
		_dirFP4 = [getPos objHALO, 6000, _dirHT1] call BIS_fnc_relPos;
		
		_mkrHT0 = createMarker ["mkrHT0", _dirFP0];
		"mkrHT0" setMarkerShape "ICON";
		"mkrHT0" setMarkerType "mil_dot";
		"mkrHT0" setMarkerColor "ColorBLUFOR";
		"mkrHT0" setMarkerText "Blue-Light";
		"mkrHT0" setMarkerAlpha 0.7;
		
		_mkrHT1 = createMarker ["mkrHT1", _dirFP1];
		"mkrHT1" setMarkerShape "ICON";
		"mkrHT1" setMarkerType "mil_dot";
		"mkrHT1" setMarkerColor "ColorRED";
		"mkrHT1" setMarkerText "Red-Light 1";
		"mkrHT1" setMarkerAlpha 0.7;
		
		_mkrHT2 = createMarker ["mkrHT2", _dirFP2];
		"mkrHT2" setMarkerShape "ICON";
		"mkrHT2" setMarkerType "mil_dot";
		"mkrHT2" setMarkerColor "ColorRed";
		"mkrHT2" setMarkerText "Red-Light 2";
		"mkrHT2" setMarkerAlpha 0.7;
		
		_mkrHT3 = createMarker ["mkrHT3", _dirFP3];
		"mkrHT3" setMarkerShape "ICON";
		"mkrHT3" setMarkerType "mil_dot";
		"mkrHT3" setMarkerColor "ColorBlack";
		"mkrHT3" setMarkerText "Egress";
		"mkrHT3" setMarkerAlpha 0.7;
		
		_mkrHT4 = createMarker ["mkrHT4", _dirFP4];
		"mkrHT4" setMarkerShape "ICON";
		"mkrHT4" setMarkerType "mil_dot";
		"mkrHT4" setMarkerColor "ColorBlack";
		"mkrHT4" setMarkerText "Egress";
		"mkrHT4" setMarkerAlpha 0.7;
		
		sleep 300;
		
		deleteMarker "mkrHT0";
		deleteMarker "mkrHT1";
		deleteMarker "mkrHT2";
		deleteMarker "mkrHT3";
		deleteMarker "mkrHT4";
	};
	
	sleep 600;
	
	deleteMarker "mkrFP";
	deleteMarker "mkrHT";
};




/////////////////////////
/* NOTES:


*/