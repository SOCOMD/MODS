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

#define SOLDIER_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("SOCOMD_BERET")

class SOCOMD_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";

	uniformClass = ITEM_UNIFORM_RIFLEMAN;

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};

#define SOLDER_HOMESTEAD_ITEMS \
	ITEM01("ACE_EarPlugs"), \
	ITEM01("ACRE_PRC343"), \
	ITEM01("ACRE_PRC152"), \
	ITEM01("ACRE_PRC117F")

#define SOLDIER_HOMESTEAD_LINKEDITEMS \
	SOLDIER_BASE_LINKEDITEMS,\
	ITEM01("SOCOMD_Item_Vest_Homestead"), \
	ITEM01("SOCOMD_BERET")

class SOCOMD_Homestead : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Homestead";
	vehicleclass = "Man";

	respawnLinkedItems[] 		= {SOLDIER_HOMESTEAD_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_HOMESTEAD_LINKEDITEMS};
	Items[] 					= {SOLDER_HOMESTEAD_ITEMS};
	RespawnItems[] 				= {SOLDER_HOMESTEAD_ITEMS};
	backpack					= ITEM_BACKPACK_TROOPLEADER;
};

#define SOLDER_RIFLEMAN_WEAPONS \
	ITEM01(ITEM_PRIMARY_RIFLEMAN)

#define SOLDER_RIFLEMAN_MAGAZINES \
	ITEM07(ITEM_PRIMARY_MAGAZINE_RIFLEMAN)

#define SOLDIER_RIFLEMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_VEST_RIFLEMAN), \
	ITEM01(ITEM_HEADGEAR_RIFLEMAN)


class SOCOMD_Rifleman : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Rifleman";
	vehicleclass = "Man";

	weapons[] 					= {SOLDER_RIFLEMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_BACKPACK_RIFLEMAN;
};

#define SOLDER_PILOT_WEAPONS \
	ITEM01(ITEM_PRIMARY_PILOT)

#define SOLDER_PILOT_MAGAZINES \
	ITEM07(ITEM_PRIMARY_MAGAZINE_PILOT)

#define SOLDIER_PILOT_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_VEST_PILOT), \
	ITEM01(ITEM_HEADGEAR_PILOT)

class SOCOMD_Pilot : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Pilot";
	vehicleclass = "Man";

	weapons[] 					= {SOLDER_PILOT_WEAPONS};
	respawnWeapons[] 			= {SOLDER_PILOT_WEAPONS};
	magazines[] 				= {SOLDER_PILOT_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_PILOT_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_PILOT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_PILOT_LINKEDITEMS};
	backpack					= ITEM_BACKPACK_PILOT;
};

#define SOLDER_CREWMAN_WEAPONS \
	ITEM01(ITEM_PRIMARY_CREWMAN)

#define SOLDER_CREWMAN_MAGAZINES \
	ITEM07(ITEM_PRIMARY_MAGAZINE_CREWMAN)

#define SOLDIER_CREWMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_VEST_CREWMAN), \
	ITEM01(ITEM_HEADGEAR_CREWMAN)

class SOCOMD_Crewman : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Crewman";
	vehicleclass = "Man";

	weapons[] 					= {SOLDER_CREWMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_CREWMAN_WEAPONS};
	magazines[] 				= {SOLDER_CREWMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_CREWMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_CREWMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_CREWMAN_LINKEDITEMS};
	backpack					= ITEM_BACKPACK_CREWMAN;
};