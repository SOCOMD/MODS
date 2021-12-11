    
////////////////////////////////////////////////////////////////////////////////
// NOMAD


class RHS_CH_47F;

class SOCOMD_NOMAD_A : RHS_CH_47F {
    
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    vehicleclass = "Air";
    forceInGarage = 1;
    fuelCapacity = 3914;
    fuelConsumptionRate = 0.55;
    crew = UNIT_SOCOMD_PILOT;
    cost = 40000;
    threat[] = {1.0,0.7,0.3};
    typicalCargo[] = {UNIT_SOCOMD_PILOT};
    class TransportWeapons {
        INVENTORY_VEHICLE_MEDIUM_WEAPONS
    };
    class TransportMagazines {
        INVENTORY_VEHICLE_MEDIUM_MAGAZINES
    };
    class TransportItems {
        INVENTORY_VEHICLE_MEDIUM_ITEMS
    };
    class TransportBackpacks {
        INVENTORY_VEHICLE_HELO_BAGS
    };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            allowedPositions[] = {"driver", "commander", {"turret", "all"}};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            masterPositions[] = {"driver"};
            connectedByDefault = 1;
        };
    };
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "commander", {"turret", "all"}};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    displayname = "Boeing CH-47 Chinook (5/24)";
    
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\chinook\ch47_ext_1_co.paa",
        "\z\socomd\addons\data\chinook\ch47_ext_2_co.paa",
        "\z\socomd\addons\data\chinook\ch47f_nalepky_ca.paa",
        "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
    };    
};