params ["_direction"];
_newModifier = 1;
if (_direction) then {
	// being turned on, will have  active noise cancelling
	_newModifier = 1;
	hasPeltorsOn = 1;
} else {
	//  being turned off. acting like normal ear muffs
	_newModifier = SOCOMD_peltors_strength;
	hasPeltorsOn = 0;
};
[_newModifier] call SOCOMD_fnc_Peltor_setVolume;