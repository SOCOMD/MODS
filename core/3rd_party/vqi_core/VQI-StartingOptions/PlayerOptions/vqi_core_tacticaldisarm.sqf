// Von Quest's Explosive Pick-Up - NO E.O.D Required!
// Allow picking up Common Explosives (Claymores, C4, etc)
if (VQI_CORE_HINTS == 1) then { hint "tacticalDisarm.sqf"; };
//sleep 1;





if (VQI_CORE_tacEXPLOSIVES == 1) then {

	// Distance needed to EXCLUDE APERS & AT
	_mine = getPos player nearestObject "TimeBombCore";
	_mPos = player distance _mine;

	// EOD Class required for set/locked Mines
	if (_mPos < 2) then { player action ["deactivateMine", player]; };
	//player action ["deactivateMine", player];
};








////////////////////
/* NOTES:

_num = player distance _mine;
hint str _num;

*/