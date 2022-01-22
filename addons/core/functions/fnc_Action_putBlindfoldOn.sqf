#include "script_component.hpp"
_player = param[0,objNull];
_target = param[1,objNull];

//Display message stating who put the bag on

[_target ,"H_Hat_Headbag"] call FUNC(Action_ReplaceHeadgear);