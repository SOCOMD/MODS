#include "predefined.hpp"

class CfgPatches
{
	class socomd_cup_compat
	{
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
			"socomd_data",
			"socomd_core"
		};

		units[] = {
			"SOCOMD_RHIB_ARMED"
		};

		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\CfgVehicles.hpp"