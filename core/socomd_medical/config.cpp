#include "predefined.hpp"

class CfgPatches {
	class SOCOMD_Medical {
		//Internal Version
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = { 1,2,0 };

		requiredVersion = 1.0;
		requiredAddons[] = {
			"ace_medical_treatment",
            "kat_main",
            "kat_airway",
            "kat_breathing",
            "kat_circulation",
		};

		units[] = {
			SOCOMD_MorphineItem,
			SOCOMD_epinephrineItem,
			SOCOMD_fentanylItem,
			SOCOMD_naloxonelItem,
			SOCOMD_ketamineItem,
			SOCOMD_ApapItem
		};

		weapons[] = {
			"SOCOMD_naloxone",
			"SOCOMD_fentanyl",
			"SOCOMD_ketamine",
			"SOCOMD_ketamine_200mg",
			"SOCOMD_tetra",
			"SOCOMD_Apap",
			"SOCOMD_VPN",
			"SOCOMD_NDC"
		};
	};
};

#include "configs\CfgFunctions.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgExtendedEventHandler.hpp"

#include "configs\ACE_Medical_Statemachine.hpp"
#include "configs\ACE_Medical_Treatment.hpp"
#include "configs\ACE_Medical_Treatment_Actions.hpp"