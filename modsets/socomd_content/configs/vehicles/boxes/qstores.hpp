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
			//Select Weapons
			QSTORE_ACTION_GRP_BEGIN(SELECT_WEAPON,"Weapons")
				QSTORE_ACTION_WEAPON_PRIMARY("M4",SMA_M4afgSTOCK)
				QSTORE_ACTION_WEAPON_PRIMARY("MK18",SMA_MK18MOEBLK_SM)
				QSTORE_ACTION_WEAPON_PRIMARY("AUG A3",SMA_AUG_A3_F)
				QSTORE_ACTION_WEAPON_PRIMARY("HK416",SMA_HK416CUSTOMCQBvfgB)

				QSTORE_ACTION_WEAPON_PRIMARY("M4 (GL)",SMA_M4_GL_SM)
				QSTORE_ACTION_WEAPON_PRIMARY("MK18 (GL)",SMA_MK18BLK_GL_SM)
				QSTORE_ACTION_WEAPON_PRIMARY("AUG A3 (GL)",SMA_AUG_EGLM)
				QSTORE_ACTION_WEAPON_PRIMARY("HK416 (GL)",SMA_HK416GLCQB_B)

				QSTORE_ACTION_WEAPON_PRIMARY("HK417",SMA_HK417_16in)
				QSTORE_ACTION_WEAPON_PRIMARY("HK417 (VFG)",SMA_HK417vfg)

				QSTORE_ACTION_WEAPON_PRIMARY("EBR",SPARTAN_EBR_black_F)

				QSTORE_ACTION_WEAPON_PRIMARY("M107",Recon_Barret)
				QSTORE_ACTION_WEAPON_PRIMARY("TRG",Recon_338)
				QSTORE_ACTION_WEAPON_PRIMARY("Falkor",Recon_300WM)


				QSTORE_ACTION_WEAPON_PRIMARY("Minimi",CUP_lmg_m249_pip2)
				QSTORE_ACTION_WEAPON_PRIMARY("Maximi",sma_minimi_mk3_762tsb)
			QSTORE_ACTION_GRP_END

			QSTORE_ACTION_GRP_BEGIN(SELECT_LAUNCHER,"Launcher")
				QSTORE_ACTION_WEAPON_SECONDARY("LAW",HAFM_LAW)
				QSTORE_ACTION_WEAPON_SECONDARY("Carl Gustav",SOCOMD_Carl_Gustav)
			QSTORE_ACTION_GRP_END


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
					//QSTORE_ACTION_LOADOUT("Sniper",SOCOMD_Sniper)
					QSTORE_ACTION_LOADOUT("Anti-tank",SOCOMD_AT)
				QSTORE_ACTION_GRP_END
				
				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SUPPORT)")
					QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB1,"Logistics")
						QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
						QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
						QSTORE_ACTION_LOADOUT("PJ",SOCOMD_PJ)
					QSTORE_ACTION_GRP_END

					QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB2,"Weapons")
						QSTORE_ACTION_LOADOUT("82mm Mortarman",SOCOMD_Mortar)
						QSTORE_ACTION_LOADOUT("60mm Mortarman",SOCOMD_MortarMini)
						QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_MMG)
						QSTORE_ACTION_LOADOUT("Gunner Ammo",SOCOMD_MMGAmmo)
						QSTORE_ACTION_LOADOUT("Recon",SOCOMD_Recon)
					QSTORE_ACTION_GRP_END
				QSTORE_ACTION_GRP_END
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