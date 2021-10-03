#include "script_component.hpp"
[ACE_player] params ["_unit"]; 
switch (vest _unit) do { 
 case "acwp_pc_operator_s7_closed"              :{[_unit, "acwp_pc_operator_s7_open"] call FUNC(Action_ReplaceVest)}; 
 case "acwp_pc_operator_radioback_s7_closed"    :{[_unit, "acwp_pc_operator_radioback_s7_open"] call FUNC(Action_ReplaceVest)}; 
 case "acwp_pc_operator_top_s7_closed"          :{[_unit, "acwp_pc_operator_top_s7_open"] call FUNC(Action_ReplaceVest)}; 
 case "acwp_pc_tacp_antennaup_s7_closed"        :{[_unit, "acwp_pc_tacp_antennaup_s7_open"] call FUNC(Action_ReplaceVest)}; 
 case "acwp_pc_tacp_antenna_s7_closed"          :{[_unit, "acwp_pc_tacp_antenna_s7_open"] call FUNC(Action_ReplaceVest)}; 
};
[{ 
 isNull findDisplay 177382
},{ 
 params ["_unit"]; 

 switch (vest _unit) do { 
  case "acwp_pc_operator_s7_open"           :{[_unit, "acwp_pc_operator_s7_closed"] call FUNC(Action_ReplaceVest)}; 
  case "acwp_pc_operator_radioback_s7_open" :{[_unit, "acwp_pc_operator_radioback_s7_closed"] call FUNC(Action_ReplaceVest)}; 
  case "acwp_pc_operator_top_s7_open"       :{[_unit, "acwp_pc_operator_top_s7_closed"] call FUNC(Action_ReplaceVest)}; 
  case "acwp_pc_tacp_antennaup_s7_open"     :{[_unit, "acwp_pc_tacp_antennaup_s7_closed"] call FUNC(Action_ReplaceVest)}; 
  case "acwp_pc_tacp_antenna_s7_open"       :{[_unit, "acwp_pc_tacp_antenna_s7_closed"] call FUNC(Action_ReplaceVest)}; 
 };

},[_unit]] call CBA_fnc_waitUntilAndExecute;
