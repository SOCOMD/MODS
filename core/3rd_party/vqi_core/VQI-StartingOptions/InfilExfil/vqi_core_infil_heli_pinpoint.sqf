// INFIL: Transport - Heli - PIN-POINT
//
if (VQI_CORE_HINTS == 1) then { hint "infil_heli_pinpoint.sqf"; };
sleep 1;



private ["_mapSize","_mapHalf","_mapCent","_posXYZ","_mkr1"];

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

deleteMarker "mkrCORE_LZ";
openMap true;
sleep 1;








hint "PIN-POINT \n L-Click to select INFIL LZ";

MapClickInfilLZ = false;
onMapSingleClick "posINFIL_LZ = _pos; MapClickInfilLZ = true; onMapSingleClick ''; true";
waitUntil {MapClickInfilLZ}; publicVariable "posINFIL_LZ";
	



// Marker
_mkr1 = createMarker["mkrCORE_LZ", posINFIL_LZ];
_mkr1 setMarkerType "hd_pickup";
_mkr1 setMarkerColor "ColorBLUFOR";
_mkr1 setMarkerText "LZ";








sleep 1;
hint "You will still need to Click APPROVED to File the Mission Flight Plan";

// Menu Logistics Desk
[[LogisticsDesk, ["MISSION LZ -- HELI INFIL APPROVED", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_activate.sqf'; [LogisticsDesk, 10]"]], "addAction", true, true] call BIS_fnc_MP;




////////////////