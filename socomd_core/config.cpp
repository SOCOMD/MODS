#include "predefined.hpp"

class CfgPatches
{
	class socomd_main
	{
		//Internal Version
		version = 1.0.6;
		versionStr = "1.0.6";
		versionAr[] = { 1,0,6 };

		//Required Version
		requiredVersion = 0.1;

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
			"bma3_bushmaster",
			"COS_back_pack",
			"ctab",
			"dso_weapons",
			"lbtt_Vest_config",
			"socomd_data"
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

			// BACKPACKS
			"SOCOMD_Backpack",
			"SOCOMD_Backpack_Empty",
			"SOCOMD_Sapper_Backpack",
			"SOCOMD_Medic_Backpack",
			"SOCOMD_Sniper_Backpack",
			"SOCOMD_Gunner_Backpack",
			"SOCOMD_LongRange_Radio",

			// BOXES
			"SOCOMD_Interactive_QStore",
			"SOCOMD_TAGE_Interactive_QStore",
			"SOCOMD_Interactive_QStore_OldSchool",
			"SOCOMD_Interactive_QStore_Green",
			"SOCOMD_Personal_box",
			"SOCOMD_Training_box",
			"SOCOMD_UAV_crate",
			"SOCOMD_Supply_Crate",
			"SOCOMD_Ammo_Box",
			"SOCOMD_Vehicle_Ammo_Box",
			"SOCOMD_Medical_Box",
			"SOCOMD_cargonet",
			"SOCOMD_Gustav_Box",
			"SOCOMD_Mortar_Box",

			// MEN COMMANDO
			"SOCOMD_PlatoonLeader",
			"SOCOMD_PlatoonMedic",
			"SOCOMD_PlatoonSignaller",
			"SOCOMD_SectionLeader",
			"SOCOMD_2IC",
			"SOCOMD_Grenadier",
			"SOCOMD_Sapper",
			"SOCOMD_Gunner",
			"SOCOMD_Specialist",
			"SOCOMD_Marksman",
			"SOCOMD_AT",
			"SOCOMD_Medic",
			"SOCOMD_Rifleman",
			"SOCOMD_Sniper_Spotter",
			"SOCOMD_Weapons_TeamLeader",
			"SOCOMD_Weapons_Specialist",
			"SOCOMD_Weapons_Assistant",
			"SOCOMD_Pilot",
			"SOCOMD_PlatoonSergeant",
			"SOCOMD_Recon_TeamLeader",
			"SOCOMD_Homestead",
			"SOCOMD_Trainer",
			"SOCOMD_Trainee",

			//MEN SASR
			"SOCOMD_SASR_Trooper",
			"SOCOMD_SASR_Homestead"
		};

		//SOCOMD Custom Weapons
	    weapons[] =
		{
			//UNIFORMS
			"SOCOMD_Uniform_LongSleeve",
			"SOCOMD_Uniform_ShortSleeve",
			"SOCOMD_Uniform_Officer_LongSleeve",
			"SOCOMD_Uniform_Officer_ShortSleeve",
			"SOCOMD_Uniform_GSuit",
			"SOCOMD_Uniform_Snow_HoodUp",
			"SOCOMD_Uniform_Snow_HoodDown",

			//VESTS
			"SOCOMD_Vest_TL",
			"SOCOMD_Vest_AR",
			"SOCOMD_Vest_OP",
			"SOCOMD_Vest_Pilot",
			"SOCOMD_Vest_Rebreather",

			//HEADGEAR
			"SOCOMD_Headgear_Helmet",
			"SOCOMD_Headgear_Helmet_Goggles",

			"SOCOMD_Javelin",
			"SOCOMD_Coveralls_Black",
			"SOCOMD_Pistol"
		};

		//SOCOMD Custom Ammo
		ammo[] =
		{
			//Empty
		};

		//SOCOMD Custom Magazines
		magazines[] =
		{
			//Empty
		};
	};
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

#include "configs\CfgVehicles.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgMagazines.hpp"

#include "configs\CfgClasses.hpp"
#include "configs\CfgGroups.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgLoadoutVests.hpp"
#include "configs\CfgLoadoutBackpacks.hpp"
#include "configs\CfgUnitInsignia.hpp"
