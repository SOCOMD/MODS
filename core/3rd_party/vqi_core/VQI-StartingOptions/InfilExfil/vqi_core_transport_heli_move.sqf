//
//
if (VQI_CORE_HINTS == 1) then { hint "transport_heli_move.sqf"; };
sleep 1;


private "_heli";





openMap true;
hint "L-Click to Request MOVE";

// click
MapClicked = false;
onMapSingleClick "clickPos = _pos; MapClicked = true; onMapSingleClick {};";
waitUntil {MapClicked};



// location
if (!isNil "newClick") then { deleteVehicle newClick; sleep 2; };
newClick = "Land_PenBlack_F" createVehicle clickPos;

// move
coreHELI move position newClick;

_heli = coreHELI select 0;
_heli vehicleChat "Roger...";
openMap false;










///////////////////
/* NOTES:



*/