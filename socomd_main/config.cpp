#include "predefined.hpp"

class CfgPatches  {
	class socomd_main  {

		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		requiredVersion = 0.1;

		requiredAddons[] = {
			//SOCOMD Requirments
			"socomd_core",
			"socomd_cup_compat",
			"socomd_sma_compat"
		};

		units[] = {};
		weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};