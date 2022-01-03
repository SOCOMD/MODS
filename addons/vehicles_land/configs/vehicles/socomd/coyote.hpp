#define COYOTE_FLAG_ACTION \
class UserActions : UserActions{\
    class Flag1_Show {\
        condition = "(getForcedFlagTexture this == """") AND (driver this == player) AND (alive this)";\
        displayName = "Raise Flag";\
        onlyForPlayer = 1;\
        position = "";\
        priority = 2.9;\
        radius = 5;\
        shortcut = "";\
        showWindow = 0;\
        statement = "this forceFlagTexture ""\z\socomd\addons\data\data\adfu_flag_co.paa"";";\
        textToolTip = "";\
    };\
};
////////////////////////////////////////////////////////////////////////////////
// SOV-CD
class UK3CB_BAF_Jackal_Base;
class UK3CB_BAF_Coyote_L111A1_Base : UK3CB_BAF_Jackal_Base{
    class UserActions;
};
class UK3CB_BAF_Coyote_L134A1_Base : UK3CB_BAF_Jackal_Base{
    class UserActions;
};
class UK3CB_BAF_Coyote_Passenger_L111A1_D : UK3CB_BAF_Coyote_L111A1_Base {};
class UK3CB_BAF_Coyote_Passenger_L111A1_W : UK3CB_BAF_Coyote_Passenger_L111A1_D {};
class UK3CB_BAF_Coyote_Passenger_L134A1_D : UK3CB_BAF_Coyote_L134A1_Base {};
class UK3CB_BAF_Coyote_Passenger_L134A1_W : UK3CB_BAF_Coyote_Passenger_L134A1_D {};
class SOCOMD_SOV_HMG_D : UK3CB_BAF_Coyote_Passenger_L111A1_D {
    //armor = 3000;
    //armorStructural = 20;
    //explosionShielding = 0.0005;
    //damageResistance = 0.03099;
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (M2) (3/8)";
    faction = FACTION_STR;
    vehicleclass = "Car";

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN, UNIT_SOCOMD_CREWMAN};

    transportMaxBackpacks = "30";
    transportMaxWeapons = "60";
    transportMaxMagazines = "600";

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

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_des_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

class SOCOMD_SOV_HMG_W : UK3CB_BAF_Coyote_Passenger_L111A1_W {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (M2) (3/8)";
    faction = FACTION_STR;
    vehicleclass = "Car";
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

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
    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_cam_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

class SOCOMD_SOV_GMG_D : UK3CB_BAF_Coyote_Passenger_L134A1_D {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (GMG) (3/8) ";
    faction = FACTION_STR;
    vehicleclass = "Car";
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    transportMaxBackpacks = "30";
    transportMaxWeapons = "60";
    transportMaxMagazines = "600";

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

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS_GMG
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_des_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

class SOCOMD_SOV_GMG_W : UK3CB_BAF_Coyote_Passenger_L134A1_W {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO (GMG) (3/8) ";
    faction = FACTION_STR;
    vehicleclass = "Car";
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

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

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS_GMG
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_cam_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

// Logistic Variants

class UK3CB_BAF_Coyote_Logistics_L111A1_D : UK3CB_BAF_Coyote_Passenger_L111A1_D {};
class UK3CB_BAF_Coyote_Logistics_L111A1_W : UK3CB_BAF_Coyote_Logistics_L111A1_D {};
class UK3CB_BAF_Coyote_Logistics_L134A1_D : UK3CB_BAF_Coyote_Passenger_L134A1_D {};
class UK3CB_BAF_Coyote_Logistics_L134A1_W : UK3CB_BAF_Coyote_Logistics_L134A1_D {};
class SOCOMD_SOV_logistics_HMG_D : UK3CB_BAF_Coyote_Logistics_L111A1_D {

    //armor = 3000;
    //armorStructural = 20;
    //explosionShielding = 0.0005;
    //damageResistance = 0.03099;
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO Logistics (M2) (3/3)";
    faction = FACTION_STR;
    vehicleclass = "Car";
    TRANSPORT_SUPPLIES

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN, UNIT_SOCOMD_CREWMAN};

    transportMaxBackpacks = "30";
    transportMaxWeapons = "60";
    transportMaxMagazines = "600";

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
    class ace_cargo {       
        class Cargo {
            class ACE_Wheel {
                type = "ACE_Wheel";
                amount = 3;
            };
        }; 
    };

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_des_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

class SOCOMD_SOV_logistics_HMG_W : UK3CB_BAF_Coyote_Logistics_L111A1_W {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO Logistics (M2) (3/3)";
    faction = FACTION_STR;
    vehicleclass = "Car";
    TRANSPORT_SUPPLIES
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

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
    class ace_cargo {       
        class Cargo {
            class ACE_Wheel {
                type = "ACE_Wheel";
                amount = 3;
            };
        }; 
    };
    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_cam_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

class SOCOMD_SOV_logistics_GMG_D : UK3CB_BAF_Coyote_Logistics_L134A1_D {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO Logistics (GMG) (3/3) ";
    faction = FACTION_STR;
    vehicleclass = "Car";
    TRANSPORT_SUPPLIES
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

    transportMaxBackpacks = "30";
    transportMaxWeapons = "60";
    transportMaxMagazines = "600";

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
    class ace_cargo {       
        class Cargo {
            class ACE_Wheel {
                type = "ACE_Wheel";
                amount = 3;
            };
        }; 
    };

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS_GMG
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_des_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};

class SOCOMD_SOV_logistics_GMG_W : UK3CB_BAF_Coyote_Logistics_L134A1_W {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    forceInGarage = 1;
    author = AUTHOR_STR;
    displayname = "SOV-CDO Logistics (GMG) (3/3) ";
    faction = FACTION_STR;
    vehicleclass = "Car";
    TRANSPORT_SUPPLIES
    fuelCapacity = 35;
    ace_refuel_fuelCapacity = 50;

    crew = UNIT_SOCOMD_CREWMAN;
    typicalCargo[] = {UNIT_SOCOMD_CREWMAN};
    class ace_cargo {       
        class Cargo {
            class ACE_Wheel {
                type = "ACE_Wheel";
                amount = 3;
            };
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

    class TransportWeapons {
        INVENTORY_VEHICLE_LARGE_WEAPONS
    };

    class TransportMagazines {
        INVENTORY_VEHICLE_LARGE_MAGAZINES
        SOV_CREW_GUNS_GMG
    };

    class TransportItems {
        INVENTORY_VEHICLE_LARGE_ITEMS
    };

    class TransportBackpacks {
        INVENTORY_VEHICLE_LARGE_BACKPACKS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\sov\jackal_base_aus_cam_co.paa",
        "\z\socomd\addons\data\sov\Jackal_mount_aus_co.paa",
        "\z\socomd\addons\data\sov\Jackal_adds_aus_co.paa",
        "\z\socomd\addons\data\sov\jackal_bar_aus_co.paa",
        "","",""
    };
    COYOTE_FLAG_ACTION
};