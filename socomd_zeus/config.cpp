#include "predefined.hpp"

class CfgPatches
{
	class socomd_zeus
	{
		version = 1.0.2;
		versionStr = "1.0.2";
		versionAr[] = { 1,0,2 };

		units[] = {
			"SOCOMD_Module_ToggleUndercover",
			"SOCOMD_Module_ToggleTranslator",
			"SOCOMD_Module_CopyClipboardLoadout",
			"SOCOMD_Module_PasteClipboardLoadout",
			"SOCOMD_Module_Flatten",
			"SOCOMD_Module_ConvoyGroup"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { 
			"cba_main",
			"socomd_main",
			"ace_zeus",
			"achilles_modules_f_achilles"
		};
	};
};

#include "configs\CfgFactionClasses.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgVehicles.hpp"
