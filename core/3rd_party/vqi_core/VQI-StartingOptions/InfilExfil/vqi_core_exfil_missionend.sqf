//
//
if (VQI_CORE_HINTS == 1) then { hint "exfil_missionend.sqf"; };
sleep 1;



private ["_heli"];


_heli = coreHeli;

player sideChat "EVAC!!! Lets Get the Hell Outta Here! GO GO GO!";
sleep 2; _heli vehicleChat "Copy. Hang-On!";







_heli move (getMarkerPos "mkrCORE_IN"); sleep 10;
waitUntil {sleep 5; coreHELI distance2d (getMarkerPos "mkrCORE_IN") < 3000};



/////////////////////////////////////////////////////////////////////////////
// Ending Effects...  MP???
[0, 1.5, false, false] call BIS_fnc_cinemaBorder;

sleep 5;
[[["YOU WERE NEVER HERE, YOU DO NOT EXIST...","%1"]]] spawn BIS_fnc_typeText;

sleep 5;
//["END1", true, 10] call BIS_fnc_endMissionServer;
"EveryoneWon" call BIS_fnc_endMissionServer;


/* =========================================================================
NOTES:


*/