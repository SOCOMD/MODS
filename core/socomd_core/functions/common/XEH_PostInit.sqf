

if (!hasInterface) exitWith {};


hasPeltors = 0;
hasPeltorsOn = 0;
["ace_settingsInitialized", {;

    // Update veh attunation when player veh changes
    ["vehicle", {
        params ["_player", "_vehicle"];

        if (!isNull SOCOMD_lastPlayerVehicle) then {
            private _firedEH = SOCOMD_lastPlayerVehicle getVariable ["SOCOMD_Peltor_FiredEH", -1];
            SOCOMD_lastPlayerVehicle removeEventHandler ["FiredNear", _firedEH];
            SOCOMD_lastPlayerVehicle setVariable ["SOCOMD_Peltor_FiredEH", nil];
            SOCOMD_lastPlayerVehicle = objNull;
        };
        if ((!isNull _vehicle) && {_player != _vehicle}) then {
            private _firedEH = _vehicle addEventHandler ["FiredNear", {call SOCOMD_fnc_Peltor_gunShotNear}];
            _vehicle setVariable ["SOCOMD_Peltor_FiredEH", _firedEH];
            SOCOMD_lastPlayerVehicle = _vehicle;
        };
    }, true] call CBA_fnc_addPlayerEventHandler;


    // Reset deafness on respawn (or remote control player switch)
    ["unit", {
        params ["_player", "_oldPlayer"];

        if (!isNull _oldPlayer) then {
            private _firedEH = _oldPlayer getVariable ["SOCOMD_Peltor_FiredEH", -1];
            _oldPlayer removeEventHandler ["FiredNear", _firedEH];
            _oldPlayer setVariable ["SOCOMD_Peltor_FiredEH", nil];
            private _explosionEH = _oldPlayer getVariable ["SOCOMD_Peltor_ExplosionEH", -1];
            _oldPlayer removeEventHandler ["Explosion", _explosionEH];
            _oldPlayer setVariable ["SOCOMD_Peltor_ExplosionEH", nil];
        };
        // Don't add a new EH if the unit respawned
        if ((_player getVariable ["SOCOMD_Peltor_FiredEH", -1]) == -1) then {
            if ((getNumber (configOf _player >> "isPlayableLogic")) == 1) exitWith {
            };
            private _firedEH = _player addEventHandler ["FiredNear", {call SOCOMD_fnc_Peltor_gunShotNear}];
            _player setVariable ["SOCOMD_Peltor_FiredEH", _firedEH];
            private _explosionEH = _player addEventHandler ["Explosion", {call SOCOMD_fnc_Peltor_gunShotNear}];
            _player setVariable ["SOCOMD_Peltor_ExplosionEH", _explosionEH];
        };

    }, true] call CBA_fnc_addPlayerEventHandler;

    // Update protection on possible helmet change
    ["loadout", {
		params ["_player","",""];
		_hasPeltors = [_player] call SOCOMD_fnc_Peltor_hasPeltor;
		if(_hasPeltors == 0) then {
			[1] call SOCOMD_fnc_Peltor_setVolume;
			hasPeltorsOn = 0;
		} else {
			hasPeltorsOn = 1;
		};
	}, false] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;
