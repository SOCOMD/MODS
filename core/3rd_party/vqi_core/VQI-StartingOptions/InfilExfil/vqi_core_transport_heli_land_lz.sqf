//
//
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_land_lz.sqf"; };
sleep 1;


private ["_unit","_nameLZ","_mkrLZ","_heli","_wpH1"];

openMap true;
hint "L-Click to Mark LZ";

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
//_posFSP = [getPos clickPos, 0, 200, 20, 1, 0, 0] call BIS_fnc_findSafePos;
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


_unit sideChat "LZ marked on Map... MOVE OUT!"; sleep 2;
openMap false; sleep 1;




_heli vehicleChat "Copy! Oscar Mike...";
coreLZ = createVehicle ["Land_HeliPadEmpty_F", position newClick, [], 0, "CAN_COLLIDE"];
sleep 2;

_heli move position coreLZ;
_heli allowFleeing 0;







//---------------------------------------------------------------
waitUntil { sleep 1; coreLZ distance2D coreHELI < 1000; };
_heli vehicleChat "L.Z. in sight... Hang on!"; sleep 5;

waitUntil { sleep 1; coreLZ distance2D coreHELI < 200; };
sleep 5;

doStop coreHELI;
coreHELI land "LAND";
//--------------------------------------------------------------




//sleep 180;
//(coreHELI select 0) allowDamage true;






sleep 1;
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_land_lz.sqf -END-"; };

/* =================================================================
NOTES:


*/