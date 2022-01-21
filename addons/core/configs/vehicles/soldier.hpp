    

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
};