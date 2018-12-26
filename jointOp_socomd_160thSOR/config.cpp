#include "predefined.hpp"

class CfgPatches {
	class jointOp_socomd_160thSOR {

		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			"socomd_core"
		};

		units[] = {};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgWeapons.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgLoadoutWeapons.hpp"