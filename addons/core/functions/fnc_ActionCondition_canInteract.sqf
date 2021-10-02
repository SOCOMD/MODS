#include "script_component.hpp"
_player = param[0,objNull];
_target = param[1,objNull];


if(_target getVariable['ACE_captives_isHandcuffed',false])then{
  //and unit is handcuffed, and unit dont have blindfold on
  if( (headgear _target == "H_Hat_Headbag" ))then{
    false
  }else{
    true
  };
}else{
  //unit not handcuffed
  false
};