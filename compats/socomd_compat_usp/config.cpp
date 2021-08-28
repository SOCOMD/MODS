#include "\socomd_core\predefined.hpp"

class CfgPatches {

	class socomd_compat_usp {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.88;
        author = "Slatery";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };
		requiredAddons[] = {
			//SOCOMD Requirments
			"socomd_core",
			"socomd_data_core",
			"ace_main"
		};

	};
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"