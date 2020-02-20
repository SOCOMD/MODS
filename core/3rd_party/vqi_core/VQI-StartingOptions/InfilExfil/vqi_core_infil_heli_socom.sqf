// INFIL: Transport - Heli
//
if (VQI_CORE_HINTS == 1) then { hint "infil_heli_socom.sqf"; };
sleep 1;



private ["_mapSize","_mapHalf","_mapCent","_posXYZ","_marker1","_marker2","_posFSP","_distLZ","_distKM","_loopLZ"];

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

openMap true;
sleep 1;

// Random Location - Outside of Map - START
_posXYZ = [_mapCent, (_mapHalf*1.2), random 360] call BIS_fnc_relPos;
sleep 0.1;


// old marker
deleteMarker "mkrCORE_LZ";






_loopLZ = true;
_posFSP = _mapCent;
_distLZ = 10000;

hint "-TRANSPORT SITREP - \n \n Stand by..."; sleep 2;






if (getMarkerColor "mkrSOCOM" == "") then {

	hint "- NO ACTIVE MISSION -"; sleep 2;
	execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_socom_alt.sqf";

} else {
	// Find LZ
	// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
	_posFSP = [getMarkerPos "mkrSOCOM", 500, 1500, 15, 0, 0.25, 0] call BIS_fnc_findSafePos;
	sleep 0.1;


	// check if too far... Scan again!
	_distLZ = (getMarkerPos "mkrSOCOM") distance2D _posFSP; sleep 0.2; //hint format ["%1",_distLZ];
	if (_distLZ > 1500) then { _posFSP = [getMarkerPos "mkrSOCOM", 500, 2000, 15, 0, 0.25, 0] call BIS_fnc_findSafePos; }; 
	sleep 0.1;

	_distLZ = (getMarkerPos "mkrSOCOM") distance2D _posFSP; sleep 0.2; //hint format ["%1",_distLZ];
	if (_distLZ > 2000) then { _posFSP = [getMarkerPos "mkrSOCOM", 500, 3000, 15, 0, 0.50, 0] call BIS_fnc_findSafePos; }; 
	sleep 0.1;

	_distLZ = (getMarkerPos "mkrSOCOM") distance2D _posFSP; sleep 0.2; //hint format ["%1",_distLZ];
	if (_distLZ > 3000) then { _posFSP = [getMarkerPos "mkrSOCOM", 500, 4000, 15, 0, 0.50, 0] call BIS_fnc_findSafePos; }; 
	sleep 0.1;

	_distLZ = (getMarkerPos "mkrSOCOM") distance2D _posFSP; sleep 0.2;	//hint format ["%1",_distLZ]; // water infil
	if (_distLZ > 4000) then { _posFSP = [getMarkerPos "mkrSOCOM", 500, 1500, 15, 2, 0.50, 0] call BIS_fnc_findSafePos; }; 
	sleep 0.1;






	// new marker
	_marker2 = createMarker ["mkrCORE_LZ",_posFSP]; 	//
	_marker2 setMarkerType "hd_pickup"; 			//
	_marker2 setMarkerColor "colorBLUFOR";
	_marker2 setMarkerText "LZ";




	// get data on distance...
	_distLZ = (getMarkerPos "mkrSOCOM") distance2D (getMarkerPos "mkrCORE_LZ");

	_distKM = _distLZ / 1000; // to KM
	_distKM = [_distKM,1] call BIS_fnc_cutDecimals;
	sleep 1;





	// feedback intel
	hint format ["-TRANSPORT SITREP - \n \n COMMAND has marked the \n best available Landing Zone. \n \n LZ to AO -- %1 km",_distKM];








	// Menu Logistics Desk
	[[LogisticsDesk, ["MISSION LZ -- HELI INFIL APPROVED", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_activate.sqf'; [LogisticsDesk, 10]"]], "addAction", true, true] call BIS_fnc_MP;
};








////////////////////
/* NOTES:


*/