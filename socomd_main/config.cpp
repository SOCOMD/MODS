#include "predefined.hpp"

class CfgPatches 
{
	class socomd_main 
	{
		//Required Version
		requiredVersion = 0.1;

		//Mod Dependencies
		requiredAddons[] = 
		{
			"socomd_data",
			"ffaa_et_tigre",
			"ffaa_ar_supercat",
			//"uk3cb_baf_weapons",
			"MELB",
			"A3_Characters_F_BLUFOR",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Characters_F",
			"task_force_radio",
			"task_force_radio_items",
			"ace_common",
			"cTab",
			"ace_main",
			"ace_medical",
			"A3_Weapons_F_beta",
			"hafm_weapons",
			"ace_parachute",
			"tf47_launchers",
			//"RH_m4_cfg",
			"ace_huntir",
			"CUP_AirVehicles_CH47",
			"CUP_AirVehicles_UH60"
		};

		//SOCOMD Custom Units
		units[] = 
		{
			// OTHER
			"FLAG_ADFU_F",
			"FLAG_ADFOPFOR_F",
			"SOCOMD_BERET",
			
			// LAND
			"SOCOMD_ASLAV",
			"SOCOMD_JACKAL_HMG_D",
			"SOCOMD_JACKAL_AGL_D",
			"SOCOMD_JACKAL_HMG_W",
			"SOCOMD_JACKAL_AGL_W",
			"SOCOMD_BUSHMASTER_HMG",
			"SOCOMD_BUSHMASTER_TRANS",
			"SOCOMD_QUADBIKE",
			"SOCOMD_BIKE",
			"SOCOMD_SUPPORT_HMG_D",
			"SOCOMD_SUPPORT_HMG_W",

			// AIR
			"SOCOMD_BLACKHAWK",
			"SOCOMD_BLACKHAWK_FFV",
			"SOCOMD_BLACKHAWK_MEV",
			"SOCOMD_CHINOOK",
			"SOCOMD_CHINOOK_VIV",
			"SOCOMD_HURRICANE_AA",
			"SOCOMD_HURRICANE_AT",
			"SOCOMD_HURRICANE_CAS",
			"SOCOMD_FIREFLY",
			"SOCOMD_DRAGONFLY_127",
			"SOCOMD_DRAGONFLY_762",

			// SEA
			"SOCOMD_ASSAULT_BOAT",
			"SOCOMD_ASSAULT_BOAT_S",
			"SOCOMD_GUNBOAT",

			// BACKPACKS
			"SOCOMD_Backpack",
			"SOCOMD_Backpack_Empty",
			"SOCOMD_Sapper_Backpack",
			"SOCOMD_Medic_Backpack",
			"SOCOMD_SniperLR",
			"SOCOMD_Sniper_Backpack",
			"SOCOMD_Gunner_Backpack",
			"SOCOMD_LongRange_Radio",

			// BOXES
			"SOCOMD_Personal_Box",
			"SOCOMD_hkammo_box",
			"SOCOMD_archer_crate",
			"SOCOMD_uniform_crate",
			"SOCOMD_UAV_crate",
			"SOCOMD_sniper_crate",
			"SOCOMD_supply_crate",
			"SOCOMD_training_box",
			"SOCOMD_mag58_crate",
			"SOCOMD_m2_crate",
			"SOCOMD_mk19_crate",
			"SOCOMD_javelin_crate",
			"SOCOMD_stinger_crate",
			"SOCOMD_fortification_crate",
			"SOCOMD_cargonet",
			"SOCOMD_he_mortar_crate",
			"SOCOMD_wflare_mortar_crate",
			"SOCOMD_wsmoke_mortar_crate",

			// MEN
			"SOCOMD_Light_Anti_Tank_Marksman",
			"SOCOMD_PlatoonLeader",
			"SOCOMD_PlatoonMedic",
			"SOCOMD_PlatoonSignaller",
			"SOCOMD_SectionLeader",
			"SOCOMD_2IC",
			"SOCOMD_Medic",
			"SOCOMD_Gunner",
			"SOCOMD_Sapper",
			"SOCOMD_Rifleman",
			"SOCOMD_Sniper_Spotter",
			"SOCOMD_Weapons_TeamLeader",
			"SOCOMD_Weapons_Specialist",
			"SOCOMD_Weapons_Assistant",
			"SOCOMD_Pilot",
			"SOCOMD_PlatoonSergeant",
			"SOCOMD_Recon_TeamLeader",
			"SOCOMD_Homestead"
		};

		//SOCOMD Custom Weapons
	    weapons[] = 
		{
			//UNIFORMS
			"SOCOMD_Uniform_LongSleeve",
			"SOCOMD_Uniform_ShortSleeve",
			"SOCOMD_Uniform_Officer_LongSleeve",
			"SOCOMD_Uniform_Officer_ShortSleeve",

			//VESTS
			//"SOCOMD_Vest",
			"SOCOMD_Vest_TL",
			"SOCOMD_Vest_AR",
			"SOCOMD_Vest_OP",
			"SOCOMD_Vest_Pilot",
			"SOCOMD_Vest_Rebreather",

			//HEADGEAR
			//"SOCOMD_Helmet",
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