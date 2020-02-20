//
//




player sideChat "Hard Duck! Drop the Zodiac...";

if (VQI_CORE_SUPPORT_HELI == 3 || VQI_CORE_SUPPORT_HELI == 4) then {

	HARDDUCK = "B_Boat_Transport_01_F" createVehicle (position player);
	HARDDUCK attachTo [coreHELI,[0, 2, -1.2]];
	HARDDUCK allowDamage false; publicVariable "HARDDUCK";

	sleep 3;

	detach HARDDUCK;
	
	sleep 10;
	HARDDUCK allowDamage true;

} else {
	hint "NO DUCK ON-BOARD";
};