//
//
//hint "supportradio.sqf";
//sleep 1;




_unit = _this select 0;


if ("VQI_Radio_LRSR_Gypsy" in (assignedItems _unit + items _unit)) then {				// anywhere

	createDialog "VQI_SUPPORT_RADIO_MAIN";											// Dialog
	execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\display_readout.sqf";		// Resource
	//player action ["SwitchWeapon", player, player, 100];								// Weapon Down
} else {
	hint "radio missing";
};








/////////////////////////////////////
/* NOTES



*/