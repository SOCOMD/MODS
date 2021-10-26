_args = _this;
_player = _this select 0;
_source= _this select 1;
_return = true;


if((alive _player) and ((uniform _player) isKindOf [_source, configFile >> 'CfgWeapons'])) then {
    _return = true
};

_return