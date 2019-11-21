_args = _this;
_player = _this select 0;
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];

_allowed = false;

if(_loadoutId == "") exitWith {
    _allowed
};

_allowed = true;
_allowed