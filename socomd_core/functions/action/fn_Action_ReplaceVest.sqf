_args = _this;
_player = _this select 0;
_vest = _this select 1;

_unitLoadout = getUnitLoadout _player;
_vestLoadout = _unitLoadout select 4;
_vestLoadout set [0, _vest]; 
_unitLoadout set [4, _vestLoadout];

[_player, _unitLoadout] call SOCOMD_fnc_SetUnitLoadout;