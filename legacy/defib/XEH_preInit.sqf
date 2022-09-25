#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

ADDON = true;

//CPR Chance for Default
[
	QGVAR(Defib_Chance),
	"SLIDER",
	"% chance for the AED to succeed",
	"SOCOMD Defib",
	[0,100,90,0],
	true
] call CBA_Settings_fnc_init;