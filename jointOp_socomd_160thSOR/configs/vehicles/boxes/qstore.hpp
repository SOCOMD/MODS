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

				QSTORE_ACTION_WEAPON_PRIMARY("Maximi",sma_minimi_mk3_762tsb)
			QSTORE_ACTION_GRP_END
		};
	};
};