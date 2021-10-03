#include "script_component.hpp"
_args = _this;
_player = _this select 0;

_locked  = _player getVariable ["SOCOMD_LOADOUT_PREFS_LOCKED", 0];
if(_locked == 1) exitWith {};

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];
if(_loadoutId == "") exitWith {};

_unitLoadout = getUnitLoadout _player;

_primary = _unitLoadout select 0;
_secondary = _unitLoadout select 1;
_handgun = _unitLoadout select 2;
_vest = (_unitLoadout select 4) select 0;
_backpack = (_unitLoadout select 5) select 0;
_helmet = _unitLoadout select 6;
_facewear = _unitLoadout select 7;

_loadoutPrefs = [
    _primary,
    _secondary,
    _handgun,
    _vest,
    _backpack,
    _helmet,
    _facewear
];

_key = format["SOCOMD_LOADOUT_%1_PREFS", _loadoutId];
profileNamespace setVariable [_key, _loadoutPrefs];
saveProfileNamespace;

systemChat "Loadout Saved";