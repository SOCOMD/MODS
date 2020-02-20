// INFIL: Transport - Heli - Start
//
if (VQI_CORE_HINTS == 1) then { hint "infil_heli_start.sqf"; };
sleep 1;



private ["_mapSize","_mapHalf","_mapCent","_posXYZ","_startINFIL","_mkr1"];

_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

infilSTART = true;
deleteMarker "mkrCORE_IN";
openMap true;
sleep 1;






while {infilSTART} do {

	hint "L-Click to select INFIL/EXFIL \n START \n \n CLICK OUTSIDE MAP";

	MapClickInfilSTART = false;
	onMapSingleClick "posINFIL = _pos; MapClickInfilSTART = true; onMapSingleClick ''; true";
	waitUntil {MapClickInfilSTART}; publicVariable "posINFIL";
	
	// Map Radius
	_startINFIL = posINFIL distance2D _mapCent;
	if (_startINFIL > _mapHalf) then { infilSTART = false; } else { hint "Too Close - Try Again"; sleep 2; };
};



// Marker
_mkr1 = createMarker["mkrCORE_IN", posINFIL];
_mkr1 setMarkerType "n_air";
_mkr1 setMarkerColor "ColorBLUFOR";
_mkr1 setMarkerText "INFIL";








hint "Select COMMAND or PIN-POINT on the Logistics Menu for Landing Zone \n \n \n PIN-POINT is Player's choice on precise LZ. \n \n COMMAND will decide for you (random, out to 2km) by HQ for the current SOCOM/LZ to select the best LZ approved for your Mission Area.";


// Menu Logistics Desk
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["HELI LZ -- HELI INFIL: COMMAND", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_socom.sqf'; [LogisticsDesk, 8]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["HELI LZ -- HELI INFIL: PIN-POINT", "execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_infil_heli_pinpoint.sqf'; [LogisticsDesk, 9]"]], "addAction", true, true] call BIS_fnc_MP;
[[LogisticsDesk, ["------------------------------", "hint ' '; [LogisticsDesk, 10]"]], "addAction", true, true] call BIS_fnc_MP;



/////////////////