// #include "\socomd_core\predefined.hpp"
#include "settings\inventories.hpp"
#include "predefined.hpp"

class CfgPatches  {
	class socomd_content  {
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = { 1,2,0 };

		requiredVersion = 1.2;

		requiredAddons[] = {
            // CBA requirements
            "cba_keybinding",
            
			//CUP Requirments
            "CUP_AirVehicles_Ka52",
            "CUP_AirVehicles_MH60S",
            "CUP_AirVehciles_UH1Y",
            "CUP_AirVehicles_AH1Z",
            "CUP_AirVehicles_AH64",
            "CUP_AirVehicles_AH6",
            "CUP_AirVehciles_AW159",
            "CUP_AirVehicles_CH47",
            "CUP_AirVehicles_Ka50",
            "CUP_AirVehicles_Mi35",
            "CUP_AirVehciles_SA330",
            "CUP_AirVehicles_UH1H",
            "CUP_AirVehicles_UH60",
			"cup_wheeledvehicles_mtvr",
			"CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_BAF",
            "CUP_Creatures_Military_Germany",
            "CUP_Creatures_Military_NAPA",
            "CUP_Creatures_Military_Taki",
            "CUP_Creatures_Military_TakiInsurgents",
            "CUP_Creatures_Military_USMC",
            "CUP_Creatures_Military_ACR",
            "CUP_Creatures_Military_CDF",
            "CUP_Creatures_Military_Chedaki",
            "CUP_Creatures_Military_Delta",
            "CUP_Creatures_Military_RACS",
            "CUP_Creatures_Military_SLA",
            "CUP_Creatures_Military_USArmy",
            "CUP_Creatures_Military_HIL",

			//SMA Requirments
			"sma_weapons",
			"sma_m4",
			"sma_mk18",
			"sma_hk416",
			"sma_hk417",

			//SOCOMD Requirments
			"socomd_core",
			"socomd_data_cup",
			"Troy_4A5_Acc",
            "tf47_m3maaws",

			// CFP Requirements
			"CFP_O_WAGNER_WDL",
            "CFP_I_WAGNER",
            "CFP_I_WAGNER_WDL",
            "CFP_I_WAGNER_WIN",
            "CFP_O_WAGNER",
            "CFP_O_WAGNER_WIN",
            "CFP_B_ILIDF",
            "CFP_B_USRANGERS_WDL",
            "CFP_B_USSEALS_DES",
            "CFP_B_USSEALS_WDL",
			 "CFP_B_KEARMY",
            "CFP_O_NKARMY",
		};

		units[] = {
			"SOCOMD_SHIP_B",
			"SOCOMD_QStore_TAG",
			"SOCOMD_QStore_RUS",

			"SOCOMD_SSO_soldier_Rifleman",
			"SOCOMD_SSO_soldier_Machinegunner",
			"SOCOMD_SSO_soldier_Autorifle",
			"SOCOMD_SSO_soldier_Leader",
			"SOCOMD_SSO_soldier_Sniper",
			"SOCOMD_SSO_soldier_Rifleman_Night",
			"SOCOMD_SSO_soldier_Machinegunner_Night",
			"SOCOMD_SSO_soldier_Autorifle_Night",
			"SOCOMD_SSO_soldier_Leader_Night",

			"SOCOMD_Vympel_Unarmed",
			"SOCOMD_Vympel_Leader",
			"SOCOMD_Vympel_Operator",
			"SOCOMD_Vympel_Medic",
			"SOCOMD_Vympel_MachineGunner",
			"SOCOMD_Vympel_Sapper",
			"SOCOMD_Vympel_Marksman",

			"SOCOMD_FSB_Unarmed",
			"SOCOMD_FSB_Leader",
			"SOCOMD_FSB_Operator",
			"SOCOMD_FSB_Medic",
			"SOCOMD_FSB_Breacher",

			"V12_KTM_SOCOMD",
			"SOCOMD_LR_ATV",
			"tut_R22",

			
            "O_OPulauPMCWoodland_Assault_Boat_01",
            "O_OPulauPMCWoodland_AH_6Little_Bird_01",
            "O_OPulauPMCWoodland_MH_6Littlebird_01",
            "O_OPulauPMCWoodland_SUV_01",
            "O_OPulauPMCWoodland_Hilux_01",
            "O_OPulauPMCWoodland_Hilux_DShKM_01",
            "O_OPulauPMCWoodland_Van_Transport_01",
            "O_OPulauPMCWoodland_Tactical_Coordinator_01",
            "O_OPulauPMCWoodland_Team_Leader_01",
            "O_OPulauPMCWoodland_Rifleman_01",
            "O_OPulauPMCWoodland_Rifleman_AT_01",
            "O_OPulauPMCWoodland_Machinegunner_01",
            "O_OPulauPMCWoodland_Medic_01",
            "O_OPulauPMCWoodland_Marksman_01",
            "O_OPulauPMCWoodland_Tactical_Driver_01",
            "O_OPulauPMCWoodland_Tactical_Pilot_01",
            "O_OPulauPMCWoodland_VIP_Bodyguard_M4A5_01",
            "O_OPulauPMCWoodland_VIP_Bodyguard_HK417_01",
            "O_OPulauPMCWoodland_VIP_Bodyguard_M1014_01",

			"O_SEAHVT_Darmanto_Mansur_01",
            "O_SEAHVT_Gandi_Pradana_01",
            "O_SEAHVT_Umaya_Sitorus_01",
            "O_SEAHVT_Lac_Thuy_Du_01",
            "O_SEAHVT_Cagak_Pramata_01",
			"O_SEARebels_Squad_Leader_01",
            "O_SEARebels_Rifleman_01",
            "O_SEARebels_Grenadier_01",
            "O_SEARebels_Machine_Gunner_01",
            "O_SEARebels_Marksman_01",
            "O_SEARebels_Rifleman_AT_01",
            "O_SEARebels_Medic_01",
            "O_SEARebels_Rifleman_AA_01",
            "O_SEARebels_Crew_01",
            "O_SEARebels_Pilot_01",
            "O_SEARebels_Driver_01",
            "O_SEARebels_Sniper_01",
            "O_SEARebels_UAZ_DShKM_01",
            "O_SEARebels_Ural_ZU_23_01",
            "O_SEARebels_Mi_8MT_01",
            "O_SEARebels_ZU_23_01",
            "O_SEARebels_DShKM_01",
            "O_SEARebels_DShKM_Minitripod_01",
            "O_SEARebels_Gunner_01",
            "O_SEARebels_UAZ_01",
            "O_SEARebels_Ural_Covered_01",
            "O_SEARebels_Ural_Open_01",
            "O_SEARebels_Ural_Refuel_01",
            "O_SEARebels_Ural_Ammo_01",
            "O_SEARebels_Ural_Empty_01",
            "O_SEARebels_Mi_8MT_VIV_01",
            "O_SEARebels_Assault_Boat_01",
            "O_SEARebels_Podnos_2B14_01",
            "O_OSEARebels_Spotter_01"
		};

		weapons[] = {
			"broken_launch_RPG7_F",
			"broken_CUP_launch_RPG7V",
			"broken_CUP_launch_RPG7V_NSPU",
			"broken_CUP_launch_RPG7V_PGO7V",
			"broken_CUP_launch_RPG7V_PGO7V2",
			"broken_CUP_launch_RPG7V_PGO7V3"
		};
		
		ammo[] = {};
		magazines[] = {};
	};
};

class asdg_SlotInfo;/*
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
        PEQ_T_point_tan = 1;
        PEQ_R_point_tan = 1;
        WMLX_L_PEQ_T_point_tan = 1;
        WMLX_T_PEQ_R_point_tan = 1;
        WMLX_L_PEQ_R_point_tan = 1;
        M300_L_PEQ_R_point_tan = 1;
        M300_B_PEQ_T_point_tan = 1;
        M600_L_PEQ_R_point_tan = 1;
        M600_B_PEQ_T_point_tan = 1;
        WMLX_L_PEQ_T_point_black = 1;
        WMLX_T_PEQ_R_point_black = 1;
        WMLX_L_PEQ_R_point_black = 1;
        M300_L_PEQ_R_point_black = 1;
        M300_B_PEQ_T_point_black = 1;
        M600_L_PEQ_R_point_black = 1;
        M600_B_PEQ_T_point_black = 1;	
	};
};*/

#include "configs\bettir_config.hpp"
#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgFactionClasses.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgASORVS.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgGroups.hpp"
#include "configs\CfgExtendedEventHandlers.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgMuzzleslot.hpp"
#include "configs\CfgWorldType.hpp"
#include "configs\CfgArsenalOptions.hpp"