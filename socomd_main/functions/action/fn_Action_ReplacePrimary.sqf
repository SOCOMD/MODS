_args = _this;
_player = _this select 0;
_primary = _this select 1;

_unitLoadout = getUnitLoadout _player;
_primaryLoadout = _unitLoadout select 0;
_primaryLoadout set [0, _primary]; 
_unitLoadout set [0, _primaryLoadout];
_player setUnitLoadout _unitLoadout;