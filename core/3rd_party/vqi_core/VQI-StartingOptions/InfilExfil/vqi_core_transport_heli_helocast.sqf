//
//
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_helocast.sqf"; };
sleep 1;


private ["_unit","_nameLZ","_mkrLZ","_heli","_wpH1","_posFSP","_altH"];

openMap true;
hint "L-Click to Mark WATER INFIL";

_unit = _this select 0;
_heli = coreHELI;

if (!isNil "coreLZ") then { deleteVehicle coreLZ; };


// Map Click Option? --------------------------------------------------------------------
MapClicked = false;
onMapSingleClick "clickPos = _pos; MapClicked = true; onMapSingleClick {};";
waitUntil {MapClicked};


if (!isNil "newClick") then { deleteVehicle newClick; };
newClick = "Land_PenBlack_F" createVehicle clickPos;

// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
//_posFSP = [position newClick, 0, 100, 30, 2, 0, 0] call BIS_fnc_findSafePos;
///////////////////-----------------------------------------------------------------------

deleteMarker "mkrLZ";
_nameLZ = name player;


_mkrLZ = createMarker["mkrLZ", getPos newClick];
"mkrLZ" setMarkerShape "ICON";
"mkrLZ" setMarkerType "hd_pickup";
"mkrLZ" setMarkerColor "ColorBlack";
"mkrLZ" setMarkerText format [" LZ %1",_nameLZ];
"mkrLZ" setMarkerAlpha 1;
sleep 1;


_unit sideChat "HELOCAST marked on Map... MOVE OUT!"; sleep 1;
openMap false; sleep 1;




_heli vehicleChat "Copy! Oscar Mike...";
//coreLZ = createVehicle ["Land_HeliPadEmpty_F", getMarkerPos "mkrLZ", [], 0, "NONE"];
sleep 2;

_heli move getMarkerPos "mkrLZ";
_heli allowFleeing 0;







/* moved into heli menu
//---------------------------------------------------------------
waitUntil { sleep 1; coreLZ distance2D (coreHELI select 0) < 500; };
_heli vehicleChat "SpashZone in sight... Check your Gear!"; sleep 5;


waitUntil { sleep 1; coreLZ distance2D (coreHELI select 0) < 200; };
sleep 15;

//doStop coreHELI;
(coreHELI select 0) flyInHeight 3;
waitUntil { sleep 1; _altH = getPosASL (coreHELI select 0) select 2; _altH < 5; };
_heli vehicleChat "GO! GO! GO!"; sleep 5;
//--------------------------------------------------------------
*/










sleep 1;
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_helocast.sqf -END-"; };

/* =================================================================
NOTES:


*/