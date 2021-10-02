#include "script_component.hpp"
_args = _this;
_player = _args select 0;
// sleep 1;
_ins = [ _player ] call BIS_fnc_getUnitInsignia;
[_player, ""] call BIS_fnc_setUnitInsignia;
[_player, _ins] call BIS_fnc_setUnitInsignia;