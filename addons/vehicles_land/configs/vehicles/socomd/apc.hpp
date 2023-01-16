
////////////////////////////////////////////////////////////////////////////////
// APC

//class Wheeled_APC_F : Car_F {};
class APC_Wheeled_03_base_F;

class I_APC_Wheeled_03_base_F : APC_Wheeled_03_base_F {
    class TextureSources;
    class AnimationSources;
};

class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F {
    class AnimationSources : AnimationSources {
        class showCamonetHull;
        class showBags;
        class showBags2;
        class showTools;
        class showSLATHull;
    };
};

class SOCOMD_APC_A : I_APC_Wheeled_03_cannon_F {
    fuelCapacity = 11; // 1 hr 10m at 100km/hr
    ace_refuel_fuelCapacity = 200;
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "APC (3/8)";
    vehicleclass = "Armored";
    forceInGarage = 1;
    cost = 40000;
    threat[] = {1.0,0.8,0.7};
    camouflage = 10;

    crew = "SOCOMD_Crewman";
    typicalCargo[] = {"SOCOMD_Crewman"};

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };

    textureList[] = {"SOCOMD", 1};

    class TextureSources : TextureSources {
        class SOCOMD {
            displayName = "SOCOMD";
            author = AUTHOR_STR;
            textures[] = {
                "\z\socomd\addons\data\boxer\APC_Wheeled_03_Ext_CO.paa",
                "\z\socomd\addons\data\boxer\APC_Wheeled_03_Ext2_CO.paa",
                "\z\socomd\addons\data\boxer\RCWS30_CO.paa",
                "\z\socomd\addons\data\boxer\APC_Wheeled_03_Ext_alpha_CO.paa",
                "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                "A3\armor_f\data\cage_sand_co.paa"
            };
            faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
        };
    };

    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3",
        "camo4",
        "CamoNet",
        "CamoSlat"
    };

    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\boxer\APC_Wheeled_03_Ext_CO.paa",
        "\z\socomd\addons\data\boxer\APC_Wheeled_03_Ext2_CO.paa",
        "\z\socomd\addons\data\boxer\RCWS30_CO.paa",
        "\z\socomd\addons\data\boxer\APC_Wheeled_03_Ext_alpha_CO.paa",
        "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
        "A3\armor_f\data\cage_sand_co.paa"
    };

    animationList[] = {
        "showCamonetHull",0,
        "showBags",0,
        "showBags2",1,
        "showTools",1,
        "showSLATHull",0
    };

    class AnimationSources : AnimationSources {
        class showBags2 : showBags2 {
            initPhase = 1;
        };

        class showTools : showTools {
            initPhase = 1;
        };
    };

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            allowedPositions[] = {"driver", "commander", "gunner"};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            masterPositions[] = {"driver"};
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander", "gunner"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
};

class SOCOMD_APC_B : SOCOMD_APC_A {
    fuelCapacity = 11;
    ace_refuel_fuelCapacity = 200;
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "APC Slated (3/8)";
    vehicleclass = "Armored";
    cost = 40000;
    threat[] = {1.0,0.8,0.7};
    forceInGarage = 1;
    camouflage = 10;

    crew = "SOCOMD_Crewman";
    typicalCargo[] = {"SOCOMD_Crewman"};

    animationList[] = {
        "showCamonetHull",0,
        "showBags",0,
        "showBags2",1,
        "showTools",1,
        "showSLATHull",1
    };

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };

    class AnimationSources : AnimationSources {
        class showSLATHull : showSLATHull {
            initPhase = 1;
        };
    };
};

