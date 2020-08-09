
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
////////////////////////////////////////////////////////////////////////////////
// INTERACTIVE BOX

class Land_PaperBox_closed_F;
class SOCOMD_QStore_Base : Land_PaperBox_closed_F {
	scope = protected;
	scopeCurator = private;
	editorCategory = EdCat_Supplies;
	editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
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


class SOCOMD_QStore_A : SOCOMD_QStore_Base {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	displayName = "QStore";

	class ACE_Actions {
		class ACE_MainActions {
			displayName = "Q-Store";
			selection = "";
			distance = 5;
			condition = 1;
			class SOCOMD_arsenal {
                displayName = "Personalise";
                condition = 1;
                statement = "[player, player, false] call ace_arsenal_fnc_openBox";
                showDisabled = 0;
                exceptions[] = {"isNotInside", "isNotSitting"};                
            };
			// class SOCOMD_Personalise {
			// 	displayName = "Personalise";
			// 	condition = 1;
			// 	statement = "call ASORGS_fnc_Open";
			// 	showDisabled = 0;
			// 	exceptions[] = {"isNotInside", "isNotSitting"};
			// };

			// Select Loadouts
			QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS,"Loadouts")
				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUB0,"Change Role (2CDO)")
					QSTORE_ACTION_LOADOUT("Commander",SOCOMD_Commander)
					QSTORE_ACTION_LOADOUT("Leader",SOCOMD_Leader)
					QSTORE_ACTION_LOADOUT("2IC",SOCOMD_2IC)
					QSTORE_ACTION_LOADOUT("Rifleman",SOCOMD_Rifleman)
					QSTORE_ACTION_LOADOUT("Marksman",SOCOMD_Marksman)
					QSTORE_ACTION_LOADOUT("Sapper",SOCOMD_Sapper)
					QSTORE_ACTION_LOADOUT("Breacher",SOCOMD_Breacher)
					QSTORE_ACTION_LOADOUT("Gunner",SOCOMD_MachineGunner)
					QSTORE_ACTION_LOADOUT("Medic",SOCOMD_Medic)
					QSTORE_ACTION_LOADOUT("Anti-tank",SOCOMD_AT)
					QSTORE_ACTION_LOADOUT("Anti-tank Asst.",SOCOMD_AT_Assistant)
				QSTORE_ACTION_GRP_END

				QSTORE_ACTION_GRP_BEGIN(SELECT_LOADOUTS_SUPPORT,"Change Role (SUPPORT)")
					QSTORE_ACTION_LOADOUT("Logisitican",SOCOMD_Logistician)
					QSTORE_ACTION_LOADOUT("Pilot",SOCOMD_Pilot)
					QSTORE_ACTION_LOADOUT("Crewman",SOCOMD_Crewman)
					QSTORE_ACTION_LOADOUT("Recon",SOCOMD_Recon)
					QSTORE_ACTION_LOADOUT("Recon Asst.",SOCOMD_Recon_Assistant)
				QSTORE_ACTION_GRP_END

				class SOCOMD_SavePrefs {
					displayName = "Save";
					condition = "[_player] call SOCOMD_fnc_ActionCondition_HasLoadout";
					statement = "[_player] spawn SOCOMD_fnc_SaveLoadoutPrefs";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};

				class SOCOMD_LoadPrefs {
					displayName = "Load";
					condition = "[_player] call SOCOMD_fnc_ActionCondition_HasLoadout";
					statement = "[_player] spawn SOCOMD_fnc_LoadLoadoutPrefs";
					showDisabled = 0;
					exceptions[] = {"isNotInside", "isNotSitting"};
				};
			QSTORE_ACTION_GRP_END

			QSTORE_ACTION_GRP_BEGIN(SELECT_Customise,"Specialty Gear")
				// Select Vest
				// QSTORE_ACTION_GRP_BEGIN(SELECT_VESTS,"Vests")
				// 	QSTORE_ACTION_VEST("Comms Tan",lbt_comms_coy)
				// 	QSTORE_ACTION_VEST("Comms Multicam",lbt_comms_mc)
				// 	QSTORE_ACTION_VEST("Comms AMCU",lbt_comms_amcu)
				// 	QSTORE_ACTION_VEST("Operator Tan",lbt_tl_coy)
				// 	QSTORE_ACTION_VEST("Operator Multicam",lbt_tl_mc)
				// 	QSTORE_ACTION_VEST("Operator AMCU",lbt_tl_amcu)
				// 	QSTORE_ACTION_VEST("Medic Tan",lbt_medical_coy)
				// 	QSTORE_ACTION_VEST("Medic Multicam",lbt_medical_mc)
				// 	QSTORE_ACTION_VEST("Medic AMCU",lbt_medical_amcu)
				// 	QSTORE_ACTION_VEST("Weapons Tan",lbt_weapons_coy)
				// 	QSTORE_ACTION_VEST("Weapons Multicam",lbt_weapons_mc)
				// 	QSTORE_ACTION_VEST("Weapons AMCU",lbt_weapons_amcu)
				// QSTORE_ACTION_GRP_END

				// //Select Backpack
				// QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS,"Backpacks")
				// 	QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS_SUB0,"Tan")
				// 		QSTORE_ACTION_BACKPACK("SOG Recon Tan",SOG_BAG_recon_tan)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Recon Tan",Kit_Bag_R_Tan)
				// 		QSTORE_ACTION_BACKPACK("SOG Bag Tan",SOG_BAG_Tan)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Tan",Kit_Bag_Tan)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Breacher Tan",Kit_Bag_pince_TAN)
				// 		QSTORE_ACTION_BACKPACK("SOG Breacher Tan",SOG_BAG_BREACHER_tan)
				// 		QSTORE_ACTION_BACKPACK("SOG Medic Tan",SOG_BAG_med_tan)
				// 	QSTORE_ACTION_GRP_END

				// 	QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS_SUB1,"OD")
				// 		QSTORE_ACTION_BACKPACK("SOG Recon OD",SOG_BAG_recon_od)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Recon OD",Kit_Bag_R_od)
				// 		QSTORE_ACTION_BACKPACK("SOG Bag OD",SOG_BAG_od)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag OD",Kit_Bag_od)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Breacher OD",Kit_Bag_pince_od)
				// 		QSTORE_ACTION_BACKPACK("SOG Breacher OD",SOG_BAG_BREACHER_od)
				// 		QSTORE_ACTION_BACKPACK("SOG Medic OD",SOG_BAG_med_od)
				// 	QSTORE_ACTION_GRP_END

				// 	QSTORE_ACTION_GRP_BEGIN(SELECT_BACKPACKS_SUB2,"Multicam")
				// 		QSTORE_ACTION_BACKPACK("SOG Recon MC",SOG_BAG_recon_MC)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Recon MC",Kit_Bag_R_MC)
				// 		QSTORE_ACTION_BACKPACK("SOG Bag MC",SOG_BAG_MC)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag MC",Kit_Bag_MC)
				// 		QSTORE_ACTION_BACKPACK("Kit Bag Breacher MC",Kit_Bag_pince_MC)
				// 		QSTORE_ACTION_BACKPACK("SOG Breacher MC",SOG_BAG_BREACHER_MC)
				// 		QSTORE_ACTION_BACKPACK("SOG MEDIC MC",SOG_BAG_med_MC)
				// 	QSTORE_ACTION_GRP_END
				// QSTORE_ACTION_GRP_END

				// Swap NVG Type
				QSTORE_ACTION_GRP_BEGIN(SELECT_NVG,"NVG")
					QSTORE_ACTION_NVG("PVS-31 White Phosphor Tube",SOCOMD_NVG)
					QSTORE_ACTION_NVG("PVS-31 Green Tube",SOCOMD_NVG_GR)
					QSTORE_ACTION_NVG("GPNVG White Phosphor Tube",SOCOMD_NVG_GPNVG_WP_black)
					QSTORE_ACTION_NVG("GPNVG Green Tube",SOCOMD_NVG_GPNVG_GR_black)
				QSTORE_ACTION_GRP_END
				
				//Select Headgear
				// QSTORE_ACTION_GRP_BEGIN(SELECT_HEADGEAR,"Headgear")
				// 	QSTORE_ACTION_GRP_BEGIN(SELECT_HEADGEAR_SUB0,"Hard Cover")
				// 		QSTORE_ACTION_HEADGEAR("Opscore (Tan)",ADFU_H_OpsCore_08_TAN)
				// 		QSTORE_ACTION_HEADGEAR("Opscore (MC)",ADFU_H_OpsCore_08_MC)
				// 		QSTORE_ACTION_HEADGEAR("Airframe (Tan)",ADFU_H_Airframe_03_tan)
				// 		QSTORE_ACTION_HEADGEAR("Airframe (MC)",ADFU_H_Airframe_Cover_03_MC)
				// 		QSTORE_ACTION_HEADGEAR("Airframe (AMCU)",ADFU_H_Airframe_03_AMCU)
				// 	QSTORE_ACTION_GRP_END

				// 	QSTORE_ACTION_GRP_BEGIN(SELECT_HEADGEAR_SUB1,"Soft Cover")
				// 		QSTORE_ACTION_HEADGEAR("Cap (Tan)",CUP_H_PMC_Cap_Tan)
				// 		QSTORE_ACTION_HEADGEAR("Cap (MC)",ADFU_Cap_MC)
				// 		QSTORE_ACTION_HEADGEAR("Boonie (Tan)",H_Booniehat_tan)
				// 		QSTORE_ACTION_HEADGEAR("Boonie",SOCOMD_Aus_Boonie)
				// 		QSTORE_ACTION_HEADGEAR("Beanie",H_Watchcap_khk)
				// 	QSTORE_ACTION_GRP_END
				// QSTORE_ACTION_GRP_END

				// Switch Uniforms
				// QSTORE_ACTION_GRP_BEGIN(SELECT_UNIFORMS,"Uniforms")
					class SOCOMD_Uniforms_ToggleDiving {
						displayName = "Toggle Diving Uniform";
						condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleDiving";
						statement = "[_player] call SOCOMD_fnc_Action_ToggleDiving";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
					class SOCOMD_Uniforms_ToggleHalo {
						displayName = "Toggle HALO Gear";
						condition = "[_player] call SOCOMD_fnc_ActionCondition_CanToggleHalo";
						statement = "[_player] call SOCOMD_fnc_Action_ToggleHalo";
						showDisabled = 0;
						exceptions[] = {"isNotInside", "isNotSitting"};
					};
				// QSTORE_ACTION_GRP_END
				
			QSTORE_ACTION_GRP_END
		};
	};
};