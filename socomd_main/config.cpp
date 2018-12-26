#include "predefined.hpp"

class CfgPatches  {
	class socomd_main  {
		version = 1.1.0;
		versionStr = "1.1.0";
		versionAr[] = { 1,1,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			//CUP Requirments
			"cup_airvehicles_ah6",
			"cup_airvehicles_ah64",
			"cup_airvehicles_ch47",
			"cup_airvehicles_uh60",
			"cup_wheeledvehicles_mtvr",

			//SMA Requirments
			"sma_weapons",
			"sma_m4",
			"sma_mk18",
			"sma_hk416",
			"sma_hk417",

			//SOCOMD Requirments
			"socomd_core",
			"socomd_data_cup"
		};

		units[] = {
			"SOCOMD_SHIP_B"
		};

		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgEditorSubcategories.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgLoadouts.hpp"