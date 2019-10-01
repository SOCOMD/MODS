#include "\socomd_core\predefined.hpp"

class SensorTemplateLaser;
class SensorTemplateIR;
class CfgPatches  {
	class socomd_compat_cup  {
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			//CUP Requirments
			"cup_airvehicles_ah6",
			"cup_airvehicles_ah64",
			"cup_airvehicles_ch47",
			"cup_airvehicles_uh60",
			"cup_wheeledvehicles_mtvr",

			//SOCOMD Requirments
			"socomd_core",
			"socomd_data_cup"
		};
		units[] = {
			"SOCOMD_SOV_GMG_W",
			"SOCOMD_SOV_HMG_W",
			"SOCOMD_SOV_GMG_D",
			"SOCOMD_SOV_HMG_D"
			};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgWeapons.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\cfgMagazines.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgExtendedEventHandlers.hpp"