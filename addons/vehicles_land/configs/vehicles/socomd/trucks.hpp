////////////////////////////////////////////////////////////////////////////////
// TRANSPORT
class UK3CB_B_MTVR_Closed_WDL;
class SOCOMD_TRUCK_TRANSPORT_A : UK3CB_B_MTVR_Closed_WDL {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Transport (1/12)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    threat[] = {0.8,0.8,0.5};   
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    crew= UNIT_SOCOMD_CREWMAN;
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
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\mtvr\mtvr_body_co.paa",
        "\z\socomd\addons\data\mtvr\mtvr_body2_co.paa",
        "\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_mtvr\data\mtvr_interier_co.paa",
        "\z\socomd\addons\data\mtvr\mtvr_tarp_co.paa"
    };
};

////////////////////////////////////////////////////////////////////////////////
// AMMO
class rhsusf_M977A4_AMMO_usarmy_wd;
class SOCOMD_TRUCK_AMMO_A : rhsusf_M977A4_AMMO_usarmy_wd {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Ammo (1/2)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    threat[] = {0.8,0.8,0.5};    
    crew= UNIT_SOCOMD_CREWMAN;
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
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
};

////////////////////////////////////////////////////////////////////////////////
// FUEL
class rhsusf_M978A4_usarmy_wd;
class SOCOMD_TRUCK_FUEL_A : rhsusf_M978A4_usarmy_wd {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Fuel (1/2)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    threat[] = {0.8,0.8,0.5};
    crew= UNIT_SOCOMD_CREWMAN;

    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
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
};

////////////////////////////////////////////////////////////////////////////////
// REPAIR
class rhsusf_M977A4_REPAIR_usarmy_wd;
class SOCOMD_TRUCK_REPAIR_A : rhsusf_M977A4_REPAIR_usarmy_wd {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Repair (1/2)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    ace_cargo_space = 20;
    threat[] = {0.8,0.8,0.5};


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
};

////////////////////////////////////////////////////////////////////////////////
// CARGO
class rhsusf_M977A4_usarmy_wd;
class SOCOMD_TRUCK_CARGO_A : rhsusf_M977A4_usarmy_wd {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Cargo (1/2)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    ace_cargo_space = 20;
    threat[] = {0.8,0.8,0.5};   
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    crew= UNIT_SOCOMD_CREWMAN;
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
};

class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom;
class SOCOMD_TRUCK_CARGO_D_B : rhsusf_M1084A1R_SOV_M2_D_fmtv_socom {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Stewart & Stevenson FMTV SOV + HMG (2/1)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    threat[] = {0.8,0.8,0.5};   
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    crew= UNIT_SOCOMD_CREWMAN;
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
};
class rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom;
class SOCOMD_TRUCK_CARGO_WD_B : rhsusf_M1084A1R_SOV_M2_WD_fmtv_socom {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Stewart & Stevenson FMTV SOV + HMG (2/1)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    ace_cargo_space = 20;
    cost = 20000;
    threat[] = {0.8,0.8,0.5};   
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    crew= UNIT_SOCOMD_CREWMAN;
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
};

// Logistics

class rhsusf_M1074A1R_SOV_M2_D_fmtv_socom;
class SOCOMD_TRUCK_LOGI_D : rhsusf_M1074A1R_SOV_M2_D_fmtv_socom {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Logistics Transport Des (2/1)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    ace_cargo_space = 20;
    threat[] = {0.8,0.8,0.5};   
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    crew= UNIT_SOCOMD_CREWMAN;
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
};


class rhsusf_M1074A1R_SOV_M2_WD_fmtv_socom;
class SOCOMD_TRUCK_LOGI_WD : rhsusf_M1074A1R_SOV_M2_WD_fmtv_socom {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Logistics Transport WD (2/1)";
    fuelCapacity = 24;
    ace_refuel_fuelCapacity = 120;
    cost = 20000;
    ace_cargo_space = 20;
    threat[] = {0.8,0.8,0.5};   
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    crew= UNIT_SOCOMD_CREWMAN;
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
};