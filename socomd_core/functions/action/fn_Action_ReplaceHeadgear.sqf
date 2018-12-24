_args = _this;
_player = _this select 0;
_headgear = _this select 1;

_unitLoadout = getUnitLoadout _player;
_unitLoadout set [6, _headgear];

[_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;