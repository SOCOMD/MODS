#include "\z\ace\addons\main\script_macros.hpp"

if (!hasInterface) exitWith {};


GVAR(hasPeltors) = 0;
["ace_settingsInitialized", {
// Reset deafness on respawn (or remote control player switch)
    ["unit", {
        params ["_player", "_oldPlayer"];
        TRACE_2("unit change",_player,_oldPlayer);

        if (!isNull _oldPlayer) then {
            private _firedEH = _oldPlayer getVariable [QGVAR(firedEH), -1];
            _oldPlayer removeEventHandler ["FiredNear", _firedEH];
            _oldPlayer setVariable [QGVAR(firedEH), nil];
            private _explosionEH = _oldPlayer getVariable [QGVAR(explosionEH), -1];
            _oldPlayer removeEventHandler ["Explosion", _explosionEH];
            _oldPlayer setVariable [QGVAR(explosionEH), nil];
            TRACE_3("removed unit eh",_oldPlayer,_firedEH,_explosionEH);
        };
        // Don't add a new EH if the unit respawned
        if ((_player getVariable [QGVAR(firedEH), -1]) == -1) then {
            if ((getNumber (configFile >> "CfgVehicles" >> (typeOf _player) >> "isPlayableLogic")) == 1) exitWith {
                TRACE_1("skipping playable logic",typeOf _player); // VirtualMan_F (placeable logic zeus / spectator)
            };
            private _firedEH = _player addEventHandler ["FiredNear", {call advanced_peltors_fnc_gunShotNear}];
            _player setVariable [QGVAR(firedEH), _firedEH];
            private _explosionEH = _player addEventHandler ["Explosion", {call advanced_peltors_fnc_explosionEventNear}];
            _player setVariable [QGVAR(explosionEH), _explosionEH];
            TRACE_3("added unit eh",_player,_firedEH,_explosionEH);
        };
		
        []  call advanced_peltors_fnc_handlePeltorStatus;
    }, true] call CBA_fnc_addPlayerEventHandler;

    // Update protection on possible helmet change
    ["loadout", {_this call advanced_peltors_fnc_handlePeltorStatus}, false] call CBA_fnc_addPlayerEventHandler;
}] call CBA_fnc_addEventHandler;