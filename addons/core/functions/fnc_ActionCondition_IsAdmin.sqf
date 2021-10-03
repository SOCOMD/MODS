#include "script_component.hpp"
_args = _this;
_player = _this select 0;
_isAdmin = false;

if(isNull(_player)) exitWith {_isAdmin};

_guid = getPlayerUID _player;

_whitelist = [
    "76561197970310529", //Seth
    "76561198018544077", //ToxicSpare
    "76561198006262884", //Token
    "76561198124025469", //Lincon
    "76561198009993601", //Slatery
    "76561198059207851 " //Renduhh 
];

if(_guid in _whitelist) then {
    _isAdmin = true;
};

_isAdmin;