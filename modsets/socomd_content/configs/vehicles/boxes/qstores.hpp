////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class SOCOMD_QStore_Base;

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
	statement = "[_player,"#LOADOUT"]call SOCOMD_fnc_SwitchUnitLoadout"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	condition = 1; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_LOADOUT_TAG(DISPLAY_STR, LOADOUT) \
class SOCOMD_ACTION_LOADOUT_TAG_##LOADOUT { \
	displayName = DISPLAY_STR; \
	statement = "[_player,"#LOADOUT"]call SOCOMD_fnc_SwitchUnitLoadout, player addGoggles 'Mask_M40'"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	condition = 1; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_WEAPON_PRIMARY(DISPLAY_STR, WEAPON) \
class SOCOMD_ACTION_WEAPON_##WEAPON { \
	displayName = DISPLAY_STR; \
	condition = "[_player,"#WEAPON"] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon"; \
	statement = "[_player ,"#WEAPON"] call SOCOMD_fnc_SwitchUnitPrimaryWeapon"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_WEAPON_SECONDARY(DISPLAY_STR, WEAPON) \
class SOCOMD_ACTION_WEAPON_##WEAPON { \
	displayName = DISPLAY_STR; \
	condition = "[_player,"#WEAPON"] call SOCOMD_fnc_ActionCondition_CanUseLoadoutWeapon"; \
	statement = "[_player ,"#WEAPON"] call SOCOMD_fnc_SwitchUnitSecondaryWeapon"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_VEST(DISPLAY_STR, VEST) \
class SOCOMD_ACTION_VEST_##VEST { \
	displayName = DISPLAY_STR; \
	condition = "[_player,"#VEST"] call SOCOMD_fnc_ActionCondition_CanSwapVest"; \
	statement = "[_player ,"#VEST"] call SOCOMD_fnc_Action_ReplaceVest"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_BACKPACK(DISPLAY_STR, BACKPACK) \
class SOCOMD_ACTION_VEST_##BACKPACK { \
	displayName = DISPLAY_STR; \
	condition = "[_player,"#BACKPACK"] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks"; \
	statement = "[_player ,"#BACKPACK"] call SOCOMD_fnc_Action_ReplaceBackpack"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_HEADGEAR(DISPLAY_STR, HEADGEAR) \
class SOCOMD_ACTION_VEST_##HEADGEAR { \
	displayName = DISPLAY_STR; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	statement = "[_player ,"#HEADGEAR"] call SOCOMD_fnc_Action_ReplaceHeadgear"; \
	condition = 1; \
	showDisabled = 0; \
};

class SOCOMD_QStore_A : SOCOMD_QStore_Base {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	displayName = "QStore";

	class ACE_Actions {
		class ACE_MainActions {
			displayName = "QStore";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_Personalise {
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			// Select Loadouts
			QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (2CDO)")
					QSTORE_ACTION_LOADOUT("Commander",SOCOMD_Commander)
					QSTORE_ACTION_LOADOUT("Leader",SOCOMD_Leader)
					QSTORE_ACTION_LOADOUT("2IC",SOCOMD_2IC)
					QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_Rifleman)
					QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_Marksman)
					QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_Sapper)
					QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_MachineGunner)
					QSTORE_ACTION_LOADOUT("Medic",SOCOMD_Medic)
					QSTORE_ACTION_LOADOUT("Anti-tank",SOCOMD_AT)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SOLS)")
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
					QSTORE_ACTION_LOADOUT("PJ",SOCOMD_PJ)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END

			QSTORE_ACTION_GRP_BEGIN(SELECT_Customise,"Customise Gear")
				// Select Vest
				QSTORE_ACTION_GRP_BEGIN(SELECT_VESTS,"Vests")
					QSTORE_ACTION_VEST("Comms Tan",lbt_comms_coy)
					QSTORE_ACTION_VEST("Comms Multicam",lbt_comms_mc)
					QSTORE_ACTION_VEST("Operator Tan",lbt_tl_coy)
					QSTORE_ACTION_VEST("Operator Multicam",lbt_tl_mc)
					QSTORE_ACTION_VEST("Medic Tan",lbt_medical_coy)
					QSTORE_ACTION_VEST("Medic Multicam",lbt_medical_mc)
					QSTORE_ACTION_VEST("Weapons Tan",lbt_weapons_coy)
					QSTORE_ACTION_VEST("Weapons Multicam",lbt_weapons_mc)
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
						QSTORE_ACTION_HEADGEAR("Cap (Tan)",CUP_H_PMC_Cap_Tan)
						QSTORE_ACTION_HEADGEAR("Cap (MC)",ADFU_Cap_MC)
						QSTORE_ACTION_HEADGEAR("Boonie (Tan)",H_Booniehat_tan)
						QSTORE_ACTION_HEADGEAR("Boonie",SOCOMD_Aus_Boonie)
						QSTORE_ACTION_HEADGEAR("Beanie",H_Watchcap_khk)
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
						condition = 1;
						statement = "[_player] call SOCOMD_fnc_Action_ToggleSnow";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				QSTORE_ACTION_GRP_END		
			QSTORE_ACTION_GRP_END

			//Select Weapons
			QSTORE_ACTION_GRP_BEGIN(SELECT_WEAPON,"Weapons")
				QSTORE_ACTION_GRP_BEGIN(SELECT_M4,"M4")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_M4afgSTOCK)
					//QSTORE_ACTION_WEAPON_PRIMARY("Tan",)
					//QSTORE_ACTION_WEAPON_PRIMARY("OD",)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_Mk18,"Mk18")	
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_MK18MOEBLK_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_MK18MOETAN_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_MK18MOEOD_SM)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_AUG,"AUG")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_AUG_A3_F)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_AUG_A3_KRYPT_F)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_AUG_A3_MCAM_F)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_416,"Hk416")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK416CUSTOMCQBvfgB)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_HK416CUSTOMCQBvfg)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_HK416CQB_vfg_ODPAINTED)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_WEAPON_PRIMARY("HK416 (Long)",SMA_HK416CUSTOMvfgB)	

				QSTORE_ACTION_GRP_BEGIN(SELECT_M4GL,"M4 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_M4_GL_SM)
					//QSTORE_ACTION_WEAPON_PRIMARY("Tan")
					//QSTORE_ACTION_WEAPON_PRIMARY("OD")
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_Mk18GL,"Mk18 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_MK18BLK_GL_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_MK18TAN_GL_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_MK18OD_GL_SM)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_AUGGL,"AUG GL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_AUG_EGLM)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_AUG_EGLM_tan)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_AUG_EGLM_Olive)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_416GL,"Hk416 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK416GLCQB_B)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_HK416GLCQB)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_HK416GLCQB_ODP)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_417,"HK417")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_M416GL,"HK417 (VFG)")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_EBR,"EBR")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SPARTAN_EBR_black_F)	//Black
					QSTORE_ACTION_WEAPON_PRIMARY("Camo",SPARTAN_EBR_snake_F)	//Camo
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_WEAPON_PRIMARY("M107",Recon_Barret)
				QSTORE_ACTION_WEAPON_PRIMARY("TRG",Recon_338)
				QSTORE_ACTION_WEAPON_PRIMARY("Falkor",Recon_300WM)


				QSTORE_ACTION_WEAPON_PRIMARY("Minimi",CUP_lmg_minimi_railed)
				QSTORE_ACTION_GRP_BEGIN(SELECT_maximi,"Maximi")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",sma_minimi_mk3_762tsb)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",sma_minimi_mk3_762tsb_des)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",sma_minimi_mk3_762tsb_wdl)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END

			QSTORE_ACTION_GRP_BEGIN(SELECT_LAUNCHER,"Launcher")
				QSTORE_ACTION_WEAPON_SECONDARY("LAW",HAFM_LAW)
				QSTORE_ACTION_WEAPON_SECONDARY("Carl Gustav",SOCOMD_Carl_Gustav)
			QSTORE_ACTION_GRP_END
		};
	};
};

class SOCOMD_QStore_B : SOCOMD_QStore_Base {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	displayName = "QStore Special";

	class ACE_Actions {
		class ACE_MainActions {
			displayName = "QStore Special";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_Personalise {
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
				QSTORE_ACTION_LOADOUT("82mm Mortarman",SOCOMD_Mortar)
				QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_MMG)
				QSTORE_ACTION_LOADOUT("Gunner Ammo",SOCOMD_MMGAmmo)
				QSTORE_ACTION_LOADOUT("Recon",SOCOMD_Recon)
			QSTORE_ACTION_GRP_END

			QSTORE_ACTION_GRP_BEGIN(SELECT_Customise,"Customise Gear")
				// Select Vest
				QSTORE_ACTION_GRP_BEGIN(SELECT_VESTS,"Vests")
					QSTORE_ACTION_VEST("Comms Tan",lbt_comms_coy)
					QSTORE_ACTION_VEST("Comms Multicam",lbt_comms_mc)
					QSTORE_ACTION_VEST("Operator Tan",lbt_tl_coy)
					QSTORE_ACTION_VEST("Operator Multicam",lbt_tl_mc)
					QSTORE_ACTION_VEST("Medic Tan",lbt_medical_coy)
					QSTORE_ACTION_VEST("Medic Multicam",lbt_medical_mc)
					QSTORE_ACTION_VEST("Weapons Tan",lbt_weapons_coy)
					QSTORE_ACTION_VEST("Weapons Multicam",lbt_weapons_mc)
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
						QSTORE_ACTION_HEADGEAR("Cap (Tan)",CUP_H_PMC_Cap_Tan)
						QSTORE_ACTION_HEADGEAR("Cap (MC)",ADFU_Cap_MC)
						QSTORE_ACTION_HEADGEAR("Boonie (Tan)",H_Booniehat_tan)
						QSTORE_ACTION_HEADGEAR("Boonie",SOCOMD_Aus_Boonie)
						QSTORE_ACTION_HEADGEAR("Beanie",H_Watchcap_khk)
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
						condition = 1;
						statement = "[_player] call SOCOMD_fnc_Action_ToggleSnow";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				QSTORE_ACTION_GRP_END			
			QSTORE_ACTION_GRP_END

			//Select Weapons
			QSTORE_ACTION_GRP_BEGIN(SELECT_WEAPON,"Weapons")
				QSTORE_ACTION_GRP_BEGIN(SELECT_M4,"M4")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_M4afgSTOCK)
					//QSTORE_ACTION_WEAPON_PRIMARY("Tan",)
					//QSTORE_ACTION_WEAPON_PRIMARY("OD",)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_Mk18,"Mk18")	
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_MK18MOEBLK_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_MK18MOETAN_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_MK18MOEOD_SM)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_AUG,"AUG")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_AUG_A3_F)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_AUG_A3_KRYPT_F)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_AUG_A3_MCAM_F)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_416,"Hk416")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK416CUSTOMCQBvfgB)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_HK416CUSTOMCQBvfg)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_HK416CQB_vfg_ODPAINTED)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_WEAPON_PRIMARY("HK416 (Long)",SMA_HK416CUSTOMvfgB)	

				QSTORE_ACTION_GRP_BEGIN(SELECT_M4GL,"M4 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_M4_GL_SM)
					//QSTORE_ACTION_WEAPON_PRIMARY("Tan")
					//QSTORE_ACTION_WEAPON_PRIMARY("OD")
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_Mk18GL,"Mk18 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_MK18BLK_GL_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_MK18TAN_GL_SM)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_MK18OD_GL_SM)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_AUGGL,"AUG GL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_AUG_EGLM)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_AUG_EGLM_tan)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_AUG_EGLM_Olive)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_416GL,"Hk416 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK416GLCQB_B)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",SMA_HK416GLCQB)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",SMA_HK416GLCQB_ODP)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_417,"HK417")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
				QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_BEGIN(SELECT_M416GL,"HK417 (VFG)")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
					//QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_EBR,"EBR")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SPARTAN_EBR_black_F)	//Black
					QSTORE_ACTION_WEAPON_PRIMARY("Camo",SPARTAN_EBR_snake_F)	//Camo
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_WEAPON_PRIMARY("M107",Recon_Barret)
				QSTORE_ACTION_WEAPON_PRIMARY("TRG",Recon_338)
				QSTORE_ACTION_WEAPON_PRIMARY("Falkor",Recon_300WM)


				QSTORE_ACTION_WEAPON_PRIMARY("Minimi",CUP_lmg_minimi_railed)
				QSTORE_ACTION_GRP_BEGIN(SELECT_maximi,"Maximi")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",sma_minimi_mk3_762tsb)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",sma_minimi_mk3_762tsb_des)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",sma_minimi_mk3_762tsb_wdl)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END

			QSTORE_ACTION_GRP_BEGIN(SELECT_LAUNCHER,"Launcher")
				QSTORE_ACTION_WEAPON_SECONDARY("LAW",HAFM_LAW)
				QSTORE_ACTION_WEAPON_SECONDARY("Carl Gustav",SOCOMD_Carl_Gustav)
			QSTORE_ACTION_GRP_END
		};
	};
};

class SOCOMD_QStore_TAG : SOCOMD_QStore_Base {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	displayName = "QStore TAG";

	class ACE_Actions {
		class ACE_MainActions {
			displayName = "TAG - East";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_Personalise {
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			// Select Loadouts
			QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (TAG - East)")
					QSTORE_ACTION_LOADOUT_TAG("Leader",TAGE_TroopLeader)
					QSTORE_ACTION_LOADOUT_TAG("Medic",TAGE_Medic)
					QSTORE_ACTION_LOADOUT_TAG("Breacher",TAGE_Sapper)
					QSTORE_ACTION_LOADOUT_TAG("Sniper",TAGE_Sniper)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB1,"Change Role (SUPPORT)")
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
					QSTORE_ACTION_LOADOUT("PJ",SOCOMD_PJ)
				QSTORE_ACTION_GRP_END
			QSTORE_ACTION_GRP_END
		};
	};
};

class SOCOMD_QStore_RUS : SOCOMD_QStore_Base {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	displayName = "QStore RUS";

	class ACE_Actions {
		class ACE_MainActions {
			displayName = "TAG - East";
			selection = "";
			distance = 5;
			condition = 1;

			class SOCOMD_Personalise {
				displayName = "Personalise";
				condition = 1;
				statement = "call ASORGS_fnc_Open";
				showDisabled = 0;
				exceptions[] = {"isNotInside", "isNotSitting"};
			};

			// Select Loadouts
			QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (Russian SSO)")
					QSTORE_ACTION_LOADOUT("Commander",SOCOMD_RUS_Commander)
					QSTORE_ACTION_LOADOUT("Leader",SOCOMD_RUS_Leader)
					QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_RUS_Rifleman)
					QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_RUS_Marksman)
					QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_RUS_Sapper)
					QSTORE_ACTION_LOADOUT("Machinegunner",SOCOMD_RUS_Machinegunner)
					QSTORE_ACTION_LOADOUT("Medic",SOCOMD_RUS_Medic)
					QSTORE_ACTION_LOADOUT("AT",SOCOMD_RUS_AT)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB1,"Change Role (SUPPORT)")
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
					QSTORE_ACTION_LOADOUT("PJ",SOCOMD_PJ)
					QSTORE_ACTION_LOADOUT("Recon",SOCOMD_Recon)
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
			QSTORE_ACTION_GRP_END
		};
	};
};