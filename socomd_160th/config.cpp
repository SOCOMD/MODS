#include "predefined.hpp"

class CfgPatches {
	class socomd_160th {

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

#include "configs\CfgMagazines.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgVehicles.hpp"