#include "\socomd_core\predefined.hpp"

class CfgPatches {

	class socomd_compat_rhs {
		version = 1.1.0;
		versionStr = "1.1.0";
		versionAr[] = { 1,1,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			//SOCOMD Requirments
			"socomd_core"
		};

		units[] = {};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgVehicles.hpp"