#include "script_component.hpp"
_args = _this;
_player = _this select 0;
_vest = vest _player;

_vestWhitelist = [
];

_allowed = false;
if(_vest in _vestWhitelist) then 
{
    _allowed = true;
}; 

_allowed