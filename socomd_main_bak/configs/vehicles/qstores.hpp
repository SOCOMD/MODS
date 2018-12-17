////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class Land_PaperBox_closed_F;
class SOCOMD_QStore_Base : Land_PaperBox_closed_F {
	scope = private;
	scopeCurator = private;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;
	author = AUTHOR_STR;
	displayName = "QStore";

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};
};

#define QSTORE_ACTION_GRP_BEGIN(GRP_ID, DISPLAY_STR) \
class SOCOMD_ACTION_GRP_##GRP_ID { \
	displayName = DISPLAY_STR; \
	selection = ""; \
	distance = 5; \
	condition = 1;

#define QSTORE_ACTION_GRP_END };

#define QSTORE_ACTION_LOADOUT(DISPLAY_STR, LOADOUT) \
class SOCOMD_ACTION_LOADOUT_##LOADOUT { \
	displayName = DISPLAY_STR; \
	statement = "[_player, '##LOADOUT'] call SOCOMD_fnc_SwitchUnitLoadout"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	condition = 1; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_WEAPON(DISPLAY_STR, WEAPON) \
class SOCOMD_ACTION_WEAPON_##WEAPON { \
	displayName = DISPLAY_STR; \
	condition = "[_player, '##WEAPON'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon"; \
	statement = "[_player , '##WEAPON'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_VEST(DISPLAY_STR, VEST) \
class SOCOMD_ACTION_VEST_##VEST { \
	displayName = DISPLAY_STR; \
	condition = "[_player, '##VEST'] call SOCOMD_fnc_ActionCondition_CanSwapVest"; \
	statement = "[_player , '##VEST'] call SOCOMD_fnc_Action_ReplaceVest"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_BACKPACK(DISPLAY_STR, BACKPACK) \
class SOCOMD_ACTION_VEST_##BACKPACK { \
	displayName = DISPLAY_STR; \
	condition = "[_player, '##BACKPACK'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks"; \
	statement = "[_player , '##BACKPACK'] call SOCOMD_fnc_Action_ReplaceBackpack"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_HEADGEAR(DISPLAY_STR, HEADGEAR) \
class SOCOMD_ACTION_VEST_##HEADGEAR { \
	displayName = DISPLAY_STR; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	statement = "[_player , '##HEADGEAR'] call SOCOMD_fnc_Action_ReplaceHeadgear"; \
	condition = 1; \
	showDisabled = 0; \
};

class SOCOMD_QStore_A : SOCOMD_QStore_Base {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	displayName = "Standard QStore";

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_Personalise
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			// Select Loadouts
			QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (2CDO)")
					QSTORE_ACTION_LOADOUT("Commander",SOCOMD_TroopLeader)
					QSTORE_ACTION_LOADOUT("Leader",SOCOMD_PatrolLeader)
					QSTORE_ACTION_LOADOUT("2IC",SOCOMD_Grenadier)
					QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_Rifleman)
					QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_Sapper)
					QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_MachineGunner)
					QSTORE_ACTION_LOADOUT("Medic",SOCOMD_Medic)
					QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_Marksman)
					QSTORE_ACTION_LOADOUT("Light Anti-tank",SOCOMD_LAT)
					QSTORE_ACTION_LOADOUT("Medium Anti-tank",SOCOMD_MAT)
					QSTORE_ACTION_LOADOUT("Heavy Anti-tank",SOCOMD_HAT)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB1,"Change Role (SUPPORT)")
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
					QSTORE_ACTION_LOADOUT("PJ",SOCOMD_PJ)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END

			// Select Weapons
			QSTORE_ACTION_GRP_BEGIN(SELECT_WEAPONS,"Weapons")
				QSTORE_ACTION_WEAPON("M4A5",SMA_M4afgSTOCK)
				QSTORE_ACTION_WEAPON("M4A5 UGL",SMA_M4_GL_SM)
				QSTORE_ACTION_WEAPON("HK416",SMA_HK416CUSTOMCQBvfgB)
				QSTORE_ACTION_WEAPON("HK416 UGL",SMA_HK416GLCQB_B)
				QSTORE_ACTION_WEAPON("MK18 MOE",SMA_MK18MOEBLK_SM)
				QSTORE_ACTION_WEAPON("MK18 MOE UGL",SMA_MK18BLK_GL_SM)
				QSTORE_ACTION_WEAPON("AUG A3",SMA_AUG_A3_F)
				QSTORE_ACTION_WEAPON("AUG A3 UGL",SMA_AUG_EGLM)
				QSTORE_ACTION_WEAPON("Minimi",CUP_lmg_m249_pip2)
				QSTORE_ACTION_WEAPON("Maximi",sma_minimi_mk3_762tsb)
				QSTORE_ACTION_WEAPON("Mk14 EBR",SPARTAN_EBR_black_F)
				QSTORE_ACTION_WEAPON("HK 417",SMA_HK417_16in)
				QSTORE_ACTION_WEAPON("HK 417 (Assaulter)",SMA_HK417vfg)
				QSTORE_ACTION_WEAPON("SR98 .300",hlc_rifle_awmagnum)
				QSTORE_ACTION_WEAPON("SR98 .300 Camo",hlc_rifle_awMagnum_OD_ghillie)
				QSTORE_ACTION_WEAPON("SR98 .300 Suppressed",hlc_rifle_awcovert)
				QSTORE_ACTION_WEAPON("Barrett",ej_m107)
			QSTORE_ACTION_GRP_END

			// Select Vest
			QSTORE_ACTION_GRP_BEGIN(SELECT_VESTS,"Vests")
				QSTORE_ACTION_VEST("Comms Tan",SOCOMD_Leader_Vest_coy)
				QSTORE_ACTION_VEST("Comms Multicam",SOCOMD_Leader_Vest)
				QSTORE_ACTION_VEST("Operator Tan",SOCOMD_Operator_Vest_coy)
				QSTORE_ACTION_VEST("Operator Multicam",SOCOMD_Operator_Vest)
				QSTORE_ACTION_VEST("Rifleman Tan",SOCOMD_Rifleman_Vest_coy)
				QSTORE_ACTION_VEST("Rifleman Multicam",SOCOMD_Rifleman_Vest)
				QSTORE_ACTION_VEST("2IC Tan",SOCOMD_2IC_Vest_coy)
				QSTORE_ACTION_VEST("2IC Multicam",SOCOMD_2IC_Vest)
				QSTORE_ACTION_VEST("Medic Tan",SOCOMD_Medic_Vest_coy)
				QSTORE_ACTION_VEST("Medic Multicam",SOCOMD_Medic_Vest)
			QSTORE_ACTION_GRP_END

			//Select Backpack
			QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS,"Backpacks")
				QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS_SUB0,"Tan")
					QSTORE_ACTION_BACKPACK("SOG Recon Tan",SOG_BAG_recon_tan)
					QSTORE_ACTION_BACKPACK("Kit Bag Recon Tan",Kit_Bag_R_Tan)
					QSTORE_ACTION_BACKPACK("SOG Bag Tan",SOG_BAG_Tan)
					QSTORE_ACTION_BACKPACK("Kit Bag Tan",Kit_Bag_Tan)
					QSTORE_ACTION_BACKPACK("Kit Bag Breacher Tan",Kit_Bag_pince_TAN)
					QSTORE_ACTION_BACKPACK("SOG Breacher Tan",SOG_BAG_BREACHER_tan)
					QSTORE_ACTION_BACKPACK("SOG Medic Tan",SOG_BAG_med_tan)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS_SUB1,"Multicam")
					QSTORE_ACTION_BACKPACK("SOG Recon MC",SOG_BAG_recon_MC)
					QSTORE_ACTION_BACKPACK("Kit Bag Recon MC",Kit_Bag_R_MC)
					QSTORE_ACTION_BACKPACK("SOG Bag MC",SOG_BAG_MC)
					QSTORE_ACTION_BACKPACK("Kit Bag MC",Kit_Bag_MC)
					QSTORE_ACTION_BACKPACK("Kit Bag Breacher MC",Kit_Bag_pince_MC)
					QSTORE_ACTION_BACKPACK("SOG Breacher MC",SOG_BAG_BREACHER_MC)
					QSTORE_ACTION_BACKPACK("SOG MEDIC MC",SOG_BAG_med_MC)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END

			//Select Headgear
			QSTORE_ACTION_GRP_BEGIN(SELECT_HEADGEAR,"Headgear")
				QSTORE_ACTION_GRP_BEGIN(SELECT_HEADGEAR_SUB0,"Hard Cover")
					QSTORE_ACTION_HEADGEAR("Opscore (Tan)",ADFU_H_OpsCore_08_TAN)
					QSTORE_ACTION_HEADGEAR("Opscore (MC)",ADFU_H_OpsCore_08_MC)
					QSTORE_ACTION_HEADGEAR("Airframe (Tan)",ADFU_H_Airframe_03_tan)
					QSTORE_ACTION_HEADGEAR("Airframe (MC)",ADFU_H_Airframe_Cover_03_MC)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_HEADGEAR_SUB1,"Soft Cover")
					QSTORE_ACTION_HEADGEAR("Cap (MC)",ADFU_Cap_MC)
					QSTORE_ACTION_HEADGEAR("Cap (Tan)",CUP_H_PMC_Cap_Tan)
					QSTORE_ACTION_HEADGEAR("Boonie",VSM_multicam_boonie)
					QSTORE_ACTION_HEADGEAR("Bowman",VSM_Bowman)
					QSTORE_ACTION_HEADGEAR("Beanie",VSM_Beanie_tan)
					QSTORE_ACTION_HEADGEAR("Shemag",H_ShemagOpen_tan)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END

			// Switch Uniforms
			QSTORE_ACTION_GRP_BEGIN(SELECT_UNIFORMS,"Uniforms")
				class SOCOMD_Uniforms_ToggleDiving {
					displayName = "Toggle Diving Uniform";
					condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
					statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Uniforms_ToggleSnow {
					displayName = "Toggle Snow Uniform";
					condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
					statement = "[_player] call SOCOMD_fnc_Action_ToggleSnow";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Uniforms_ToggleSurvival {
					displayName = "Survival Uniform";
					condition = 1;
					statement = "[_player, 'survival_uniform_black'] call SOCOMD_fnc_Action_ReplaceUniform";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			QSTORE_ACTION_GRP_END
		};
	};
};

class SOCOMD_Interactive_QStore_OldSchool : Land_PaperBox_closed_F
{
	displayName = "SOCOMD QStore (Desert Auscam)";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Q-Store (Old School Gear)";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class ACE_SwitchRoleActionsSASR
				{
					displayName = "Change Role (2CDO)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_TroopLeader
					{
						displayName = "Platoon Leader";
						condition = 1;
						statement = "[_player, 'SASR_TroopLeader_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PatrolLeader
					{
						displayName = "Section Leader";
						condition = 1;
						statement = "[_player, 'SASR_PatrolLeader_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Grenadier
					{
						displayName = "2IC";
						condition = 1;
						statement = "[_player, 'SASR_Grenadier_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Rifleman
					{
						displayName = "Rifleman";
						condition = 1;
						statement = "[_player, 'SASR_Rifleman_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Sapper
					{
						displayName = "Sapper";
						condition = 1;
						statement = "[_player, 'SASR_Sapper_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_MachineGunner
					{
						displayName = "Machine Gunner";
						condition = 1;
						statement = "[_player, 'SASR_MachineGunner_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Medic
					{
						displayName = "Medic";
						condition = 1;
						statement = "[_player, 'SASR_Medic_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Marksman
					{
						displayName = "Marksman";
						condition = 1;
						statement = "[_player, 'SASR_Marksman_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Sniper
					{
						displayName = "Sniper";
						condition = 1;
						statement = "[_player, 'SASR_Sniper_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_LAT
					{
						displayName = "Light Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_LAT_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_MAT
					{
						displayName = "Medium Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_MAT_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_HAT
					{
						displayName = "Heavy Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_HAT_Old'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};

				class ACE_SwitchRoleActions171AVN
				{
					displayName = "Change Role (SUPPORT)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_Pilot
					{
						displayName = "Pilot";
						condition = 1;
						statement = "[_player, '171AVN_Pilot'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Crewman
					{
						displayName = "Crewman";
						condition = 1;
						statement = "[_player, 'SUPPORT_Crewman'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PJ
					{
						displayName = "PJ";
						condition = 1;
						statement = "[_player, '171AVN_PJ'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
			};

			class SOCOMD_Weapons
			{
				displayName = "Weapons";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_LoadoutWeapon_SMA_M4afgSTOCK
                {
                    displayName = "M4A5";
                    condition = "[_player, 'SMA_M4afgSTOCK'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
                    statement = "[_player , 'SMA_M4afgSTOCK'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };


				class SOCOMD_LoadoutWeapon_SMA_M4_GL_SM
				{
					displayName = "M4A5 UGL";
					condition = "[_player, 'SMA_M4_GL_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_M4_GL_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_HK416CUSTOMCQBvfgB
				{
					displayName = "HK416";
					condition = "[_player, 'SMA_HK416CUSTOMCQBvfgB'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK416CUSTOMCQBvfgB'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_KH416GLCQB_B
				{
					displayName = "HK416 UGL";
					condition = "[_player, 'SMA_HK416GLCQB_B'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK416GLCQB_B'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_MK18MOEBLK_SM
				{
					displayName = "MK18 MOE";
					condition = "[_player, 'SMA_MK18MOEBLK_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18MOEBLK_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_MK18BLK_GL_SM
				{
					displayName = "MK18 MOE UGL";
					condition = "[_player, 'SMA_MK18BLK_GL_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18BLK_GL_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_AUG_A3_F
				{
					displayName = "AUG A3";
					condition = "[_player, 'SMA_AUG_A3_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_AUG_A3_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_AUG_EGLM
				{
					displayName = "AUG A3 UGL";
					condition = "[_player, 'SMA_AUG_EGLM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_AUG_EGLM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_CUP_lmg_m249_pip2
				{
					displayName = "Minimi";
					condition = "[_player, 'CUP_lmg_m249_pip2'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'CUP_lmg_m249_pip2'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_sma_minimi_mk3_762tsb
				{
					displayName = "Maximi";
					condition = "[_player, 'sma_minimi_mk3_762tsb'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'sma_minimi_mk3_762tsb'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SPARTAN_EBR_black_F
				{
					displayName = "Mk14 EBR";
					condition = "[_player, 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SMA_HK417_16in
				{
					displayName = "HK 417";
					condition = "[_player, 'SMA_HK417_16in'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK417_16in'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SMA_HK417vfg
				{
					displayName = "HK 417 (Assaulter)";
					condition = "[_player, 'SMA_HK417vfg'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK417vfg'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awmagnum
				{
					displayName = "SR98 .300";
					condition = "[_player, 'hlc_rifle_awmagnum'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awmagnum'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awMagnum_OD_ghillie
				{
					displayName = "SR98 .300 Camo";
					condition = "[_player, 'hlc_rifle_awMagnum_OD_ghillie'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awMagnum_OD_ghillie'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awcovert
				{
					displayName = "SR98 .300 Suppressed";
					condition = "[_player, 'hlc_rifle_awcovert'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awcovert'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_ej_m107
				{
					displayName = "Barrett";
					condition = "[_player, 'ej_m107'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'ej_m107'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};

			class SOCOMD_Uniforms
			{
				displayName = "Uniforms";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Uniforms_ToggleDiving
                {
                    displayName = "Toggle Diving Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
				class SOCOMD_Uniforms_ToggleSnow
                {
                    displayName = "Toggle Snow Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleSnow";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
				class Socomd_Fatigues
				{
					displayName = "Fatigues";
					selection = "";
					distance = 5;
					condition = 1;
					class SOCOMD_Uniforms_ToggleDPDU
					{
						displayName = "DPDU TAN";
						condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
						statement = "[_player, 'SOCOMD_Commando_DPDU_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Uniforms_ToggleDCDU
					{
						displayName = "DPCU TAN";
						condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
						statement = "[_player, 'SOCOMD_Commando_DPCU_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Uniforms_ToggleDPDU_OD
					{
						displayName = "DPDU OD";
						condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
						statement = "[_player, 'SOCOMD_Commando_DPDU_OD_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Uniforms_ToggleDPCU_OD
					{
						displayName = "DPCU OD";
						condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
						statement = "[_player, 'SOCOMD_Commando_DPCU_OD_SleevesUp'] call SOCOMD_fnc_Action_ReplaceUniform";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

				};
			};

			class SOCOMD_Backpack
			{
				displayName = "Backpacks";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Backpack_Tan
				{
					displayName = "Tan";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Backpack_Tan_SOG_BAG_recon_Tan
					{
					displayName = "SOG Recon Tan";
					condition = "[_player, 'SOG_BAG_recon_tan'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_recon_tan'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_Tan_Kit_Bag_R_Tan
					{
					displayName = "Kit Bag Recon Tan";
					condition = "[_player, 'Kit_Bag_R_Tan'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'Kit_Bag_R_Tan'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_Tan_SOG_BAG_Tan
					{
					displayName = "SOG Bag Tan";
					condition = "[_player, 'SOG_BAG_Tan'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_Tan'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_Tan_Kit_Bag_Tan
					{
					displayName = "Kit Bag Tan";
					condition = "[_player, 'Kit_Bag_Tan'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'Kit_Bag_Tan'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_Tan_Kit_Bag_pince_TAN
					{
					displayName = "Kit Bag Breacher Tan";
					condition = "[_player, 'Kit_Bag_pince_TAN'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'Kit_Bag_pince_TAN'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_Tan_SOG_BAG_BREACHER_tan
					{
					displayName = "SOG Breacher Tan";
					condition = "[_player, 'SOG_BAG_BREACHER_tan'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_BREACHER_tan'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_Tan_SOG_BAG_MED_tan
					{
					displayName = "SOG Medic Tan";
					condition = "[_player, 'SOG_BAG_med_tan'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_med_tan'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
				class SOCOMD_Backpack_OD
				{
					displayName = "Olive";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Backpack_MC_SOG_BAG_recon_od
					{
					displayName = "SOG Recon OD";
					condition = "[_player, 'SOG_BAG_recon_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_recon_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_MC_Kit_Bag_R_od
					{
					displayName = "Kit Bag Recon OD";
					condition = "[_player, 'Kit_Bag_R_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'Kit_Bag_R_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_MC_SOG_BAG_od
					{
					displayName = "SOG Bag OD";
					condition = "[_player, 'SOG_BAG_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_MC_Kit_Bag_od
					{
					displayName = "Kit Bag OD";
					condition = "[_player, 'Kit_Bag_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'Kit_Bag_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_MC_Kit_Bag_pince_od
					{
					displayName = "Kit Bag Breacher OD";
					condition = "[_player, 'Kit_Bag_pince_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'Kit_Bag_pince_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Backpack_MC_SOG_BAG_BREACHER_od
					{
					displayName = "SOG Breacher OD";
					condition = "[_player, 'SOG_BAG_BREACHER_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_BREACHER_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Backpack_MC_SOG_BAG_MED_od
					{
					displayName = "SOG MEDIC OD";
					condition = "[_player, 'SOG_BAG_med_od'] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks";
					statement = "[_player , 'SOG_BAG_med_od'] call SOCOMD_fnc_Action_ReplaceBackpack";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};


			};
			class SOCOMD_HeadgearActions
				{
					displayName = "Headgear";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Headgear_TakeCapTAN
					{
						displayName = "Cap (Tan)";
						condition = 1;
						statement = "[_player , 'CUP_H_PMC_Cap_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBoonie
					{
						displayName = "Boonie";
						condition = 1;
						statement = "[_player , 'H_Booniehat_khk'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

				//	class SOCOMD_Headgear_TakeBandanna
				//	{
				//		displayName = "Switch to a Bandanna";
				//		condition = 1;
				//		statement = "[_player , 'SOCOMD_Bandanna'] call SOCOMD_fnc_Action_ReplaceHeadgear";
				//		showDisabled = 0;
				//		exceptions[] = {"isNotInside", "isNotSitting"};
				//	};

				//	class SOCOMD_Headgear_TakeBowman
				//	{
				//		displayName = "Switch to a Bowman";
				//		condition = 1;
				//		statement = "[_player , 'VSM_Bowman'] call SOCOMD_fnc_Action_ReplaceHeadgear";
				//		showDisabled = 0;
				//		exceptions[] = {"isNotInside", "isNotSitting"};
				//	};

					class SOCOMD_Headgear_Beanie
					{
						displayName = "Beanie";
						condition = 1;
						statement = "[_player , 'VSM_Beanie_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_Opscore
					{
						displayName = "Opscore (Tan)";
						condition = 1;
						statement = "[_player , 'ADFU_H_OpsCore_08_TAN'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};



				/*	class SOCOMD_Headgear_ReplaceHelmet_FASTMulticam
					{
						displayName = "Switch to a FAST Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Multi') OR ((headgear _player) == 'SOCOMD_FAST_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTTan
					{
						displayName = "Switch to a FAST Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Tan') OR ((headgear _player) == 'SOCOMD_FAST_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};


					class SOCOMD_Headgear_ReplaceHelmet_MICHMulticam
					{
						displayName = "MICH Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Multi') OR ((headgear _player) == 'SOCOMD_MICH_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHTan
					{
						displayName = "Switch to a MICH Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Tan') OR ((headgear _player) == 'SOCOMD_MICH_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				*/
					class SOCOMD_Headgear_TakeAirframeTan
					{
						displayName = "Airframe Tan";
						condition = 1;
						statement = "[_player , 'ADFU_H_Airframe_03_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Headgear_TakeShemagh
					{
						displayName = "Shemag";
						condition = 1;
						statement = "[_player , 'H_ShemagOpen_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};

		};
	};
};

class SOCOMD_TAGE_Interactive_QStore : Land_PaperBox_closed_F
{
	displayName = "SOCOMD QStore TAG-EAST";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Q-Store TAG-EAST";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class ACE_SwitchRoleActionsSASR
				{
					displayName = "Change Role (TAG-EAST)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_TAGE_Loadout_Leader
					{
						displayName = "Leader";
						condition = 1;
						statement = "[_player, 'TAGE_TroopLeader'] call SOCOMD_fnc_SwitchUnitLoadout, player addGoggles 'Mask_M40'";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_TAGE_Loadout_Breacher
					{
						displayName = "Breacher";
						condition = 1;
						statement = "[_player, 'TAGE_Sapper'] call SOCOMD_fnc_SwitchUnitLoadout, player addGoggles 'Mask_M40'";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_TAGE_Loadout_Medic
					{
						displayName = "Medic";
						condition = 1;
						statement = "[_player, 'TAGE_Medic'] call SOCOMD_fnc_SwitchUnitLoadout, player addGoggles 'Mask_M40'";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_TAGE_Loadout_Sniper
					{
						displayName = "Sniper";
						condition = 1;
						statement = "[_player, 'TAGE_Sniper'] call SOCOMD_fnc_SwitchUnitLoadout, player addGoggles 'milgp_f_face_shield_tactical_BLK'";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};

				class ACE_SwitchRoleActions171AVN
				{
					displayName = "Change Role (SUPPORT)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_Pilot
					{
						displayName = "Pilot";
						condition = 1;
						statement = "[_player, '171AVN_Pilot'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Crewman
					{
						displayName = "Crewman";
						condition = 1;
						statement = "[_player, 'SUPPORT_Crewman'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PJ
					{
						displayName = "PJ";
						condition = 1;
						statement = "[_player, '171AVN_PJ'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
			};

			class SOCOMD_Weapons
			{
				displayName = "Weapons";
				selection = "";
				distance = 5;
				condition = 1;


				class SOCOMD_LoadoutWeapon_SMG_05_F
				{
					displayName = "SMG";
					condition = "[_player, 'SMG_05_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMG_05_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};


				class SOCOMD_LoadoutWeapon_SMA_MK18MOEBLK
				{
					displayName = "MK18";
					condition = "[_player, 'SMA_MK18MOEBLK'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18MOEBLK'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};


				class SOCOMD_LoadoutWeapon_SPARTAN_EBR_black_F
				{
					displayName = "Mk14 EBR";
					condition = "[_player, 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SMA_HK417_16in
				{
					displayName = "HK 417";
					condition = "[_player, 'SMA_HK417_16in'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK417_16in'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_hlc_rifle_awcovert
				{
					displayName = "SR98 .300 Suppressed";
					condition = "[_player, 'hlc_rifle_awcovert_BL'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awcovert_BL'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

			};

			class SOCOMD_Uniforms
			{
				displayName = "Uniforms";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Uniforms_ToggleDiving
                {
                    displayName = "Toggle Diving Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
				class SOCOMD_Uniforms_ToggleSnow
                {
                    displayName = "Toggle Snow Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleSnow";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
			};

		};
	};
};

class SOCOMD_Interactive_QStore_Green : Land_PaperBox_closed_F
{
	displayName = "SOCOMD QStore (Green Auscam)";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Q-Store (Jungle/Woodland Theme)";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class ACE_SwitchRoleActionsSASR
				{
					displayName = "Change Role (2CDO)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_TroopLeader
					{
						displayName = "Platoon Leader";
						condition = 1;
						statement = "[_player, 'SASR_TroopLeader_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PatrolLeader
					{
						displayName = "Section Leader";
						condition = 1;
						statement = "[_player, 'SASR_PatrolLeader_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Grenadier
					{
						displayName = "2IC";
						condition = 1;
						statement = "[_player, 'SASR_Grenadier_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Rifleman
					{
						displayName = "Rifleman";
						condition = 1;
						statement = "[_player, 'SASR_Rifleman_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Sapper
					{
						displayName = "Sapper";
						condition = 1;
						statement = "[_player, 'SASR_Sapper_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_MachineGunner
					{
						displayName = "Machine Gunner";
						condition = 1;
						statement = "[_player, 'SASR_MachineGunner_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Medic
					{
						displayName = "Medic";
						condition = 1;
						statement = "[_player, 'SASR_Medic_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Marksman
					{
						displayName = "Marksman";
						condition = 1;
						statement = "[_player, 'SASR_Marksman_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Sniper
					{
						displayName = "Sniper";
						condition = 1;
						statement = "[_player, 'SASR_Sniper_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_LAT
					{
						displayName = "Light Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_LAT_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_MAT
					{
						displayName = "Medium Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_MAT_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_HAT
					{
						displayName = "Heavy Anti-tank";
						condition = 1;
						statement = "[_player, 'SASR_HAT_Jngl'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};

				class ACE_SwitchRoleActions171AVN
				{
					displayName = "Change Role (SUPPORT)";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Loadout_Pilot
					{
						displayName = "Pilot";
						condition = 1;
						statement = "[_player, '171AVN_Pilot'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_Crewman
					{
						displayName = "Crewman";
						condition = 1;
						statement = "[_player, 'SUPPORT_Crewman'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Loadout_PJ
					{
						displayName = "PJ";
						condition = 1;
						statement = "[_player, '171AVN_PJ'] call SOCOMD_fnc_SwitchUnitLoadout";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
			};

			class SOCOMD_Weapons
			{
				displayName = "Weapons";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_LoadoutWeapon_SMA_M4afgSTOCK
                {
                    displayName = "M4A5";
                    condition = "[_player, 'SMA_M4afgSTOCK'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
                    statement = "[_player , 'SMA_M4afgSTOCK'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };


				class SOCOMD_LoadoutWeapon_SMA_M4_GL_SM
				{
					displayName = "M4A5 UGL";
					condition = "[_player, 'SMA_M4_GL_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_M4_GL_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_HK416CUSTOMCQBvfgB
				{
					displayName = "HK416";
					condition = "[_player, 'SMA_HK416CUSTOMCQBvfgB'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK416CUSTOMCQBvfgB'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_KH416GLCQB_B
				{
					displayName = "HK416 UGL";
					condition = "[_player, 'SMA_HK416GLCQB_B'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK416GLCQB_B'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_MK18MOEBLK_SM
				{
					displayName = "MK18 MOE";
					condition = "[_player, 'SMA_MK18MOEBLK_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18MOEBLK_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_MK18BLK_GL_SM
				{
					displayName = "MK18 MOE UGL";
					condition = "[_player, 'SMA_MK18BLK_GL_SM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_MK18BLK_GL_SM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_AUG_A3_F
				{
					displayName = "AUG A3";
					condition = "[_player, 'SMA_AUG_A3_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_AUG_A3_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_SMA_AUG_EGLM
				{
					displayName = "AUG A3 UGL";
					condition = "[_player, 'SMA_AUG_EGLM'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_AUG_EGLM'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_CUP_lmg_m249_pip2
				{
					displayName = "Minimi";
					condition = "[_player, 'CUP_lmg_m249_pip2'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'CUP_lmg_m249_pip2'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadoutWeapon_sma_minimi_mk3_762tsb
				{
					displayName = "Maximi";
					condition = "[_player, 'sma_minimi_mk3_762tsb'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'sma_minimi_mk3_762tsb'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SPARTAN_EBR_black_F
				{
					displayName = "Mk14 EBR";
					condition = "[_player, 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SPARTAN_EBR_black_F'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SMA_HK417_16in
				{
					displayName = "HK 417";
					condition = "[_player, 'SMA_HK417_16in'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK417_16in'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_SMA_HK417vfg
				{
					displayName = "HK 417 (Assaulter)";
					condition = "[_player, 'SMA_HK417vfg'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'SMA_HK417vfg'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awmagnum
				{
					displayName = "SR98 .300";
					condition = "[_player, 'hlc_rifle_awmagnum'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awmagnum'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awMagnum_OD_ghillie
				{
					displayName = "SR98 .300 Camo";
					condition = "[_player, 'hlc_rifle_awMagnum_OD_ghillie'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awMagnum_OD_ghillie'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_hlc_rifle_awcovert
				{
					displayName = "SR98 .300 Suppressed";
					condition = "[_player, 'hlc_rifle_awcovert'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'hlc_rifle_awcovert'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
				class SOCOMD_LoadoutWeapon_ej_m107
				{
					displayName = "Barrett";
					condition = "[_player, 'ej_m107'] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon";
					statement = "[_player , 'ej_m107'] call SOCOMD_fnc_SwitchUnitLoadoutWeapon";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};

			class SOCOMD_Uniforms
			{
				displayName = "Uniforms";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Uniforms_ToggleDiving
                {
                    displayName = "Toggle Diving Uniform";
                    condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
                    statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                };
			};

			class SOCOMD_HeadgearActions
				{
					displayName = "Headgear";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Headgear_TakeCapTAN
					{
						displayName = "Cap (Tan)";
						condition = 1;
						statement = "[_player , 'CUP_H_PMC_Cap_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeCapOli
					{
						displayName = "Cap (Olive)";
						condition = 1;
						statement = "[_player , 'H_Cap_oli'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBoonie
					{
						displayName = "Boonie";
						condition = 1;
						statement = "[_player , 'H_Booniehat_khk'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Headgear_TakeBoonieDPCU
					{
						displayName = "Boonie Camo";
						condition = 1;
						statement = "[_player , 'SOCOMD_Aus_Boonie'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_Beanie
					{
						displayName = "Beanie";
						condition = 1;
						statement = "[_player , 'VSM_Beanie_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeAirframeOD
					{
						displayName = "Airframe Olive";
						condition = 1;
						statement = "[_player , 'ADFU_H_Airframe_11_OD'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
		};
	};
};

class SOCOMD_Personal_box : Land_PaperBox_closed_F
{
	displayName = "SOCOMD Personal Box";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_HeadgearActions
				{
					displayName = "Headgear";
					selection = "";
					distance = 5;
					condition = 1;

					class SOCOMD_Headgear_TakeCap
					{
						displayName = "Switch to a Cap";
						condition = 1;
						statement = "[_player , 'SOCOMD_Cap_HS'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBoonie
					{
						displayName = "Switch to a Boonie";
						condition = 1;
						statement = "[_player , 'SOCOMD_Boonie'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBandanna
					{
						displayName = "Switch to a Bandanna";
						condition = 1;
						statement = "[_player , 'SOCOMD_Bandanna'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_TakeBowman
					{
						displayName = "Switch to a Bowman";
						condition = 1;
						statement = "[_player , 'VSM_Bowman'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_Beanie
					{
						displayName = "Switch to a Beanie";
						condition = 1;
						statement = "[_player , 'VSM_Beanie_tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTMulticam
					{
						displayName = "Switch to a FAST Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Multi') OR ((headgear _player) == 'SOCOMD_FAST_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_FASTTan
					{
						displayName = "Switch to a FAST Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_FAST_Tan') OR ((headgear _player) == 'SOCOMD_FAST_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_FAST_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHMulticam
					{
						displayName = "Switch to a MICH Multicam Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Multi') OR ((headgear _player) == 'SOCOMD_MICH_Multi_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Multi'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};

					class SOCOMD_Headgear_ReplaceHelmet_MICHTan
					{
						displayName = "Switch to a MICH Tan Helmet";
						condition = "!(((headgear _player) == 'SOCOMD_MICH_Tan') OR ((headgear _player) == 'SOCOMD_MICH_Tan_Gog'))";
						statement = "[_player , 'SOCOMD_MICH_Tan'] call SOCOMD_fnc_Action_ReplaceHeadgear";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				};
			};
		};
	};
};

class SOCOMD_Training_box : SOCOMD_Personal_box {

	displayName = "SOCOMD Training Box";
	author = AUTHOR_STR;

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};

	class ACE_Actions
	{
		class ACE_MainActions
		{
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_OpenGearSelector
			{
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			class SOCOMD_Loadouts
			{
				displayName = "Loadouts";
				selection = "";
				distance = 5;
				condition = 1;

				class SOCOMD_Loadout_2CDOLeader
				{
					displayName = "Section Leader";
					condition = 1;
					statement = "[_player, 'CDO_Leader'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDO2IC
				{
					displayName = "Section 2IC";
					condition = 1;
					statement = "[_player, 'CDO_2IC'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOSapper
				{
					displayName = "Section Sapper";
					condition = 1;
					statement = "[_player, 'CDO_Sapper'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOGunner
				{
					displayName = "Section Gunner";
					condition = 1;
					statement = "[_player, 'CDO_Gunner'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDORifleman
				{
					displayName = "Section Rifleman";
					condition = 1;
					statement = "[_player, 'CDO_Rifleman'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOMarksman
				{
					displayName = "Section Marksman";
					condition = 1;
					statement = "[_player, 'CDO_Marksman'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOAT
				{
					displayName = "Section AT";
					condition = 1;
					statement = "[_player, 'CDO_AT'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_Loadout_2CDOMedic
				{
					displayName = "Section Medic";
					condition = 1;
					statement = "[_player, 'CDO_Medic'] call SOCOMD_fnc_SwitchUnitLoadout";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			};
		};
	};
};