// Order the Commnader to move to Map-Click (player)
// Patrol Area if needed



_apc = _this select 0;
_loc = getPos _apc;
openMap true;

hint "L-Click to Select \n APC Waypoint";

// Map-Click
mapClicked = false;
onMapSingleClick "APC0 doMove _pos; mapClicked = true;";



waitUntil {mapClicked};
openMap false;

















///////////////////////
/* NOTES:



*/