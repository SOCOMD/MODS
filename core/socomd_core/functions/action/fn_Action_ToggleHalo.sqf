_args = _this;
_player = _this select 0;
if ((backpack player)  == "SOCOMD_COS_PARACHUTE") then {
	removeBackpack player;
	player call grad_boc_fnc_actionOnBack;
}  else {
	if ((player call grad_boc_fnc_chestpack) == "SOCOMD_COS_PARACHUTE") then {
		player call grad_boc_fnc_removeChestpack;
	} else {
		// is faster than swapping bag to chest and adding
		[player,"SOCOMD_COS_PARACHUTE"] call grad_boc_fnc_addChestpack;
		[player] call grad_boc_fnc_actionSwap;
		player action ["SwitchWeapon", player, player, 100];
	};
};
