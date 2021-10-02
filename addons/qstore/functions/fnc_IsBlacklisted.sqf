#include "script_component.hpp"
_args = _this;
_class = _this select 0;
_blacklisted = 0;

if(!hasInterface) exitWith {_blacklisted;};

_scopeFOVBlacklisted = [_class, []] call FUNC(CheckScopeFOV);
if(_scopeFOVBlacklisted > 0) then {
    _blacklisted = 1;
};

_scopeWhitelist = [_class] call FUNC(GetOpticsWhitelist);
if(count _scopeWhitelist > 0) then {
    if(!(_class in _scopeWhitelist)) then {
        _blacklisted = 1;
    }; 
};

_blacklisted;