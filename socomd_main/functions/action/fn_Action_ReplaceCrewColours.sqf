_args = _this;
_player = _this select 0;
_vest = _this select 1;
_headgear = _this select 2;

_unitLoadout = getUnitLoadout _player;

_vestLoadout = _unitLoadout select 4;
_vestLoadout set [0, _vest]; 
_unitLoadout set [4, _vestLoadout];
_unitLoadout set [6, _headgear];

_player setUnitLoadout _unitLoadout;