//
//

LoadMaster setGroupID ["LoadMaster"];

if (flightHALO == 0 && flightPARA == 0) then {

	LoadMaster SideChat "What? ...Whoa whoa whoa. Slow down. Details pal. Where we going? File a FlightPlan first.";
} else {

	if (flightPARA == 1) then {

		LoadMaster SideChat "Yes Sir! ...Which Cargo do you need?";
		
		[[LoadMaster, ["Cargo Drop - Weapons Crate", "execVM 'vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_cargodrop_crate.sqf'; [LoadMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LoadMaster, ["Cargo Drop - CRRC (Zodiac)", "execVM 'vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_cargodrop_crrc.sqf'; [LoadMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LoadMaster, ["Cargo Drop - Mini-Sub: SDV", "execVM 'vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_cargodrop_sdv.sqf'; [LoadMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
		[[LoadMaster, ["Cargo Drop - ATV 4-Wheeler", "execVM 'vqi_halo\VQI-DemonDropper\Cargo\vqi_halo_cargodrop_atv.sqf'; [LoadMaster, 4]"]], "addAction", true, true] call BIS_fnc_MP;
	};


	if (flightHALO == 1) then {

		LoadMaster SideChat "No can do... Re-File for a lower FlightPlan. ParaDrops ONLY.";
	};
};


/////////////
/* NOTES:


*/