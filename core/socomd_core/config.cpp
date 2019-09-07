#include "predefined.hpp"

class CfgPatches {
	class socomd_core {
		//Internal Version
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = { 1,2,0 };

		//Required Version
		requiredVersion = 1.2;

		//Mod Dependencies
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Weapons_F_beta",

			"ace_common",
			"ace_main",
			"ace_medical",
			"ace_zeus",
			"ace_parachute",
			"ace_huntir",

			"adfu_base",
			"au_beret_addon",
			"bma3_bushmaster",
			"vtn_armorw_lav25_cf",
			"plp_containers",
			"COS_back_pack",
			"ctab",
			"dso_weapons",
			"lbtt_Vest_config",
			"milgp_headgear_cfg",

			"socomd_data_core"
		};

		//SOCOMD Custom Units
		units[] = {
			// OTHER
			"FLAG_ADFU_F",
			"FLAG_ADFOPFOR_F",
			"SOCOMD_BERET",

			//LAND
			"SOCOMD_APC_A",
			"SOCOMD_APC_B",
			"SOCOMD_APC_C",
			"SOCOMD_BUSHMASTER_TRANS",
			"SOCOMD_BUSHMASTER_HMG",
			"SOCOMD_TRUCK_TRANSPORT_A",
			"SOCOMD_TRUCK_AMMO_A",
			"SOCOMD_TRUCK_FUEL_A",
			"SOCOMD_TRUCK_REPAIR_A",
			"SOCOMD_BIKE",
			"SOCOMD_QUADBIKE",

			//AIR
			"SOCOMD_FIREFLY_A",
			"SOCOMD_DRAGONFLY_A",
			"SOCOMD_WARRIOR_A",
			"SOCOMD_WARRIOR_B",
			"SOCOMD_NOMAD_A",
			"SOCOMD_HURRICANE_A",

			// SEA
			"SOCOMD_SHIP_A",
			"SOCOMD_SHIP_B",

			// BOXES
			"SOCOMD_QStore_A",
			"SOCOMD_Personal_box",
			"SOCOMD_Training_box",

			"SOCOMD_Crate_Empty",
			"SOCOMD_Crate_Fuel",
			"SOCOMD_Crate_Hasty",
			"SOCOMD_Supply_Empty",
			"SOCOMD_Supply_Ammo",
			"SOCOMD_Supply_Medical",
			"SOCOMD_Supply_Gustav",
			"SOCOMD_Supply_Mortar",
			"SOCOMD_Supply_HMG",
			"SOCOMD_Supply_AGL",
			"SOCOMD_Supply_Javelin",
			"SOCOMD_Supply_Tools",
			"SOCOMD_Supply_Vehicle_Ammo",

			// MEN
			"SOCOMD_Unarmed",
			"SOCOMD_Homestead",
			"SOCOMD_Rifleman",
			"SOCOMD_Pilot",
			"SOCOMD_Crewman"
		};

		//SOCOMD Custom Weapons
	    weapons[] = {
			//UNIFORMS
			"SOCOMD_Uniform_LongSleeve",
			"SOCOMD_Uniform_ShortSleeve",
			"SOCOMD_Uniform_Officer_LongSleeve",
			"SOCOMD_Uniform_Officer_ShortSleeve",
			"SOCOMD_Uniform_Diver",
			"SOCOMD_Uniform_GSuit",
			"SOCOMD_Uniform_Snow_HoodUp",
			"SOCOMD_Uniform_Snow_HoodDown",

			//VESTS
			"SOCOMD_Vest_TL",
			"SOCOMD_Vest_AR",
			"SOCOMD_Vest_OP",
			"SOCOMD_Vest_Pilot",

			//HEADGEAR
			"SOCOMD_Headgear_Helmet",
			"SOCOMD_Headgear_Helmet_Goggles",

			"SOCOMD_Coveralls_Black",
			"SOCOMD_Pistol"
		};

		//SOCOMD Custom Ammo
		ammo[] = {
			//Empty
		};

		//SOCOMD Custom Magazines
		magazines[] = {
			//Standard Rounds
			"SOCOMD_Item_Magazine_556x45_30Rnd",
			"SOCOMD_Item_Magazine_556x45_30Rnd_Tracer",
			"SOCOMD_Item_Magazine_556x45_200Rnd_Tracer",
			"SOCOMD_Item_Magazine_762x51_20Rnd",
			"SOCOMD_Item_Magazine_408_7Rnd",
			"SOCOMD_Item_Magazine_300_5Rnd",
			"SOCOMD_Item_Magazine_45ACP_11Rnd",
			"SOCOMD_Item_Magazine_9x21_60Rnd"
		};
	};
};

class CfgAnimation {
	ladderSpeed="0.5/(1/3)";
};

#include "configs\CfgFunctions.hpp"
#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgEditorSubcategories.hpp"
#include "configs\CfgAISkill.hpp"
#include "configs\CfgDifficultyPresets.hpp"
#include "configs\CfgMissions.hpp"
#include "configs\CfgMarkers.hpp"
#include "configs\CfgGlasses.hpp"
#include "configs\CfgMoves.hpp"

#include "configs\CfgMagazines.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgAmmo.hpp"

#include "configs\CfgClasses.hpp"
#include "configs\CfgGroups.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgLoadoutVests.hpp"
#include "configs\CfgLoadoutBackpacks.hpp"
#include "configs\CfgUnitInsignia.hpp"
#include "configs\CfgASORVS.hpp"
#include "configs\Rsc.hpp"
#include "configs\CfgExtendedEventHandlers.hpp"
//#include "configs\CfgModels.hpp"