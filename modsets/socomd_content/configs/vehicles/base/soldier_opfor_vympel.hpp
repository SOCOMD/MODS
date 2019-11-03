//Spetsnaz VEGA Group (Vympel)

#define FACTION_SOCOMD_VYMPEL_STR "SOCOMD_Vympel"
#define SOLDIER_VYMPEL_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("CUP_H_SSO_Beret_Spetsnaz")

class CUP_CRYE_ATACSFG_Full; 
class SOCOMD_Vympel_Soldier_Full : CUP_CRYE_ATACSFG_Full {
	scope = public;
	scopeCurator = public;
	side = EAST;

	displayName = "Vympel Sleeves Down";
	uniformClass="CUP_U_CRYE_ATACSFG_Full";
};

class CUP_CRYE_ATACSFG_Roll;
class SOCOMD_Vympel_Soldier_Roll : CUP_CRYE_ATACSFG_Roll {
	scope = public;
	scopeCurator = public;
	side = EAST;

	displayName = "Vympel Sleeves Up";
	uniformClass="CUP_U_CRYE_ATACSFG_Roll";
};

class SOCOMD_Vympel_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_VYMPEL_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};
	class EventHandlers;

	uniformClass = "SOCOMD_Vympel_Uniform_Full";

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_VYMPEL_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_VYMPEL_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};


class SOCOMD_Vympel_Leader : SOCOMD_Vympel_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	displayname = "Leader";
	vehicleclass = "Man";

	uniformClass = "SOCOMD_Vympel_Uniform_Full";
	backpack = "backpack_1_OD";

	weapons[] = { "SOCOMD_VEGA_AK_GL_acc","CUP_hgun_Makarov" };
	respawnWeapons[] = { "SOCOMD_VEGA_AK_GL_acc","CUP_hgun_Makarov" };
	magazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"hlc_VOG25_AK","hlc_VOG25_AK" };
	respawnMagazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"hlc_VOG25_AK","hlc_VOG25_AK" };
	linkedItems[] = { "CUP_V_B_Ciras_Olive3" ,"CUP_H_OpsCore_Spray_SF" ,"milgp_f_face_shield_shades_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	respawnLinkedItems[] = { "CUP_V_B_Ciras_Olive3" ,"CUP_H_OpsCore_Spray_SF" ,"milgp_f_face_shield_shades_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	items[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_apap" ,"ACE_apap" ,"ACE_morphine" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_MapTools" };
	respawnItems[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_apap" ,"ACE_apap" ,"ACE_morphine" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_MapTools" };
};

class SOCOMD_Vympel_Operator : SOCOMD_Vympel_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	displayname = "Operator";
	vehicleclass = "Man";

	uniformClass = "SOCOMD_Vympel_Uniform_Full";
	backpack = "backpack_OD";

	weapons[] = { "SOCOMD_VEGA_AK_V2_acc","CUP_hgun_Makarov" };
	respawnWeapons[] = { "SOCOMD_VEGA_AK_V2_acc","CUP_hgun_Makarov" };
	magazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" };
	respawnMagazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" ,"CUP_30Rnd_556x45_AK" };
	linkedItems[] = { "CUP_V_B_Armatus_BB_OD" ,"CUP_H_OpsCore_Spray_NoHS" ,"milgp_f_face_shield_tactical_shemagh_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	respawnLinkedItems[] = { "CUP_V_B_Armatus_BB_OD" ,"CUP_H_OpsCore_Spray_NoHS" ,"milgp_f_face_shield_tactical_shemagh_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	items[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_MapTools" };
	respawnItems[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_MapTools" };
};

class SOCOMD_Vympel_Medic : SOCOMD_Vympel_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	displayname = "Medic";
	vehicleclass = "Man";

	uniformClass = "SOCOMD_Vympel_Uniform_Full";
	backpack = "KIT_BAG_od";

	weapons[] = { "SOCOMD_VEGA_AK_V1_acc","CUP_hgun_Makarov" };
	respawnWeapons[] = { "SOCOMD_VEGA_AK_V1_acc","CUP_hgun_Makarov" };
	magazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" };
	respawnMagazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" };
	linkedItems[] = { "CUP_V_B_Ciras_Olive" ,"CUP_H_OpsCore_Spray" ,"FGN_CAG_Tactical_clr_Shemagh_rgr" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	respawnLinkedItems[] = { "CUP_V_B_Ciras_Olive" ,"CUP_H_OpsCore_Spray" ,"FGN_CAG_Tactical_clr_Shemagh_rgr" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	items[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_morphine" ,"ACE_morphine" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_MapTools" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"ACE_bloodIV_500" ,"ACE_bloodIV_500" ,"ACE_epinephrine" ,"ACE_epinephrine" ,"ACE_epinephrine" ,"KAT_Pulseoximeter" ,"ACE_surgicalKit" ,"ACE_packingBandage" ,"ACE_packingBandage" ,"ACE_packingBandage" ,"ACE_packingBandage" ,"ACE_packingBandage" };
	respawnItems[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_morphine" ,"ACE_morphine" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_MapTools" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"ACE_bloodIV_500" ,"ACE_bloodIV_500" ,"ACE_epinephrine" ,"ACE_epinephrine" ,"ACE_epinephrine" ,"KAT_Pulseoximeter" ,"ACE_surgicalKit" ,"ACE_packingBandage" ,"ACE_packingBandage" ,"ACE_packingBandage" ,"ACE_packingBandage" ,"ACE_packingBandage" };
};

class SOCOMD_Vympel_MachineGunner: SOCOMD_Vympel_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	displayname = "Machine Gunner";
	vehicleclass = "Man";

	uniformClass = "SOCOMD_Vympel_Uniform_Roll";
	backpack = "backpack_2_OD";

	weapons[] = { "SOCOMD_VEGA_RPK_acc","CUP_hgun_Makarov" };
	respawnWeapons[] = { "SOCOMD_VEGA_RPK_acc","CUP_hgun_Makarov" };
	magazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" };
	respawnMagazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" ,"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M" };
	linkedItems[] = { "CUP_V_B_Armatus_BB_OD" ,"CUP_H_OpsCore_Spray" ,"milgp_f_face_shield_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	respawnLinkedItems[] = { "CUP_V_B_Armatus_BB_OD" ,"CUP_H_OpsCore_Spray" ,"milgp_f_face_shield_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	items[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_MapTools" };
	respawnItems[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_MapTools" };
};

class SOCOMD_Vympel_Sapper : SOCOMD_Vympel_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	displayname = "Sapper";
	vehicleclass = "Man";

	uniformClass = "SOCOMD_Vympel_Uniform_Full";
	backpack = "backpack_OD";

	weapons[] = { "SOCOMD_VEGA_AK_V1_acc","CUP_hgun_Makarov" };
	respawnWeapons[] = { "SOCOMD_VEGA_AK_V1_acc","CUP_hgun_Makarov" };
	magazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" };
	respawnMagazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_HandGrenade_M67" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" ,"CUP_30Rnd_762x39_AK103_bakelite_M" };
	linkedItems[] = { "CUP_V_B_Armatus_OD" ,"CUP_H_OpsCore_Spray" ,"milgp_f_face_shield_goggles_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	respawnLinkedItems[] = { "CUP_V_B_Armatus_OD" ,"CUP_H_OpsCore_Spray" ,"milgp_f_face_shield_goggles_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	items[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_MapTools" ,"ACE_DefusalKit" ,"ACE_EntrenchingTool" ,"ACE_wirecutter" ,"ToolKit" ,"MineDetector" ,"ACE_M26_Clacker" };
	respawnItems[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_MapTools" ,"ACE_DefusalKit" ,"ACE_EntrenchingTool" ,"ACE_wirecutter" ,"ToolKit" ,"MineDetector" ,"ACE_M26_Clacker" };
};

class SOCOMD_Vympel_Marksman : SOCOMD_Vympel_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_Vympel_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	displayname = "Marksman";
	vehicleclass = "Man";

	uniformClass = "SOCOMD_Vympel_Uniform_Full";
	backpack = "backpack_1_OD";

	weapons[] = { "SOCOMD_VEGA_SVD_acc","CUP_hgun_Makarov" };
	respawnWeapons[] = { "SOCOMD_VEGA_SVD_acc","CUP_hgun_Makarov"};
	magazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_10Rnd_762x54_SVD_M" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_10Rnd_762x54_SVD_M" ,"CUP_10Rnd_762x54_SVD_M" ,"CUP_10Rnd_762x54_SVD_M" ,"CUP_10Rnd_762x54_SVD_M" };
	respawnMagazines[] = { "ACE_Chemlight_HiRed" ,"ACE_Chemlight_HiRed" ,"murshun_cigs_cigpack" ,"murshun_cigs_lighter" ,"CUP_10Rnd_762x54_SVD_M" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"CUP_10Rnd_762x54_SVD_M" ,"CUP_10Rnd_762x54_SVD_M" ,"CUP_10Rnd_762x54_SVD_M" ,"CUP_10Rnd_762x54_SVD_M" };
	linkedItems[] = { "CUP_V_B_Armatus_OD" ,"CUP_H_OpsCore_Spray_NoHS" ,"milgp_f_face_shield_shemagh_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	respawnLinkedItems[] = { "CUP_V_B_Armatus_OD" ,"CUP_H_OpsCore_Spray_NoHS" ,"milgp_f_face_shield_shemagh_RGR" ,"ItemMap" ,"ItemAndroid" ,"ItemRadioAcreFlagged" ,"ItemCompass" ,"ItemWatch" };
	items[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_MapTools" };
	respawnItems[] = { "ItemcTabHCam" ,"ACE_EarPlugs" ,"ACE_EarPlugs" ,"ACE_Flashlight_KSF1" ,"ACE_DAGR" ,"ACE_IR_Strobe_Item" ,"ACRE_PRC343" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_MapTools" };
};