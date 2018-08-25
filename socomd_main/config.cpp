#include "predefined.hpp"

class CfgPatches 
{
	class socomd_main 
	{
		//Internal Version
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		//Required Version
		requiredVersion = 0.1;

		//Mod Dependencies
		requiredAddons[] = 
		{
			"socomd_data",
			//"ffaa_et_tigre",
			//"ffaa_ar_supercat",
			//"MELB",
			"A3_Characters_F_BLUFOR",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Characters_F",
			// "task_force_radio",
			// "task_force_radio_items",
			"ace_common",
			"cTab",
			"ace_main",
			"ace_medical",
			"ace_zeus",
			"A3_Weapons_F_beta",
			//"hafm_weapons",
			"ace_parachute",
			"tf47_launchers",
			"ace_huntir",
			"CUP_AirVehicles_CH47",
			"CUP_AirVehicles_UH60",
			"CUP_BaseConfig_F"
		};

		//SOCOMD Custom Units
		units[] = 
		{
			// OTHER
			"FLAG_ADFU_F",
			"FLAG_ADFOPFOR_F",
			"SOCOMD_BERET",
			
			// LAND
			"SOCOMD_ASLAV_W",
			"SOCOMD_ASLAV_D",
			"SOCOMD_JACKAL_HMG_D",
			"SOCOMD_JACKAL_AGL_D",
			"SOCOMD_JACKAL_HMG_W",
			"SOCOMD_JACKAL_AGL_W",
			//"SOCOMD_BUSHMASTER_HMG",
			"SOCOMD_BUSHMASTER_TRANS",
			"SOCOMD_MASTIFF_HMG_W",
			"SOCOMD_MASTIFF_HMG_D",
			"SOCOMD_LANDROVER_TRANS_D",
			"SOCOMD_LANDROVER_HMG_D",
			"SOCOMD_LANDROVER_GMG_D",
			"SOCOMD_LANDROVER_TRANS_W",
			"SOCOMD_LANDROVER_HMG_W",
			"SOCOMD_LANDROVER_GMG_W",
			"SOCOMD_MTVR_Trans",
			"SOCOMD_MTVR_Ammo",
			"SOCOMD_MTVR_Refuel",
			"SOCOMD_MTVR_Repair",
			"SOCOMD_QUADBIKE",
			"SOCOMD_BIKE",
			"SOCOMD_SUPPORT_HMG_D",
			"SOCOMD_SUPPORT_HMG_W",
			"socomd_nds_6x6_atv_mil",
			"socomd_nds_6x6_atv_mil2",

			// AIR
			"SOCOMD_BLACKHAWK",
			"SOCOMD_BLACKHAWK_FFV",
			"SOCOMD_BLACKHAWK_MEV",
			"SOCOMD_CHINOOK",
			"SOCOMD_CHINOOK_VIV",
			//"SOCOMD_HURRICANE_AA",
			//"SOCOMD_HURRICANE_AT",
			"SOCOMD_HURRICANE_CAS",
			"SOCOMD_FIREFLY",
			//"SOCOMD_DRAGONFLY_127",
			"SOCOMD_DRAGONFLY_762",

			// SEA
			"SOCOMD_ASSAULT_BOAT",
			"SOCOMD_RHIB_ARMED",

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
			"SOCOMD_Personal_box",
			"SOCOMD_Training_box",
			"SOCOMD_UAV_crate",
			"SOCOMD_Supply_Crate",
			"SOCOMD_Ammo_Box",
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
#include "configs\CfgDifficultyPresets.hpp"
#include "configs\CfgMissions.hpp"
#include "configs\CfgMarkers.hpp"
#include "configs\CfgGlasses.hpp"
#include "configs\CfgMoves.hpp"

#include "configs\CfgWeapons.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\CfgVehicles.hpp"

#include "configs\CfgClasses.hpp"
#include "configs\CfgGroups.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgLoadoutVests.hpp"
#include "configs\CfgLoadoutBackpacks.hpp"