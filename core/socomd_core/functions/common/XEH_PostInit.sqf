

if (!hasInterface) exitWith {};


hasPeltors = 0;
hasPeltorsOn = 0;
    // Update protection on possible helmet change
    ["loadout", {
		params ["_player","",""];
		_response = [_player] call SOCOMD_fnc_Peltor_hasPeltor;
        _hasPeltors = _response select 0;
        _peltorsChanged = _response select 1;
		if(_hasPeltors == 0) then {
			[1] call SOCOMD_fnc_Peltor_setVolume;
			hasPeltorsOn = 0;
		} else {
            if(_peltorsChanged == 1) then {
    			hasPeltorsOn = 1;
            };
		};
	}, false] call CBA_fnc_addPlayerEventHandler;