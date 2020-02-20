// PARA Equipment Safety Inspection
//



private ["_unit","_gearpass","_headgear","_facewear","_o2system","_jumpsuit","_miscgear","_items"];

_unit = _this select 0;



//JumpMaster setGroupID ["JumpMaster"];
_gearpass = 1;
_headgear = headgear _unit;	// helmet
_facewear = goggles _unit;		// goggles/mask
_miscgear = uniformItems _unit + vestItems _unit + backpackItems _unit + assignedItems _unit;





// PJ - check headgear (helmet)
if (count VQI_LEAP_RQD_HEADGEAR_P > 0) then { if (_headgear in VQI_LEAP_RQD_HEADGEAR_P) then { systemChat "Headgear: Check"; } else { _gearpass = 0; systemChat "Headgear: FAIL"; }; } else { systemChat "Headgear: Ok, not required..."; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1; 

// PJ - check facewear (goggles)
if (count VQI_LEAP_RQD_FACEWEAR_P > 0) then { if (_facewear in VQI_LEAP_RQD_FACEWEAR_P) then { systemChat "Facewear: Check"; } else { _gearpass = 0; systemChat "Facewear: FAIL"; }; } else { systemChat "Facewear: Ok, not required..."; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;

// PJ - check misc gear (reserve)
if (count VQI_LEAP_RQD_MISCGEAR_P > 0) then { 

	_items = 0;
	{
	  if (_x in _miscgear) then { _items = _items + 1; };
	} forEach VQI_LEAP_RQD_MISCGEAR_P;
	if (_items == count VQI_LEAP_RQD_MISCGEAR_P) then { systemChat "Equipment: Check"; } else { _gearpass = 0; systemChat "Equipment: FAIL"; };
	
} else { systemChat "Gear & Equipemnt: Ok, good enough..."; };
if (_gearpass == 0) exitWith { hint "INSPECTION FAIL"; }; sleep 1;





sleep 2;





if (!isNil "VQI_HALO_JUMPCRAFT") then {

	if ((getPosASL VQI_HALO_JUMPCRAFT select 2) < 6000) then { // under 20,000'

		systemChat "Lets take a look..."; sleep 3;
		systemChat "Equipment Check: PASS - Good luck up there!"; sleep 1; // Function?
		[_unit] execVM "vqi_halo\VQI-DemonDropper\FlightCrew\Inspection\vqi_halo_backpack_onfront.sqf"; 
		
		sleep 1; // Holster Weapon
		_unit action ["SwitchWeapon", _unit, _unit, 100];
		
		// AI Support
		if (VQI_HALO_AI == 1) then { execVM "vqi_halo\VQI-DemonDropper\AI\vqi_halo_ai_jump.sqf"; };

	} else { systemChat "Flight Plan Too High! Gear-Up for H.A.L.O."; };
	
} else { systemChat "No Paperwork? File Flight Plan First... HALO or ParaJump?"; };



//