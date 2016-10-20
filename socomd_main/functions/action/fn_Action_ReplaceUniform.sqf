_args = _this;
_player = _this select 0;
_uniform = _this select 1;

_unitLoadout = getUnitLoadout _player;
_uniformLoadout = _unitLoadout select 3;
_uniformLoadout set [0, _uniform]; 
_unitLoadout set [3, _uniformLoadout];
_player setUnitLoadout _unitLoadout;