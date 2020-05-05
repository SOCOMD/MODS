//Spetsnaz ALFA Group (FSB)

#define FACTION_SOCOMD_FSB_STR "SOCOMD_FSB"
#define SOLDIER_FSB_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("CUP_H_RUS_Beret_Spetsnaz")

class O_R_Gorka_black_F; 
class SOCOMD_FSB_Uniform : O_R_Gorka_black_F {
	scope = public;
	scopeCurator = public;
	side = EAST;
	displayName = "Gorka CBRN Suit";
	uniformClass="SOCOMD_FSB_Uniform";
};

class SOCOMD_FSB_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_FSB_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_FSB_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};
    skill=1.0;
	class EventHandlers;

	uniformClass = "SOCOMD_FSB_Uniform";

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_FSB_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_FSB_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};

class SOCOMD_FSB_Leader: SOCOMD_FSB_Unarmed {
scope = public;
scopeCurator = public;
displayname = "Leader";
vehicleclass = "Man";

uniformClass = "SOCOMD_FSB_Uniform";
backpack = "B_RadioBag_01_black_F";

weapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
respawnWeapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
magazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
respawnMagazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
linkedItems[] = { "CUP_V_PMC_IOTV_Black_TL" ,"CUP_H_RUS_6B47_SF_headset_goggles_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
respawnLinkedItems[] = { "CUP_V_PMC_IOTV_Black_TL" ,"CUP_H_RUS_6B47_SF_headset_goggles_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
items[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
respawnItems[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
};

class SOCOMD_FSB_Operator: SOCOMD_FSB_Unarmed {
scope = public;
scopeCurator = public;
displayname = "Operator";
vehicleclass = "Man";

uniformClass = "SOCOMD_FSB_Uniform";
backpack = "SOG_BAG_blk";

weapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
respawnWeapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
magazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
respawnMagazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
linkedItems[] = { "CUP_V_PMC_IOTV_Black_Patrol" ,"CUP_H_RUS_6B47_SF_headset_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
respawnLinkedItems[] = { "CUP_V_PMC_IOTV_Black_Patrol" ,"CUP_H_RUS_6B47_SF_headset_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
items[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
respawnItems[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
};

class SOCOMD_FSB_Breacher: SOCOMD_FSB_Unarmed {
scope = public;
scopeCurator = public;
displayname = "Breacher";
vehicleclass = "Man";

uniformClass = "SOCOMD_FSB_Uniform";
backpack = "SOG_BAG_BREACHER_blk";

weapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
respawnWeapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
magazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
respawnMagazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
linkedItems[] = { "CUP_V_PMC_IOTV_Black_Gren" ,"CUP_H_RUS_6B47_SF_headset_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
respawnLinkedItems[] = { "CUP_V_PMC_IOTV_Black_Gren" ,"CUP_H_RUS_6B47_SF_headset_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
items[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"ACE_DefusalKit" ,"ACE_EntrenchingTool" ,"MineDetector" ,"ACE_wirecutter" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
respawnItems[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"ACE_DefusalKit" ,"ACE_EntrenchingTool" ,"MineDetector" ,"ACE_wirecutter" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
};

class SOCOMD_FSB_Medic: SOCOMD_FSB_Unarmed {
scope = public;
scopeCurator = public;
displayname = "Medic";
vehicleclass = "Man";

uniformClass = "SOCOMD_FSB_Uniform";
backpack = "SOG_BAG_med_blk";

weapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
respawnWeapons[] = { "SOCOMD_ALFA_PP19_acc" ,"CUP_hgun_Makarov" };
magazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
respawnMagazines[] = { "CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_30Rnd_9x19AP_Vityaz" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"CUP_8Rnd_9x18_Makarov_M" ,"ACE_M84" ,"ACE_M84" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" ,"SmokeShell" };
linkedItems[] = { "CUP_V_PMC_IOTV_Black_AR" ,"CUP_H_RUS_6B47_SF_headset_goggles_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
respawnLinkedItems[] = { "CUP_V_PMC_IOTV_Black_AR" ,"CUP_H_RUS_6B47_SF_headset_goggles_black" ,"G_AirPurifyingRespirator_02_black_F" ,"ItemMap" ,"ItemCompass" ,"ChemicalDetector_01_watch_F" };
items[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"KAT_guedel" ,"KAT_guedel" ,"KAT_accuvac" ,"adv_aceCPR_AED" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_epinephrine" ,"ACE_epinephrine" ,"KAT_Pulseoximeter" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
respawnItems[] = { "ACE_CableTie" ,"ACE_CableTie" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_elasticBandage" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_quikclot" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_fieldDressing" ,"ACE_morphine" ,"ACE_morphine" ,"ACE_apap" ,"ACE_apap" ,"ACE_apap" ,"KAT_guedel" ,"KAT_guedel" ,"KAT_guedel" ,"KAT_guedel" ,"KAT_accuvac" ,"adv_aceCPR_AED" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_surgicalKit" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_tourniquet" ,"ACE_epinephrine" ,"ACE_epinephrine" ,"KAT_Pulseoximeter" ,"ACE_SpraypaintRed" ,"ACRE_PRC148" };
};