// Ride EFX
//


private ["_unit","_pDistCargo"];

_unit = _this select 0;
_pDistCargo = 19;


while {_pDistCargo < 20} do {

	_pDistCargo = _unit distance VQI_HALO_JUMPCRAFT;
	addCamShake [0.4, 10, 20]; // p, d, f

	sleep 3;
};








///////////////////
/* NOTES:



*/