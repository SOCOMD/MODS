#include "script_component.hpp"
_args = _this;
_player = _this select 0;
_vest = vest _player;

_vestWhitelist = [
    "CUP_V_B_LHDVest_White",
    "CUP_V_B_LHDVest_Blue",
    "CUP_V_B_LHDVest_Brown",
    "CUP_V_B_LHDVest_Green",
    "CUP_V_B_LHDVest_Red",
    "CUP_V_B_LHDVest_Violet",
    "CUP_V_B_LHDVest_Yellow"
];

_allowed = false;
if(_vest in _vestWhitelist) then 
{
    _allowed = true;
}; 

_allowed