//
//
if (VQI_CORE_HINTS == 1) then { hint "seasonmoon.sqf"; };
sleep 1;






if (isServer) then {

	//
	waitUntil {sleep 1; time > 0};	
	
	if (VQI_CORE_SEASONMOON == 1) then { setDate [2018, 1,  31, date select 3, date select 4]; };	// Winter (Jan)
	if (VQI_CORE_SEASONMOON == 2) then { setDate [2018, 4,  30, date select 3, date select 4]; };	// Spring (Apr)
	if (VQI_CORE_SEASONMOON == 3) then { setDate [2018, 7,  27, date select 3, date select 4]; };	// Summer (Jul)
	if (VQI_CORE_SEASONMOON == 4) then { setDate [2018, 10, 24, date select 3, date select 4]; };	// Autumn (Oct)
	//year, month, day, hour, seconds
};








//////////////////////
/* NOTES:



*/