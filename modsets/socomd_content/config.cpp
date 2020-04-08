#include "\socomd_core\predefined.hpp"
#include "settings\inventories.hpp"
#include "predefined.hpp"

class CfgPatches  {
	class socomd_content  {
		version = 1.2.0;
		versionStr = "1.2.0";
		versionAr[] = { 1,2,0 };

		requiredVersion = 1.2;

		requiredAddons[] = {
			//CUP Requirments
			"cup_airvehicles_ah6",
			"cup_airvehicles_ah64",
			"cup_airvehicles_ch47",
			"cup_airvehicles_uh60",
			"cup_wheeledvehicles_mtvr",
			"CUP_Creatures_Military_USArmy",

			//SMA Requirments
			"sma_weapons",
			"sma_m4",
			"sma_mk18",
			"sma_hk416",
			"sma_hk417",

			//SOCOMD Requirments
			"socomd_core",
			"socomd_data_cup",
			"Troy_4A5_Acc"
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

			"V12_KTM_SOCOMD",
			"SOCOMD_LR_ATV",
			"tut_R22"
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

class asdg_SlotInfo;
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
};

#include "configs\CfgEditorCategories.hpp"
#include "configs\CfgMagazines.hpp"
#include "configs\CfgMagazineWells.hpp"
#include "configs\CfgLoadoutWeapons.hpp"
#include "configs\CfgWeapons.hpp"
#include "configs\CfgMuzzleslot.hpp"
#include "configs\CfgVehicles.hpp"
#include "configs\CfgLoadouts.hpp"
#include "configs\CfgASORVS.hpp"
#include "configs\CfgAmmo.hpp"
#include "configs\CfgGroups.hpp"
#include "configs\CfgExtendedEventHandlers.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgWorldType.hpp"