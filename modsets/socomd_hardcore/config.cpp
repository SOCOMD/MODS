#include "\socomd_hardcore\settings\inventories.hpp"
#include "\socomd_core\predefined.hpp"

class CfgPatches  {
	class socomd_hardcore {
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			"socomd_content",
			"ctab"
		};

		units[] = {};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgVehicles.hpp"