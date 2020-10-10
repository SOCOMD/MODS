/**
	Handles removing NVGS if loadout changes to have invalid headgear
 */


params ["_player"];
_newHeadger = headgear _player;
_newHMD = hmd _player;
_validHeadger = [_newHeadger] call rgoc_fnc_check;
if(_validHeadger isEqualTo 0 ) then {
	[player, hmd player] call rgoc_fnc_emptySlot;
	if (!isNull findDisplay 602) then {
		_display = findDisplay 602;
		[_display] call rgoc_fnc_removeSlot;
	};
} else {
	if (!isNull findDisplay 602) then {
		_display = findDisplay 602;
		[_display] call rgoc_fnc_addSlot;
	};
};
