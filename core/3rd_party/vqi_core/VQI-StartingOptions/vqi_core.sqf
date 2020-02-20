/////////////////////////////////////////////////////////////////////////////
/*	ADDON: =VQI= C.O.R.E				BY: R. Von Quest
	------------------------------------------------------------------------
	DEPT:.....Von Quest Industries		STATUS:....WORK-IN-PROGRESS
	PROJECT:..PLAYER/START OPTIONS		SERIES:....SpookWarCom
	FORUMS:...Von Quest				VERSION:...v0.5 - 02.FEB.2019
	------------------------------------------------------------------------
	CREATOR: Richard Von Quest			(c) 2014-2019
	LICENSE: APL-ND
	------------------------------------------------------------------------
	C.O.R.E - Covert Gameplay, Ops Center, Role-Playing, and Environment
	------------------------------------------------------------------------
	NOTES: Core Framework for the SpookWarCom Parent Project
*/
/////////////////////////////////////////////////////////////////////////////


// Start EFX, Fade-In, Audio, etc
execVM "vqi_core\VQI-StartingOptions\StartEFX\vqi_core_startefx.sqf";
sleep 1;


if (isServer) then {
	
	execVM "vqi_core\VQI-StartingOptions\StartDateTime\vqi_core_seasonmoon.sqf";
	sleep 1;
	
	if (VQI_CORE_DAYLIGHT > 0) then {
		execVM "vqi_core\VQI-StartingOptions\StartDateTime\vqi_core_starttime.sqf";
	};
};


// Weather
execVM "vqi_core\VQI-StartingOptions\Weather\vqi_core_weather.sqf";


//Start Locations
execVM "vqi_core\VQI-StartingOptions\StartLocation\vqi_core_startlocation.sqf";
sleep 1;


// Weapons & Gear Options
execVM "vqi_core\VQI-StartingOptions\WeaponsGear\vqi_core_weaponsgear.sqf";
sleep 1;


// SneakyB (non-combatant)
if (VQI_CORE_UNARMED == 1) then {
	execVM "vqi_core\VQI-StartingOptions\CovertAction\vqi_core_covert_unarmed.sqf";
	sleep 1;
};



// Player Options - Sway, Stamina, Holster, tactical, etc
execVM "vqi_core\VQI-StartingOptions\PlayerOptions\vqi_core_playeroptions.sqf";
sleep 30;


// Drag/Carry (clunky)
if (VQI_CORE_DRAGCARRY == 1) then {
	execVM "vqi_core\VQI-StartingOptions\DragCarry\DragCarry.sqf";
	sleep 1;
};


// Blood Splatter
if (VQI_CORE_BLOODSS == 1) then {
	execVM "vqi_core\VQI-StartingOptions\Damage\vqi_core_screensplatter.sqf";
	sleep 1;
};


// Injury Report
if (VQI_CORE_INJURYREPORT == 1) then {
	execVM "vqi_core\VQI-StartingOptions\Medical\vqi_core_medical.sqf";
	sleep 1;
};


// Hole in my Pocket
if (VQI_CORE_HIMP == 1) then {
	execVM "vqi_core\VQI-StartingOptions\PlayerOptions\vqi_core_holeinmypocket.sqf";
	sleep 1;
};



// Exploit Gear Fix
execVM "vqi_core\VQI-StartingOptions\Equipment\5.sqf";
sleep 1;



/* ===========================================================================
NOTES:


*/