_args = _this;
_player = _this select 0;
if ((backpack player)  == "SOCOMD_COS_PARACHUTE") then {
	
	player LinkItem "ItemWatch";
	removeBackpack player;
	player call grad_boc_fnc_actionOnBack;
}  else {
	
	player LinkItem "ACE_Altimeter";
	if ((player call grad_boc_fnc_chestpack) == "SOCOMD_COS_PARACHUTE") then {
		player call grad_boc_fnc_removeChestpack;
	} else {
		if( (backpack player)  == "") then {
			player addBackpack "SOCOMD_COS_PARACHUTE";
		} else {
			// is faster than swapping bag to chest and adding
			[player,"SOCOMD_COS_PARACHUTE"] call grad_boc_fnc_addChestpack;
			[player] call grad_boc_fnc_actionSwap;
			player action ["SwitchWeapon", player, player, 100];
		};
	};
};
