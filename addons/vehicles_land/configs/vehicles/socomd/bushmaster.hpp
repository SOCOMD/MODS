    
////////////////////////////////////////////////////////////////////////////////
// BUSHMASTER

class bma3_bushmaster_base_F : Car_F {
    fuelCapacity = 14; // 14 == 49m
    ace_refuel_fuelCapacity = 80;
    cost = 40000;

    class HitPoints : HitPoints {
        class HitHull;
        class HitBody;
        class HitEngine;
        class HitFuel;

        class HitLFWheel;
        class HitLF2Wheel;
        class HitLMWheel;
        class HitLBWheel;

        class HitRFWheel;
        class HitRF2Wheel;
        class HitRMWheel;
        class HitRBWheel;

        class HitLGlass;
        class HitRGlass;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
    };

    class AcreIntercoms;
    class AcreRacks;

    class textureSources {
        class adf_001;
        class adf_002;
        class adf_003;
        class adf_004;
        class adf_005;
        class adf_006;
        class adf_007;
        class adf_008;
        class adf_009;
        class adf_010;
    };
};

class bma3_bushmaster_unarmed_F : bma3_bushmaster_base_F {
    armor = 750;
    armorStructural = 20;
    explosionShielding = 0.001;
    damageResistance = 0.03099;
    threat[] = {1, 0.7, 0.3};
    acre_hasInfantryPhone = 0;

    class HitPoints : HitPoints {

        class HitHull : HitHull {
            armor = 0.1;
            passThrough = 0.1;
            minimalHit = 0.01;
            explosionShielding = 0.0003;
            material = -1;
        };

        class HitBody : HitBody {
            armor = 0.3;
            passThrough = 0.1;
            minimalHit = 0.006;
            explosionShielding = 0.0003;
            material = -1;
        };

        class HitEngine : HitEngine {
            armor = 0.01;
            passThrough = 0.5;
            minimalHit = 0.0001;
            explosionShielding = 0.5;
            material = -1;
        };

        class HitFuel : HitFuel {
            armor = 0.25;
            passThrough = 0.5;
            minimalHit = 0.0001;
            explosionShielding = 0.8;
            material = -1;
        };

        class HitLFWheel : HitLFWheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitLF2Wheel : HitLF2Wheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitLMWheel : HitLMWheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitLBWheel : HitLBWheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitRFWheel : HitRFWheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitRF2Wheel : HitRF2Wheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitRMWheel : HitRMWheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitRBWheel : HitRBWheel {
            armor = 0.1;
            passThrough = 0.5;
            explosionShielding = 4.0;
            material = -1;
        };

        class HitLGlass : HitLGlass {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitRGlass : HitRGlass {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitGlass1 : HitGlass1 {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitGlass2 : HitGlass2 {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitGlass3 : HitGlass3 {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitGlass4 : HitGlass4 {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitGlass5 : HitGlass5 {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };

        class HitGlass6 : HitGlass6 {
            armor = 0.01;
            passThrough = 0;
            explosionShielding = 1.0;
            material = -1;
        };
    };
};

class bma3_bushmaster_pws127mm_F : bma3_bushmaster_unarmed_F {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    threat[] = {1, 0.9, 0.5};
};

/*
bma3_bushmaster_unarmed_F
bma3_bushmaster_base_F
Car_F
Car
*/

class SOCOMD_BUSHMASTER_TRANS : bma3_bushmaster_unarmed_F {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Bushmaster PMV (1/7)";
    vehicleclass = "Car";
    forceInGarage = 1;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\bma3\camo1_co.paa",
        "\z\socomd\addons\data\bma3\camo2_co.paa",
        "bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
        "bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
    };

    class textureSources : textureSources {
        class adf_001 : adf_001 {
            textures[] = {
                "\z\socomd\addons\data\bma3\camo1_co.paa",
                "\z\socomd\addons\data\bma3\camo2_co.paa",
                "bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
                "bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
            };
        };

        class adf_002 : adf_001 {};
        class adf_003 : adf_001 {};
        class adf_004 : adf_001 {};
        class adf_005 : adf_001 {};
        class adf_006 : adf_001 {};
        class adf_007 : adf_001 {};
        class adf_008 : adf_001 {};
        class adf_009 : adf_001 {};
        class adf_010 : adf_001 {};
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

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Intercom";
            shortName = "Intercom";
            allowedPositions[] = {"all"};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            masterPositions[] = {"driver"};
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
};

/*
bma3_bushmaster_pws127mm_F
bma3_bushmaster_unarmed_F
bma3_bushmaster_base_F
Car_F
Car
*/

class SOCOMD_BUSHMASTER_HMG : bma3_bushmaster_pws127mm_F {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Bushmaster PMV HMG (2/6)";
    vehicleclass = "Car";
    forceInGarage = 1;

    crew = "SOCOMD_Crewman";
    typicalCargo[] = {"SOCOMD_Crewman"};

    hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\bma3\camo1_co.paa",
        "\z\socomd\addons\data\bma3\camo2_co.paa",
        "bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
        "bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
    };

    class textureSources : textureSources {
        class adf_001 : adf_001 {
            textures[] = {
                "\z\socomd\addons\data\bma3\camo1_co.paa",
                "\z\socomd\addons\data\bma3\camo2_co.paa",
                "bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
                "bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
            };
        };

        class adf_002 : adf_001 {};
        class adf_003 : adf_001 {};
        class adf_004 : adf_001 {};
        class adf_005 : adf_001 {};
        class adf_006 : adf_001 {};
        class adf_007 : adf_001 {};
        class adf_008 : adf_001 {};
        class adf_009 : adf_001 {};
        class adf_010 : adf_001 {};
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

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Intercom";
            shortName = "Intercom";
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