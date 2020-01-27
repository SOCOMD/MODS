class CfgPatches {
	class socomd_medical {
		//Internal Version
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = { 1,2,0 };

		requiredVersion = 1.0;
		requiredAddons[] = {
			"socomd_core",
			"ace_medical_treatment"
		};

		units[] = {};
		weapons[] = {};
	};
};
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
