#include "predefined.hpp"

class CfgPatches
{
	class socomd_zeus
	{
		version = 1.1.0;
		versionStr = "1.1.0";
		versionAr[] = { 1,1,0 };

		units[] = {
			"SOCOMD_Module_ToggleUndercover",
			"SOCOMD_Module_ToggleTranslator",
			"SOCOMD_Module_CopyClipboardLoadout",
			"SOCOMD_Module_PasteClipboardLoadout",
			"SOCOMD_Module_Flatten",
			"SOCOMD_Module_ConvoyGroup",
			"SOCOMD_Module_ShowHitPoints",
			"SOCOMD_Module_JamWeapon",
			"SOCOMD_Module_ModuleGenerateUnitConfig",
			"SOCOMD_Module_PowerGrid",
			"SOCOMD_Module_PowerGenerator"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {
			//SOCOMD Requirments
			"socomd_core"
		};
	};
};

#include "configs\CfgFactionClasses.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgVehicles.hpp"