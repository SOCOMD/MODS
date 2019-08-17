_player = param[0,objNull];
_target = param[1,objNull];

_message = format ["Player used blindfold %1",name _player];            //Display message stating who put the bag on

if(alive _player) then {
   {hint _message; } forEach [_target];
};

if(headgear _target != "")then{
      removeHeadgear _target;
};
_target addHeadgear "H_Hat_Headbag";