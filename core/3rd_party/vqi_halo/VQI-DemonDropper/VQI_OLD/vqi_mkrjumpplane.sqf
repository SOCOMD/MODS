//Mark the JUMP POINT of Aircraft
//
hint "";

private ["_mkAlt","_mkJmp","_mkrDZ"];


if (isNull(VQIHALO2)) then { hint "No Flight Plan Filed"; };


_mkAlt 	= _this select 0;
_mkJmp 	= _this select 1;

_mkAlt	= round (((getPosASL VQIHALO2) select 2)*3.2808);

_mkrDZ = createMarker["mkrJmpDD", getPos VQIHALO2];
"mkrJmpDD" setMarkerShape "ICON";
"mkrJmpDD" setMarkerType "mil_end";
"mkrJmpDD" setMarkerColor "ColorGreen";
"mkrJmpDD" setMarkerText format ["H.A.L.O - %1ft",_mkAlt];
"mkrJmpDD" setMarkerAlpha 1;

_mkJmp 	= mapGridposition VQIHALO2;
hint format ["Marked on Map! Due to the nature of this operation, GREEN Light at MapGrid: %1",_mkJmp];

if (VQI_MKPLANE_HALO == 1) then {
	sleep 15;
	hint "Note: Marker is temporary";
	sleep 1200;
	deleteMarker "mkrJmp";
	deleteMarker "mkrJmpDD";
};




//v1.0