    

#define SOLDIER_BASE_LINKEDITEMS \
    ITEM01("ItemMap"), \
    ITEM01("ItemCompass"), \
    ITEM01("ItemWatch"), \
    ITEM01("SOCOMD_BERET")

class SOCOMD_Unarmed : B_Soldier_02_f {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Man;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Unarmed";
    vehicleclass = "Man";
    skill = 1.0;
    camouflage = 1.4; // default 1.4 ( higher values make you easier to spot)
    // audible = 0.05; // commented for now but available for testing. This is default value, apparently. 

    engineer = 1;
    canDeactivateMines = 1;
    attendant = 1;

    uniformClass = ITEM_UNIFORM_RIFLEMAN;

    threat[] = {1, 0.7, 0.4};
    weapons[]                     = { };
    respawnWeapons[]             = { };
    magazines[]                 = { };
    respawnMagazines[]             = { };
    respawnLinkedItems[]         = {SOLDIER_BASE_LINKEDITEMS};
    linkedItems[]                 = {SOLDIER_BASE_LINKEDITEMS};
    Items[]                     = { };
    RespawnItems[]                 = { };
    backpack                    = "";
};

#define SOLDER_HOMESTEAD_ITEMS \
    ITEM01("ACE_EarPlugs"), \
    ITEM01("ACRE_PRC343"), \
    ITEM01("ACRE_PRC152")

#define SOLDIER_HOMESTEAD_LINKEDITEMS \
    SOLDIER_BASE_LINKEDITEMS,\
    ITEM01("SOCOMD_Item_Vest_Homestead"), \
    ITEM01("SOCOMD_BERET")

class SOCOMD_Homestead : SOCOMD_Unarmed {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Man;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Homestead";
    vehicleclass = "Man";

    respawnLinkedItems[]        = {SOLDIER_HOMESTEAD_LINKEDITEMS};
    linkedItems[]               = {SOLDIER_HOMESTEAD_LINKEDITEMS};
    Items[]                     = {SOLDER_HOMESTEAD_ITEMS};
    RespawnItems[]              = {SOLDER_HOMESTEAD_ITEMS};
    backpack                    = "SOCOMD_BackpackPRC117F";
};

#define SOLDER_RIFLEMAN_WEAPONS \
    ITEM01(ITEM_PRIMARY_M4)

#define SOLDER_RIFLEMAN_MAGAZINES \
    ITEM07(ITEM_MAGAZINE_556)

#define SOLDIER_RIFLEMAN_LINKEDITEMS \
    SOLDIER_LOADOUT_LINKEDITEMS, \
    ITEM01(ITEM_VEST_RIFLEMAN), \
    ITEM01(ITEM_DEFAULT_HEADGEAR)


class SOCOMD_Rifleman : SOCOMD_Unarmed {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Man;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Rifleman";
    vehicleclass = "Man";

    weapons[]                     = {SOLDER_RIFLEMAN_WEAPONS};
    respawnWeapons[]             = {SOLDER_RIFLEMAN_WEAPONS};
    magazines[]                 = {SOLDER_RIFLEMAN_MAGAZINES};
    respawnMagazines[]             = {SOLDER_RIFLEMAN_MAGAZINES};
    respawnLinkedItems[]         = {SOLDIER_RIFLEMAN_LINKEDITEMS};
    linkedItems[]                 = {SOLDIER_RIFLEMAN_LINKEDITEMS};
    backpack                    = ITEM_BACKPACK_RIFLEMAN;
};

#define SOLDER_PILOT_WEAPONS \
    ITEM01(ITEM_PRIMARY_SOLS)

#define SOLDER_PILOT_MAGAZINES \
    ITEM07(ITEM_MAGAZINE_556)

#define SOLDIER_PILOT_LINKEDITEMS \
    SOLDIER_LOADOUT_LINKEDITEMS, \
    ITEM01(ITEM_VEST_PILOT), \
    ITEM01(ITEM_HEADGEAR_PILOT)

class SOCOMD_Pilot : SOCOMD_Unarmed {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Man;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Pilot";
    vehicleclass = "Man";

    weapons[]                     = {SOLDER_PILOT_WEAPONS};
    respawnWeapons[]             = {SOLDER_PILOT_WEAPONS};
    magazines[]                 = {SOLDER_PILOT_MAGAZINES};
    respawnMagazines[]             = {SOLDER_PILOT_MAGAZINES};
    respawnLinkedItems[]         = {SOLDIER_PILOT_LINKEDITEMS};
    linkedItems[]                 = {SOLDIER_PILOT_LINKEDITEMS};
    backpack                    = ITEM_BACKPACK_PILOT;
};

#define SOLDER_CREWMAN_WEAPONS \
    ITEM01(ITEM_PRIMARY_SOLS)

#define SOLDER_CREWMAN_MAGAZINES \
    ITEM07(ITEM_MAGAZINE_556)

#define SOLDIER_CREWMAN_LINKEDITEMS \
    SOLDIER_LOADOUT_LINKEDITEMS, \
    ITEM01(ITEM_VEST_CREWMAN), \
    ITEM01(ITEM_HEADGEAR_CREWMAN)

class SOCOMD_Crewman : SOCOMD_Unarmed {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Man;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Crewman";
    vehicleclass = "Man";

    weapons[]                     = {SOLDER_CREWMAN_WEAPONS};
    respawnWeapons[]             = {SOLDER_CREWMAN_WEAPONS};
    magazines[]                 = {SOLDER_CREWMAN_MAGAZINES};
    respawnMagazines[]             = {SOLDER_CREWMAN_MAGAZINES};
    respawnLinkedItems[]         = {SOLDIER_CREWMAN_LINKEDITEMS};
    linkedItems[]                 = {SOLDIER_CREWMAN_LINKEDITEMS};
    backpack                    = ITEM_BACKPACK_CREWMAN;
};

