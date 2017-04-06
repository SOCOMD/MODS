////////////////////////////////////////////////////////////////////////////////
//COMMON DEFINES
 
#define SASR_UNIT_COMMON_LINKEDITEMS	ITEM01("ItemMap"), \
										ITEM01("ItemCompass"), \
										ITEM01("ItemWatch"), \
										ITEM01("tf_anprc152"), \
										ITEM01("ItemMicroDAGR")
 
#define SASR_UNIT_COMMON_ITEMS 			ITEM03("ACE_epinephrine"), \
										ITEM01("ACE_personalAidKit"), \
										ITEM01("ACE_Flashlight_MX991"), \
										ITEM01("CUP_NVG_HMNVS")

#define SASR_UNIT_COMMON_AMMO 			ITEM03("Chemlight_blue"), \
										ITEM04("ACE_Chemlight_HiRed"), \
										ITEM01("B_IR_Grenade")
 
////////////////////////////////////////////////////////////////////////////////
// BASE CLASSES
 
class SOCOMD_SASR_Soldier : B_Soldier_02_f
{
	scope 						= protected;
	side 						= 1;
	faction 					= "SOCOMD_SASR";
	author						= "SOCOMD";

	uniformClass				= "VSM_Multicam_Crye_Camo";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[]			= { "Camo", "Insignia" };

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { SASR_UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { SASR_UNIT_COMMON_AMMO };
	linkedItems[] 				= { SASR_UNIT_COMMON_LINKEDITEMS };
	respawnLinkedItems[] 		= { SASR_UNIT_COMMON_LINKEDITEMS };
	Items[] 					= { SASR_UNIT_COMMON_ITEMS };
	RespawnItems[] 				= { SASR_UNIT_COMMON_ITEMS };
	backpack					= "";
};

class SOCOMD_SASR_Trooper : SOCOMD_SASR_Soldier
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_SASR_Trooper";
	vehicleClass 			= "SOCOMD_SASR_Units";
	icon 					= "iconMan";
	displayName 			= "Trooper";

	weapons[] 				= { "Rangefinder" };
	respawnWeapons[] 		= { "Rangefinder" };
	magazines[] 			= { SASR_UNIT_COMMON_AMMO };
	respawnMagazines[] 		= { SASR_UNIT_COMMON_AMMO };
	linkedItems[] 			= { SASR_UNIT_COMMON_LINKEDITEMS, "AU_02_780000_v1" };
	respawnLinkedItems[] 	= { SASR_UNIT_COMMON_LINKEDITEMS, "AU_02_780000_v1" };
	Items[] 				= { SASR_UNIT_COMMON_ITEMS };
	RespawnItems[] 			= { SASR_UNIT_COMMON_ITEMS };
	backpack				= "";
};

class SOCOMD_SASR_Homestead : SOCOMD_SASR_Soldier
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_SASR_Homestead";
	vehicleClass 			= "SOCOMD_SASR_Units";
	icon 					= "iconMan";
	displayName 			= "Homestead";
};