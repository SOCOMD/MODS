//
//
if (VQI_CORE_HINTS == 1) then { hint "campsite_findlocation.sqf"; };
sleep 1;

//deleteVehicle ClocX;
//deleteVehicle ClocC;


private ["_mapSize","_mapHalf","_mapCent","_campLoop","_rPos","_campAlt","_campBldg","_campDist","_mkrX","_mkrC"];


_mapSize = [] call BIS_fnc_mapSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf,_mapHalf,0];
if (VQI_CORE_HINTS == 1) then { hint format ["%1",_mapHalf]; };
sleep 1;


// Create X OBJECT - Map Centre
ClocX = "Land_PenBlack_F" createVehicle _mapCent;
ClocC = "Land_PenBlack_F" createVehicle _mapCent;
sleep 1;





_campLoop = true;

while {_campLoop} do {

	//find & move out to random 90% of map + 360*, random location
	_rPos = [getPos ClocC, (random (_mapHalf*0.90)), random 360] call BIS_fnc_relPos;
	sleep 0.2;
	ClocX setPos _rPos;
	sleep 0.2;
	_campAlt = round ((getPosASL ClocX) select 2);
	sleep 0.2;
	
	if (_campAlt > 1) then {
		
		_campBldg = nearestBuilding ClocX;
		_campDist = _campBldg distance ClocX;
		sleep 0.2;
		
		if (	_campDist > 200) then {
			_campLoop = false;
		};
	};
hint "checking....";
sleep 0.5;
};



//_campSite = selectBestPlaces [position ClocX, 2000, "(1+forest+trees)*(1-sea)*(1-houses)", 1, 1];
//ClocOM setPos _campSite;	
	
if (VQI_HINTS_CORE == 1) then {

	deleteMarker "mkrC"; sleep 2;
	_mkrC = createMarker["mkrC", getPos ClocC];
	"mkrC" setMarkerShape "ICON";
	"mkrC" setMarkerType "mil_dot";
	"mkrC" setMarkerColor "ColorRed";
	"mkrC" setMarkerText "C";
	"mkrC" setMarkerAlpha 1;	
		
	sleep 1;

	deleteMarker "mkrX";	sleep 2;	
	_mkrX = createMarker["mkrX", getPos ClocX];
	"mkrX" setMarkerShape "ICON";
	"mkrX" setMarkerType "mil_dot";
	"mkrX" setMarkerColor "ColorBlue";
	"mkrX" setMarkerText "X";
	"mkrX" setMarkerAlpha 1;	

};
	

VQIcampLocation = true;
publicVariable "VQIcampLocation";












sleep 1;
if (VQI_CORE_HINTS == 1) then { hint "campsite_findlocation.sqf -END-"; };

/* =======================================================================================
NOTES:


*/