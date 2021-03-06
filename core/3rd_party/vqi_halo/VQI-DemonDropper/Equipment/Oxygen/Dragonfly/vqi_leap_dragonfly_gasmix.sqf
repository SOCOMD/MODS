// Turn ON/OFF GASMIX
//
if (VQI_HINTS_HALO == 1) then { hint "dragonfly_gasmix.sqf"; };




// Toggle Switch - GasType? - MA-2 Bottle
if ("VQI_BOTTLE_DF1_GAS" in vestItems player) then {
	if (gasmixON == 0) exitWith { gasmixON = 1; hint "DSV VALVE: OPEN \n GasFlow ON"; };		// ON
	if (gasmixON == 1) exitWith { gasmixON = 0; hint "DSV VALVE: CLOSED \n GasFlow OFF"; };	// OFF
} else {
	hint "Bottle Error";
};










////////////////////
/* NOTES:



*/