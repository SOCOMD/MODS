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
class SOCOMD_ACTION_BACKPACK_##BACKPACK { \
	displayName = DISPLAY_STR; \
	condition = "[_player,"#BACKPACK"] call SOCOMD_fnc_ActionCondition_CanSwapBackpacks"; \
	statement = "[_player ,"#BACKPACK"] call SOCOMD_fnc_Action_ReplaceBackpack"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_HEADGEAR(DISPLAY_STR, HEADGEAR) \
class SOCOMD_ACTION_HEADGEAR_##HEADGEAR { \
	displayName = DISPLAY_STR; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	statement = "[_player ,"#HEADGEAR"] call SOCOMD_fnc_Action_ReplaceHeadgear"; \
	condition = 1; \
	showDisabled = 0; \
};

#define QSTORE_ACTION_NVG(DISPLAY_STR, NVG) \
class SOCOMD_ACTION_NVG_##NVG { \
	displayName = DISPLAY_STR; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	condition = "[_player, "#NVG"] call SOCOMD_fnc_ActionCondition_CanSwapNVG"; \
	statement = "[_player ,"#NVG"] call SOCOMD_fnc_Action_ReplaceNvg"; \
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

			//Select Weapons
			QSTORE_ACTION_GRP_BEGIN(SELECT_WEAPON,"Weapons")
				QSTORE_ACTION_GRP_BEGIN(SELECT_M4,"M4")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",S_145_KAG_MAG)
					QSTORE_ACTION_WEAPON_PRIMARY("Camo",S_145_MOD_MAG_Camo)
					QSTORE_ACTION_WEAPON_PRIMARY("AWM",S_145_MOD_MAG_AWM)
					QSTORE_ACTION_WEAPON_PRIMARY("Donaldson",S_145_MOD_MAG_Donaldson)
					QSTORE_ACTION_WEAPON_PRIMARY("Leaf",S_145_MOD_MAG_leafbrown)
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

				QSTORE_ACTION_GRP_BEGIN(SELECT_M16GL,"M16 UGL")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",CUP_arifle_M16A4_GL)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_417,"HK417")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417_16in)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_M417_VFG,"HK417 (VFG)")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SMA_HK417vfg)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_EBR,"EBR")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",SPARTAN_EBR_black_F)	//Black
					QSTORE_ACTION_WEAPON_PRIMARY("Camo",SPARTAN_EBR_snake_F)	//Camo
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_M110,"M110")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",CUP_srifle_m110_kac_black)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",CUP_srifle_m110_kac)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",CUP_srifle_m110_kac_woodland)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_WEAPON_PRIMARY("M107",Recon_Barret)
				QSTORE_ACTION_WEAPON_PRIMARY("TRG",Recon_338)
				QSTORE_ACTION_WEAPON_PRIMARY("Falkor",Recon_300WM)


				QSTORE_ACTION_GRP_BEGIN(SELECT_minimi,"Minimi")
					QSTORE_ACTION_WEAPON_PRIMARY("PARA",CUP_lmg_L110A1_railed)
					QSTORE_ACTION_WEAPON_PRIMARY("Long",CUP_lmg_minimi_railed)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_maximi,"Maximi")
					QSTORE_ACTION_WEAPON_PRIMARY("Black",CUP_lmg_Mk48_nohg)
					QSTORE_ACTION_WEAPON_PRIMARY("Desert",CUP_lmg_Mk48_nohg_des)
					QSTORE_ACTION_WEAPON_PRIMARY("Tan",CUP_lmg_Mk48_nohg_tan)
					QSTORE_ACTION_WEAPON_PRIMARY("OD",CUP_lmg_Mk48_nohg_wdl)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_WEAPON_PRIMARY("MX",arifle_MX_Black_F)
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
					QSTORE_ACTION_LOADOUT("Logisitican",SOCOMD_Logistician)
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
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
					QSTORE_ACTION_LOADOUT("Commander",SOCOMD_SSO_Commander)
					QSTORE_ACTION_LOADOUT("Leader",SOCOMD_SSO_Leader)
					QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_SSO_Rifleman)
					QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_SSO_Marksman)
					QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_SSO_Sapper)
					QSTORE_ACTION_LOADOUT("Machinegunner",SOCOMD_SSO_Machinegunner)
					QSTORE_ACTION_LOADOUT("Medic",SOCOMD_SSO_Medic)
					QSTORE_ACTION_LOADOUT("AT",SOCOMD_SSO_AT)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB1,"Change Role (SUPPORT)")
					QSTORE_ACTION_LOADOUT("Logisitican",SOCOMD_Logistician)
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
					QSTORE_ACTION_LOADOUT("Recon",SOCOMD_Recon)
					QSTORE_ACTION_LOADOUT("Recon Asst.",SOCOMD_Recon_Assistant)
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