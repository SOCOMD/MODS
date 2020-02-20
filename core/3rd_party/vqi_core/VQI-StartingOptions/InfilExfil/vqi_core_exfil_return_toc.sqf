//
//
if (VQI_CORE_HINTS == 1) then { hint "exfil_return_toc.sqf"; };
sleep 1;



private ["_heli"];


_heli = coreHeli;

player sideChat "EVAC!!! Lets Get the Hell Outta Here! GO GO GO!";
sleep 2; _heli vehicleChat "Copy. Hang-On!"; sleep 10;
player sideChat "RTB. Back to the TOC...";






_heli move (getMarkerPos "mkrCORE_IN"); sleep 10;
waitUntil {sleep 5; coreHELI distance2d (getMarkerPos "mkrCORE_IN") < 3000};




cutText ["","BLACK IN",30];

// transport all - NOT WORKING IN MP!!!!??????????????????????
{
	if (_x in coreHELI) then {
		_x action ["GetOut",coreHELI]; sleep 1;
		_x attachTo [VQI_CORE_TOC1,[1, 2.5, -2.5]]; sleep 2; 
		detach _x;
	};
} forEach (playableUnits + switchableUnits);


/*
// Section 20 ------------------------------------------
P1 attachTo [S20TOC,[-6.5,0.5,-1]]; sleep 1; detach P1;
sleep 1;
P2 attachTo [S20TOC,[-6.5,0.5,-1]]; sleep 1; detach P2;
sleep 1;
*/



/* =========================================================================
NOTES:


*/