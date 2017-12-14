#include "predefined.hpp"

class CfgPatches
{
	class socomd_zeus
	{
		units[] = {
			"SOCOMD_Module_ToggleUndercover",
			"SOCOMD_Module_ToggleTranslator",
			"SOCOMD_Module_CopyClipboardLoadout",
			"SOCOMD_Module_PasteClipboardLoadout"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = { 
			"cba_main",
			"socomd_main",
			"ace_zeus",
			"achilles_modules_f_achilles"
		};
		author[] = { };
		authorUrl = "";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = { 0,0,1 };
	};
};

#include "configs\CfgFactionClasses.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgVehicles.hpp"
