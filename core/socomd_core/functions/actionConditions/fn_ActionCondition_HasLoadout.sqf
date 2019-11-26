_args = _this;
_player = _args select 0;

_searchLoadoutId = "";
if(count _args > 1) then {
    _searchLoadoutId = _args select 1;
};

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];

_allowed = false;

if(_loadoutId == "") exitWith {
    _allowed
};

if(_searchLoadoutId != "" && _searchLoadoutId != _loadoutId) exitWith {
    _allowed
};

_allowed = true;
_allowed