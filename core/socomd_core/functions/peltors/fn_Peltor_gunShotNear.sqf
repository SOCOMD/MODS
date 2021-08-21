params ["_object", "_firer", "_distance", "_weapon", "", "", "_ammo"];
if (hasPeltors == 1 && hasPeltorsOn == 1 && SOCOMD_peltors) then {
	[SOCOMD_peltors_strength] call SOCOMD_fnc_Peltor_setVolume;
	if (isNil "debounceTime" || {debounceTime < CBA_missionTime}) then {
        debounceTime = CBA_missionTime + SOCOMD_peltors_timeout;
        [{CBA_missionTime >= debounceTime}, {
			if (hasPeltors == 1 && hasPeltorsOn == 1 && SOCOMD_peltors) then {[1] call SOCOMD_fnc_Peltor_setVolume;};}, _this] call CBA_fnc_waitUntilAndExecute;
    } else {
        debounceTime = CBA_missionTime + SOCOMD_peltors_timeout;
    };
};