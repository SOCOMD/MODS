// Transition into JumpCraft
//


private ["_unit"];

_unit = _this select 0;




//LoadMaster setGroupID ["LoadMaster"];


if (flightHALO == 1) then {

	if (!isNil "VQI_HALO_JUMPCRAFT") then {

		if ("B_Parachute" == Backpack _unit) then {

			// Equipment (minimum) Safety Re-Check...
			//if 	((("VQI_Helmet_HALO" == Headgear _unit) || ("VQI_Helmet_Jump" == Headgear _unit)) && 													// Helmet (or any Headgear soon)
			//	(("VQI_VEST_Dragonfly" == Vest _unit) || ("VQI_VEST_Dragonfly_GAS" == Vest _unit) || ("VQI_VEST_Dragonfly_OFF" == Vest _unit))) // && 			// Oxygen Supply
				//(("VQI_Jumpsuit_Icarus" == Uniform _unit) || ("U_B_Wetsuit" == Uniform _unit))) 														// Thermal Jumpsuit
			//	then {
				
				systemChat "Buckle Up. Prepare for Take Off...";
				33 cutText ["", "BLACK IN", 15];
				
				
				if (planeType == 1) then { _unit switchCamera "INTERNAL"; _unit attachTo [VQI_HALO_JUMPCRAFT,[0, 13, -4.5]]; };		// MC-130J Commando II
				if (planeType == 2) then { _unit switchCamera "INTERNAL"; _unit attachTo [VQI_HALO_JUMPCRAFT,[0,  5, -4.5]]; };		// XC-130 "Nightmare"
				if (planeType == 3) then { _unit switchCamera "INTERNAL"; _unit attachTo [VQI_HALO_JUMPCRAFT,[0,  5, -1.0]]; };		// C-17 Globemaster III
				if (planeType == 4) then { _unit switchCamera "INTERNAL"; _unit attachTo [VQI_HALO_JUMPCRAFT,[0, -2, -1.0]]; };		// XSR-72 "Vampyre" Drone
				
				
				// HALO Transition and Systems Start-Up
				[_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_efx_transition.sqf";
				//[_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_transition_halo.sqf";
				
				
			//} else { systemChat "Equipment is fucked... Fix it!!!"; };
			
		} else { systemChat "Seriously? Where the hell is your Parachute?"; };
		
	} else { systemChat "Paperwork missing... File a Flight Plan first." };
};











////////////////////////