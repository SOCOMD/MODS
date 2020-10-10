// handles removing the inventory slot on open if current headgear isn't valid
params ["_display"];

_validHeadger = [headgear player] call rgoc_fnc_check;
if(_validHeadger isEqualTo 0 ) then {
	[_display] call rgoc_fnc_removeSlot;
};
