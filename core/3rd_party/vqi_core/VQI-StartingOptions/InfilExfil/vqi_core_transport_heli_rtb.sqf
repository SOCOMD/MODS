//
//
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_rtb.sqf"; };
sleep 1;


private ["_unit","_dist","_mapSize","_mapHalf","_mapCent","_rtbLoc","_heli"];



// hotfix - cancel callsign
//execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_rtb_cc.sqf";



_unit = _this select 0;
_dist = _unit distance coreHELI;
_heli = coreHELI;
casRTB = 0;
//_heli setGroupID ["ECHO ONE"];


player sideChat format ["%1 - RTB!... Move Out...",coreHELI]; sleep 1;

if (_dist < 10) then {

	systemChat "Get Clear! You're too close!!";
	waitUntil { sleep 2; _dist = _unit distance coreHELI; _dist > 10; };
};

//_mapSize = worldSize;
//_mapHalf = _mapSize / 2;
//_mapCent = [_mapHalf,_mapHalf,0];
//sleep 1;

// Hotfix
//{unassignVehicle _x} forEach crew _heli;
{_x leaveVehicle _heli} forEach playableUnits;

//_rtbLoc = [_mapCent, _mapSize, random 360] call BIS_fnc_relPos;
//rtbLoc = "Land_PenBlack_F" createVehicle _rtbLoc;
//sleep 1;

systemChat "Copy that. Stand Clear...";
sleep 1;

_heli commandMove getMarkerPos "mkrCORE_IN"; // doesn't always move????
_heli allowFleeing 0;
_heli setSpeedMode "FULL";
_heli flyInHeight 50;
_heli setCombatMode "BLUE";

// send CAS away
if (VQI_CORE_SUPPORT_HELI == 4) then { casRTB = 1; publicVariable "casRTB"; };











//---------------------------------------------------------------
waitUntil { sleep 30; (getMarkerPos "mkrCORE_IN") distance2D _heli < 1000; };
sleep 1;

systemChat format ["%1 is Off-Site... Over & Out!",coreHELI];
sleep 5;

{ if (vehicle _x != _x) then { deleteVehicle vehicle _x; }; deleteVehicle _x }
forEach (units coreHELI);
sleep 1;


coreHELI = nil;
publicVariable "coreHELI";
sleep 1;

deleteMarker "mkrLZ";









sleep 1;
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_rtb.sqf -END-"; };

/* =================================================================
NOTES:


*/