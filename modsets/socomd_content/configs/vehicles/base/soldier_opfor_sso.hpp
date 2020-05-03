
#define FACTION_SOCOMD_SSO_STR "SOCOMD_SSO"
#define SOLDIER_SSO_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("CUP_H_SSO_Beret_Spetsnaz")


class SOCOMD_SSO_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};
	skill=1.0;
	class EventHandlers;

	uniformClass = ITEM_RUSSIAN_UNIFORM;

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_SSO_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};

#define SOLDER_SSO_RIFLEMAN_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Rifleman_AI ),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_SSO_LEADER_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Troopleader_AI),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_SSO_MACHINEGUNNER_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_MachineGunner_AI ),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_SSO_AUTORIFLE_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Autorifle_AI),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_SSO_SNIPER_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Sniper_AI),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_SSO_AUTORIFLE_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Autorifle),\
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDER_SSO_SNIPER_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Sniper),\
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDER_SSO_RIFLEMAN_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Rifleman), \
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDER_SSO_LEADER_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Rifleman), \
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE), \
	ITEM09("CUP_1Rnd_HE_GP25_M")

#define SOLDER_SSO_MACHINEGUNNER_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_MachineGunner), \
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDIER_SSO_RIFLEMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_RUSSIAN_VEST), \
	ITEM01(ITEM_RUSSIAN_HEADGEAR), \
	ITEM01(ITEM_RUSSIAN_FACEGEAR)

#define SOLDIER_SSO_RIFLEMAN_light_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_RUSSIAN_VEST_light), \
	ITEM01(ITEM_RUSSIAN_HEADGEAR), \
	ITEM01(ITEM_RUSSIAN_FACEGEAR)

#define SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS \
	SOLDIER_SSO_RIFLEMAN_LINKEDITEMS, \
	ITEM01("CUP_NVG_GPNVG_black")

#define SOLDIER_SSO_RIFLEMAN_NIGHT_light_LINKEDITEMS \
	SOLDIER_SSO_RIFLEMAN_light_LINKEDITEMS, \
	ITEM01("CUP_NVG_GPNVG_black")

#define SOLDIER_SSO_SNIPER_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_RUSSIAN_VEST), \
	ITEM01(ITEM_RUSSIAN_HEADGEAR_SOFT), \
	ITEM01(ITEM_RUSSIAN_FACEGEAR)

class SOCOMD_SSO_soldier_Rifleman : SOCOMD_SSO_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Operator (AK)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	respawnWeapons[] 			= {SOLDER_SSO_RIFLEMAN_WEAPONS};
	weapons[] 					= {SOLDER_SSO_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_SSO_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_light_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_light_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class SOCOMD_SSO_soldier_Rifleman_Night : SOCOMD_SSO_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Operator (AK) (Night)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_RIFLEMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_SSO_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_NIGHT_light_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_NIGHT_light_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class SOCOMD_SSO_soldier_Machinegunner : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Machinegunner (PKP)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[]                   = {SOLDER_SSO_MACHINEGUNNER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_MACHINEGUNNER_WEAPONS};
	magazines[] 				= {SOLDER_SSO_MACHINEGUNNER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_MACHINEGUNNER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_heavy;
};

class SOCOMD_SSO_soldier_Machinegunner_Night : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Machinegunner (night) (PKP)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_MACHINEGUNNER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_MACHINEGUNNER_WEAPONS};
	magazines[] 				= {SOLDER_SSO_MACHINEGUNNER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_MACHINEGUNNER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_heavy;
};

class SOCOMD_SSO_soldier_Autorifle : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Operator (RPK)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_AUTORIFLE_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_AUTORIFLE_WEAPONS};
	magazines[] 				= {SOLDER_SSO_AUTORIFLE_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_AUTORIFLE_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class SOCOMD_SSO_soldier_Autorifle_Night : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Operator (RPK) (Night)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_AUTORIFLE_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_AUTORIFLE_WEAPONS};
	magazines[] 				= {SOLDER_SSO_AUTORIFLE_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_AUTORIFLE_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};


class SOCOMD_SSO_soldier_Leader : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Leader (GL)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_LEADER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_LEADER_WEAPONS};
	magazines[] 				= {SOLDER_SSO_LEADER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_LEADER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_leader;
};
class SOCOMD_SSO_soldier_Leader_Night : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Leader (Night) (GL)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_LEADER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_LEADER_WEAPONS};
	magazines[] 				= {SOLDER_SSO_LEADER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_LEADER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_leader;
};

class SOCOMD_SSO_soldier_Sniper : SOCOMD_SSO_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_SSO_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_SOCOMD_SSO_STR;
	displayname = "Sniper";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_SSO_SNIPER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_SSO_SNIPER_WEAPONS};
	magazines[] 				= {SOLDER_SSO_SNIPER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_SSO_SNIPER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_SSO_SNIPER_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_SSO_SNIPER_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class ADFU_Soldier_MC; 
class SOCOMD_SSO_Soldier_SleevesDown : ADFU_Soldier_MC 
{
	displayName = "Russian Special Forces";
	author = "SOCOMD & ADFU";
	uniformClass="SOCOMD_SSO_SleevesDown";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\Russian\u_g3_mc_RU_co.paa"
		};
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
};