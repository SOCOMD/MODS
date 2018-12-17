#include "predefined.hpp"

class CfgPatches {
	class socomd_sma_compat {
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

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

#include "configs\CfgMagazines.hpp"
#include "configs\CfgWeapons.hpp"