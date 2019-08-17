_player = param[0,objNull];
_target = param[1,objNull];

//Display message stating who put the bag on
_message = format ["Blindfold by %1",name _player];
_message remoteExec ["hint", _target];

[_target ,"H_Hat_Headbag"] call SOCOMD_fnc_Action_ReplaceHeadgear;