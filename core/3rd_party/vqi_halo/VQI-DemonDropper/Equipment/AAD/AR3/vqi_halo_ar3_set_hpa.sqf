// Automatic Opening Device Settings
// AR3 ARR - Barometric Pressure hPA
if (VQI_HINTS_HALO == 1) then { hint "ar3_set_hpa.sqf"; };




private ["_ar3","_unt"];

_ar3 = _this select 0;
_unt = _this select 1;

if ("VQI_AR3" in assignedItems player) then {
	_altFeet = 145366.45 * ( 1 - ( _ar3 / 1013.25 ) ^ 0.190245 );
	_altMetre =  _altFeet / 3.281;
	_altSound = _altMetre + 300;
	hint format ["AR3 Set to: %1 hPA \n %2'ft / %3m \n ASL: Above Sea Level", _ar3, round _altFeet, round _altMetre];
	player setVariable ["AR3_Height", _altMetre];
	// would take all inputs and do them all, not suitable refactoring to the freefall script;
	// waitUntil { getPosASL _unt select 2 < _altSound }; playSound "aad_beeping";	// Alert +300m
	// waitUntil { getPosASL _unt select 2 < _altMetre }; _unt action ["openParachute"];


} else {
	hint "Equipment Missing";
};



/////////////////////////////
/* NOTES:



*/