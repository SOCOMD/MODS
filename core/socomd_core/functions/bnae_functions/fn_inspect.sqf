/*
	Author: Bnae
	
	Description:
	Inspect primary/ handgun
	
	Parameter(s): -
*/

private ["_current", "_primary", "_handgun", "_anim"];
	
_current = currentWeapon player;
_primary = primaryWeapon player;
_handgun = handgunWeapon player;
	
if ((vehicle player == player) && !(_current == "") && !(stance player == "PRONE") && !(stance player == "UNDEFINED")) then {
	if (_current == _primary) then {
		[[ player,"AnimInspectAssaultrifle"],"playAction"] call BIS_fnc_MP;
	};
		
	if (_current == _handgun) then {
		[[ player,"AnimInspectHandgun"],"playAction"] call BIS_fnc_MP;
	};
};