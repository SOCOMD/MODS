_args = _this;
_player = _this select 0;
_facewear = _this select 1;

_unitLoadout = getUnitLoadout _player;
_unitLoadout set [7, _facewear];

[_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;