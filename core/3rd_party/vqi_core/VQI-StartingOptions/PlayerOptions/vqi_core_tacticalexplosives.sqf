// No X from "Icon/Menu" ScrollWheel
if (VQI_CORE_HINTS == 1) then { hint "tacticalExplosives.sqf"; };
sleep 1;







// BOTH
if ((VQI_CORE_tacRELOAD == 1) && (VQI_CORE_tacEXPLOSIVES == 1)) then { 
	//hint "Tactical Explosives \n - Active -";
	inGameUISetEventHandler ["Action", " if ((_this select 3 == 'LoadEmptyMagazine') || (_this select 3 == 'UseMagazine')) then {true} "]; 
} else {

	// Tactical Reload Menu
	if (VQI_CORE_tacRELOAD == 1) then { 
		inGameUISetEventHandler ["Action", " if (_this select 3 == 'LoadEmptyMagazine') then {true} "]; 
	};

	// Tactical Explosives Menu
	if (VQI_CORE_tacEXPLOSIVES == 1) then { 
		//hint "Tactical Explosives \n - Active -";
		inGameUISetEventHandler ["Action", " if (_this select 3 == 'UseMagazine') then {true} "]; 
	};
};



















////////////////////
/* NOTES:



*/