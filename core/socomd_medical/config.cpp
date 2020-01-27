#include "predefined.hpp"

class CfgPatches {
	class SOCOMD_Medical {
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

		weapons[] = {
			"SOCOMD_Ketamine_6mg",
			"SOCOMD_Ketamine_200mg"
		};
	};
};

#include "configs\CfgFunctions.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgExtendedEventHandler.hpp"

#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"