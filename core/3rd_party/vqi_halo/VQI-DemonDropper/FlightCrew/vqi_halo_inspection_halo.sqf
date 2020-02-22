// HALO Equipment Safety Inspection
//



private ["_unit","_gearpass","_headgear","_facewear","_o2system","_jumpsuit","_miscgear","_items"];

_unit = _this select 0;



//JumpMaster setGroupID ["JumpMaster"];

_gearpass = 1;
_headgear = headgear _unit;	// helmet
_facewear = goggles _unit;		// goggles/mask
_o2system = vest _unit;		// oxygen
_jumpsuit = uniform _unit;		// jumpsuit
_miscgear = uniformItems _unit + vestItems _unit + backpackItems _unit + assignedItems _unit;





// HALO - check headgear (helmet)
if (count VQI_LEAP_RQD_HEADGEAR_H > 0) then { if (_headgear in VQI_LEAP_RQD_HEADGEAR_H) then { systemChat "Headgear: Check"; } else { _gearpass = 0; systemChat "Headgear: FAIL"; }; } else { systemChat "No Bucket? Where's your HALO-Class Helmet!?"; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;

// HALO - check facewear (goggles)
if (count VQI_LEAP_RQD_FACEWEAR_H > 0) then { if (_facewear in VQI_LEAP_RQD_FACEWEAR_H) then { systemChat "Facewear: Check"; } else { _gearpass = 0; systemChat "Facewear: FAIL"; }; } else { systemChat "It's too cold to not wear a thermal mask. You sure?"; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;

// HALO - check oxygen (vest)
if (count VQI_LEAP_RQD_O2SYSTEM_H > 0) then { if (_o2system in VQI_LEAP_RQD_O2SYSTEM_H) then { systemChat "Vest/O2: Check"; } else { _gearpass = 0; systemChat "Vest/O2: FAIL"; }; } else { systemChat "Vest Rig is all wrong... How in the hell do you expect to breathe?"; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;

// HALO - check jumpsuit (uniform)
if (count VQI_LEAP_RQD_JUMPSUIT_H > 0) then { if (_jumpsuit in VQI_LEAP_RQD_JUMPSUIT_H) then { systemChat "JumpSuit: Check"; } else { _gearpass = 0; 
	if (_jumpsuit == "SOCOMD_Ghillie_lsh" || _jumpsuit == "SOCOMD_AMCU_Ghillie_lsh" || _jumpsuit == "SOCOMD_Ghillie_sard" || _jumpsuit == "SOCOMD_AMCU_Ghillie_sard" || _jumpsuit == "SOCOMD_Ghillie_ard" || _jumpsuit == "SOCOMD_AMCU_Ghillie_ard" || _jumpsuit == "SOCOMD_Ghillie_jngl" || _jumpsuit == "SOCOMD_AMCU_Ghillie_jngl") then {
		systemChat "Get that tree off your gear, it's going to tangle up your gear.";
	} else {
		systemChat "It's going to be cold up there, get a shirt on and then come back."
	}
}; } else { systemChat "You'll freeze! It often colder than -50° up there. You need a Thermal Jumpsuit or an approved Wetsuit"; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;

// HALO - check misc gear (reserve)
if (count VQI_LEAP_RQD_MISCGEAR_H > 0) then { 

	_items = 0;
	{
	  if (_x in _miscgear) then { _items = _items + 1; };
	} forEach VQI_LEAP_RQD_MISCGEAR_H;
	if (_items == count VQI_LEAP_RQD_MISCGEAR_H) then { systemChat "Equipment: Check"; } else { _gearpass = 0; systemChat "Equipment: FAIL"; };
	
 } else { 
	if !("VQI_BOTTLE_DF1_GAS" in vestItems _unit) then {
	systemChat "No Oxygen Supply! Are you insane??? You will likely not survive the Jump... Missing O2 POA Bottle.";  } else { systemChat "Gear & Equipment, ok...."; };
 };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;





sleep 2;





if (!isNil "VQI_HALO_JUMPCRAFT") then {

	if ((getPosASL VQI_HALO_JUMPCRAFT select 2) > 6000) then { // over 20,000'

		systemChat "Lets take a look..."; sleep 3;
		systemChat "Helmet, Oxygen, Jumpsuit, Gear... Looks good."; sleep 2;
		systemChat "HALO Inspection: PASS - Good luck up there!"; sleep 1; // Function?
		[_unit] execVM "vqi_halo\VQI-DemonDropper\FlightCrew\Inspection\vqi_halo_backpack_onfront.sqf"; 
		
		sleep 1; // Holster Weapon
		_unit action ["SwitchWeapon", _unit, _unit, 100];
		_unit setVariable ["haloReady", true];
		_unit setVariable ["haloLanded", false];
		// AI Support
		if (VQI_HALO_AI == 1) then { execVM "vqi_halo\VQI-DemonDropper\AI\vqi_halo_ai_jump.sqf"; };

	} else { systemChat "Flight Plan Too Low... Gear-Up for standard ParaJump."; };
	
} else { systemChat "No Paperwork? File Flight Plan First... HALO or ParaJump?"; };







///////////////
/* NOTES:

Rewrite!



*/