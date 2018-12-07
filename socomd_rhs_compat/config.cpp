#include "predefined.hpp"

class CfgPatches {

	class socomd_rhs_compat {
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			"socomd_main"
		};

		units[] = {};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgVehicles.hpp"