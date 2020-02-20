// INFIL: Transport - Heli - USER SELECT
//
if (VQI_CORE_HINTS == 1) then { hint "infil_heli_socom_alt.sqf"; };
sleep 1;



private ["_mkrINFIL","_posFSP","_distLZ","_mkrLZ","_distLZ","_distKM"];



deleteMarker "mkrCORE_LZ";
deleteMarker "mkrINFIL";

hint "L-Click to File Flight Plan \n \n \n Select the MISSION TARGET AREA ONLY. The official LZ will be selected by Command. \n \n
This is ONLY a PLAN. You still have to click APPROVE to accept the Infil Option.";


// Map Click Option ///////////////------------------------------------------------
MapClickedHELI = false;
onMapSingleClick "posFLIGHTHELI = _pos; MapClickedHELI = true; onMapSingleClick ''; true";
waitUntil {MapClickedHELI}; publicVariable "posFLIGHTHELI"; sleep 1;



_mkrINFIL = createMarker ["mkrINFIL",posFLIGHTHELI];
"mkrINFIL" setMarkerShape "ICON";
"mkrINFIL" setMarkerType "hd_objective"; 
"mkrINFIL" setMarkerColor "colorBLACK";

hint "Stand By...";




// Find LZ //////////////////////////////////////////////////////////////////////////////////////
// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
_posFSP = [getMarkerPos "mkrINFIL", 500, 1500, 15, 0, 0.25, 0] call BIS_fnc_findSafePos;
sleep 0.1;


// check if too far... Scan again!
_distLZ = (getMarkerPos "mkrINFIL") distance2D _posFSP; sleep 0.2; //hint format ["%1",_distLZ];
if (_distLZ > 1500) then { _posFSP = [getMarkerPos "mkrINFIL", 500, 2000, 15, 0, 0.25, 0] call BIS_fnc_findSafePos; }; 
sleep 0.1;

_distLZ = (getMarkerPos "mkrINFIL") distance2D _posFSP; sleep 0.2; //hint format ["%1",_distLZ];
if (_distLZ > 2000) then { _posFSP = [getMarkerPos "mkrINFIL", 500, 3000, 15, 0, 0.50, 0] call BIS_fnc_findSafePos; }; 
sleep 0.1;

_distLZ = (getMarkerPos "mkrINFIL") distance2D _posFSP; sleep 0.2; //hint format ["%1",_distLZ];
if (_distLZ > 3000) then { _posFSP = [getMarkerPos "mkrINFIL", 500, 4000, 15, 0, 0.50, 0] call BIS_fnc_findSafePos; }; 
sleep 0.1;

_distLZ = (getMarkerPos "mkrINFIL") distance2D _posFSP; sleep 0.2;	//hint format ["%1",_distLZ]; // water infil
if (_distLZ > 4000) then { _posFSP = [getMarkerPos "mkrINFIL", 500, 1500, 15, 2, 0.50, 0] call BIS_fnc_findSafePos; }; 
sleep 0.1;







// new marker
_mkrLZ = createMarker ["mkrCORE_LZ",_posFSP]; 	//
_mkrLZ setMarkerType "hd_pickup"; 				//
_mkrLZ setMarkerColor "colorBLUFOR";
_mkrLZ setMarkerText "LZ";




// get data on distance...
_distLZ = (getMarkerPos "mkrINFIL") distance2D (getMarkerPos "mkrCORE_LZ");

_distKM = _distLZ / 1000; // to KM
_distKM = [_distKM,1] call BIS_fnc_cutDecimals;
sleep 1;





// feedback intel
hint format ["-TRANSPORT SITREP - \n \n Intelligence has marked the \n best available Landing Zone. \n \n LZ to AO -- %1 km \n \n \n Click APPROVE if you confirm, or re-try to have HQ check again for a NEW LZ.",_distKM];


// Menu Logistics Desk
[[LogisticsDesk, ["MISSION LZ -- HELI INFIL APPROVED", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_activate.sqf'; [LogisticsDesk, 10]"]], "addAction", true, true] call BIS_fnc_MP;













///////////////////
/* NOTES:


*/