#define ITEM01(id) id
#define ITEM02(id) id,id
#define ITEM03(id) id,id,id
#define ITEM04(id) id,id,id,id
#define ITEM05(id) id,id,id,id,id
#define ITEM06(id) id,id,id,id,id,id
#define ITEM07(id) id,id,id,id,id,id,id
#define ITEM08(id) id,id,id,id,id,id,id,id
#define ITEM09(id) id,id,id,id,id,id,id,id,id
#define ITEM10(id) id,id,id,id,id,id,id,id,id,id
#define ITEM11(id) id,id,id,id,id,id,id,id,id,id,id
#define ITEM12(id) id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM13(id) id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM14(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM15(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM16(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM17(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM18(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM19(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM20(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM30(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id

////////////////////////////////////////////////////////////////////////////////

#define SOLDIER_RUS_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("CUP_H_RUS_Beret_Spetsnaz")

class B_Soldier_02_f;
class SOCOMD_RUS_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};
	class EventHandlers;

	uniformClass = ITEM_RUSSIAN_UNIFORM;

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_RUS_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};

#define SOLDER_RUS_RIFLEMAN_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Rifleman_AI ),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_RUS_LEADER_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Troopleader_AI),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_RUS_MACHINEGUNNER_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_MachineGunner_AI ),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_RUS_AUTORIFLE_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Autorifle_AI),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_RUS_SNIPER_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Sniper_AI),\
	ITEM01(ITEM_RUSSIAN_HANDGUN)

#define SOLDER_RUS_AUTORIFLE_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Autorifle),\
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDER_RUS_SNIPER_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Sniper),\
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDER_RUS_RIFLEMAN_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Rifleman), \
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDER_RUS_LEADER_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Rifleman), \
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE), \
	ITEM09("CUP_1Rnd_HE_GP25_M")

#define SOLDER_RUS_MACHINEGUNNER_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_MachineGunner), \
	ITEM03(ITEM_RUSSIAN_HANDGUN_MAGAZINE)

#define SOLDIER_RUS_RIFLEMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_RUSSIAN_VEST), \
	ITEM01(ITEM_RUSSIAN_HEADGEAR), \
	ITEM01(ITEM_RUSSIAN_FACEGEAR)

#define SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS \
	SOLDIER_RUS_RIFLEMAN_LINKEDITEMS, \
	ITEM01("SOCOMD_NVG")

#define SOLDIER_RUS_SNIPER_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_RUSSIAN_VEST), \
	ITEM01(ITEM_RUSSIAN_HEADGEAR_SOFT), \
	ITEM01(ITEM_RUSSIAN_FACEGEAR)

class SOCOMD_RUS_soldier_Rifleman : SOCOMD_RUS_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Operator (AK)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_RIFLEMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_RUS_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class SOCOMD_RUS_soldier_Rifleman_Night : SOCOMD_RUS_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Operator (AK) (Night)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_RIFLEMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_RUS_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class SOCOMD_RUS_soldier_Machinegunner : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Machinegunner (PKP)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_MACHINEGUNNER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_MACHINEGUNNER_WEAPONS};
	magazines[] 				= {SOLDER_RUS_MACHINEGUNNER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_MACHINEGUNNER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_heavy;
};

class SOCOMD_RUS_soldier_Machinegunner_Night : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Machinegunner (night) (PKP)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_MACHINEGUNNER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_MACHINEGUNNER_WEAPONS};
	magazines[] 				= {SOLDER_RUS_MACHINEGUNNER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_MACHINEGUNNER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_Night_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_heavy;
};

class SOCOMD_RUS_soldier_Autorifle : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Operator (RPK)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_AUTORIFLE_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_AUTORIFLE_WEAPONS};
	magazines[] 				= {SOLDER_RUS_AUTORIFLE_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_AUTORIFLE_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class SOCOMD_RUS_soldier_Autorifle_Night : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Operator (RPK) (Night)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_AUTORIFLE_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_AUTORIFLE_WEAPONS};
	magazines[] 				= {SOLDER_RUS_AUTORIFLE_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_AUTORIFLE_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};


class SOCOMD_RUS_soldier_Leader : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Leader (GL)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_LEADER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_LEADER_WEAPONS};
	magazines[] 				= {SOLDER_RUS_LEADER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_LEADER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_leader;
};
class SOCOMD_RUS_soldier_Leader_Night : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man_Night;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Leader (Night) (GL)";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_LEADER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_LEADER_WEAPONS};
	magazines[] 				= {SOLDER_RUS_LEADER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_LEADER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_NIGHT_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_leader;
};

class SOCOMD_RUS_soldier_Sniper : SOCOMD_RUS_soldier_Rifleman {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Sniper";
	vehicleclass = "Man";
	identityTypes[] = {"CUP_D_Language_RU","Head_Euro","CUP_G_ARMY"};

	weapons[] 					= {SOLDER_RUS_SNIPER_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_SNIPER_WEAPONS};
	magazines[] 				= {SOLDER_RUS_SNIPER_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_SNIPER_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_SNIPER_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_SNIPER_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class ADFU_Soldier_MC; 
class SOCOMD_RUS_Soldier_SleevesDown : ADFU_Soldier_MC 
{
	displayName = "Russian Special Forces";
	author = "SOCOMD & ADFU";
	uniformClass="SOCOMD_RUS_SleevesDown";
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