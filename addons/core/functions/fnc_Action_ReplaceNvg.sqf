#include "script_component.hpp"
_args = _this;
_player = _this select 0;
_nvg = _this select 1;

_unitLoadout = getUnitLoadout _player;
_equipment = _unitLoadout select 9;
_equipment set [5, _nvg];
_unitLoadout set [9, _equipment];

[_player, _unitLoadout] call EFUNC(qstore,SetUnitLoadout);