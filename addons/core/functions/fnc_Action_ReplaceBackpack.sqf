#include "script_component.hpp"
_args = _this;
_player = _this select 0;
_backpack = _this select 1;

_unitLoadout = getUnitLoadout _player;
_backpackLoadout = _unitLoadout select 5;
_backpackLoadout set [0, _backpack]; 
_unitLoadout set [5, _backpackLoadout];

[_player, _unitLoadout] call FUNC(SetUnitLoadout);