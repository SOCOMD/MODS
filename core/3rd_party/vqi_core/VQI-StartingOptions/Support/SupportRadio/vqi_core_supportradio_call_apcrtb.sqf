// Order the Commnader to move to the Nearest NATO Flag (Base)
// Patrol Area if needed



_apc = _this select 0;
_loc = getPos _apc;


// NATO Flag
_obj = nearestObjects [_loc, ["Flag_NATO_F"], 20000];
_1st = _obj select 0;			// closest object
_loc = getPos _1st;			// object position





// move/patrol to nearest NATO Flag (Base)
[group _apc, _loc, 111] call BIS_fnc_taskPatrol;

















///////////////////////
/* NOTES:



*/