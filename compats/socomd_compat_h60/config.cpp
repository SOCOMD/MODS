#include "predefined.hpp"
#include "settings\inventories.hpp"

class CfgPatches {

	class socomd_compat_h60 {
		version = 1.1.0;
		versionStr = "1.1.0";
		versionAr[] = { 1,1,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			//SOCOMD Requirments
			"socomd_core",
            "socomd_compat_cup",
            "vtx_MH60M"
		};

		units[] = {};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "CfgVehicles.hpp"