#include "script_component.hpp"
params ["_player","_facewear"];

_unitLoadout = getUnitLoadout _player;
_unitLoadout set [7, _facewear];

[_player, _unitLoadout] call EFUNC(qstore,SetUnitLoadout);