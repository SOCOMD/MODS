#include "\socomd_core\predefined.hpp"
#include "predefined.hpp"

class CfgPatches  {
	class socomd_content  {
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = { 1,2,0 };

		requiredVersion = 1.2;

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
			"SOCOMD_SHIP_B",
			"SOCOMD_QStore_B",
			"SOCOMD_QStore_TAG",
			"SOCOMD_QStore_RUS",
			"SOCOMD_Supply_Sniper",
			"SOCOMD_RUS_soldier_Rifleman",
			"SOCOMD_RUS_soldier_Machinegunner",
			"SOCOMD_RUS_soldier_Autorifle",
			"SOCOMD_RUS_soldier_Leader",
			"SOCOMD_RUS_soldier_Sniper",
			"SOCOMD_RUS_soldier_Rifleman_Night",
			"SOCOMD_RUS_soldier_Machinegunner_Night",
			"SOCOMD_RUS_soldier_Autorifle_Night",
			"SOCOMD_RUS_soldier_Leader_Night",
			"V12_KTM_SOCOMD",
			"SOCOMD_LR_ATV",
			"tut_R22"
		};

		weapons[] = {
			"broken_launch_RPG7_F",
			"broken_CUP_launch_RPG7V"
		};
		
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
#include "configs\CfgASORVS.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgGroups.hpp"
#include "configs\CfgExtendedEventHandlers.hpp"
#include "configs\CfgFunctions.hpp"