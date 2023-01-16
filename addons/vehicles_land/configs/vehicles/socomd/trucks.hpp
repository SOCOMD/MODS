
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
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 20000;
    // threat[] = {0.4,0.1,0.05};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
    TRANSPORT_SUPPLIES
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
class rhsusf_M977A4_AMMO_usarmy_d;
class SOCOMD_TRUCK_AMMO_A : rhsusf_M977A4_AMMO_usarmy_d {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Ammo (1/2)";
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 10000;
    // threat[] = {0.4,0.1,0.05};
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
    TRANSPORT_SUPPLIES
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
    HiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\hemtt\CAB_CO_AMCU.paa",
        "\z\socomd\addons\data\hemtt\CARGO_AMCU_CO.paa",
        "\z\socomd\addons\data\hemtt\CHASSIS_amcu_CO.paa"
    };
};

////////////////////////////////////////////////////////////////////////////////
// FUEL
class rhsusf_M978A4_usarmy_d;
class SOCOMD_TRUCK_FUEL_A : rhsusf_M978A4_usarmy_d {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Fuel (1/2)";
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 20000;
    // threat[] = {0.4,0.1,0.05};
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
    TRANSPORT_SUPPLIES

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
    HiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\hemtt\CAB_CO_AMCU.paa",
        "\z\socomd\addons\data\hemtt\FUEL_amcu_CO.paa",
        "\z\socomd\addons\data\hemtt\CHASSIS_amcu_CO.paa"
    };
};

////////////////////////////////////////////////////////////////////////////////
// REPAIR
class rhsusf_M977A4_REPAIR_usarmy_d;
class SOCOMD_TRUCK_REPAIR_A : rhsusf_M977A4_REPAIR_usarmy_d {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Repair (1/2)";
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 20000;
    ace_cargo_space = 20;
    // threat[] = {0.4,0.1,0.05};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };

    TRANSPORT_SUPPLIES

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
    HiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\hemtt\CAB_CO_AMCU.paa",
        "\z\socomd\addons\data\hemtt\CARGO_AMCU_CO.paa",
        "\z\socomd\addons\data\hemtt\CHASSIS_amcu_CO.paa"
    };
};

////////////////////////////////////////////////////////////////////////////////
// CARGO
/*
class rhsusf_M977A4_usarmy_d;
class SOCOMD_TRUCK_CARGO_A : rhsusf_M977A4_usarmy_d {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Truck Cargo (1/2)";
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 20000;
    ace_cargo_space = 20;
    // threat[] = {0.4,0.1,0.05};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
    TRANSPORT_SUPPLIES

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
    HiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\hemtt\CAB_CO_AMCU.paa",
        "\z\socomd\addons\data\hemtt\CARGO_AMCU_CO.paa",
        "\z\socomd\addons\data\hemtt\CHASSIS_amcu_CO.paa"
    };
};
*/

class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom;
class SOCOMD_TRUCK_CARGO_D_B : rhsusf_M1084A1R_SOV_M2_D_fmtv_socom {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "SOV-CARGO (2/1)";
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 20000;
    // threat[] = {0.4,0.1,0.05};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
    TRANSPORT_SUPPLIES

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
    HiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\fmtv\FMTV_Cab_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Chassis_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_wheel_d_co.paa",
        "\z\socomd\addons\data\fmtv\FMTV_25TRear_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Canvas1_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_BKIT_D_CO.paa",
        "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
        "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Chassis1_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_5TRear_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Canvas2_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Shelter_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Hospital_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_5TRearLHC_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Chassis2_D_CO.paa",
        "\z\socomd\addons\data\fmtv\fmtv_sovchassis_co.paa",
        "\z\socomd\addons\data\fmtv\fmtv_sovcab_co.paa",
        "\z\socomd\addons\data\fmtv\fmtv_sovrear_co.paa",
        "\z\socomd\addons\data\fmtv\FMTV_SOVKit_CO.paa",
        "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        class Turrets: Turrets{
            
            class CargoTurret_01: CargoTurret
            {
                weapons[] = {"rhsusf_weap_DummyLauncher"};
                gunnerAction = "passenger_inside_8";
                gunnerName = "Passenger (Front)";
                gunnerGetInAction = "GetInMRAP_01_cargo";
                gunnerGetOutAction = "GetOutMRAP_01";
                memoryPointsGetInGunner = "pos codriver";
                memoryPointsGetInGunnerDir = "pos codriver dir";
                memoryPointGunnerOptics = "";
                gunnerDoor = "Door_RF";
                proxyIndex = 1;
                maxTurn = 75;
                minTurn = -75;
                maxElev = 45;
                minElev = -16;
                class dynamicViewLimits{};
                selectionFireAnim = "";
                class Hitpoints{};
            };
            class M2_Turret: M2_Turret{
                magazines[] = {"rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_mag_Tracer_Red"};
            };
        };
};


// Logistics

class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom;
class SOCOMD_TRUCK_LOGI_D : rhsusf_M1078A1R_SOV_M2_D_fmtv_socom {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "SOV-LOGI (2/3)";
    fuelCapacity = 60;
    ace_refuel_fuelCapacity = 120;
    // cost = 10000;
    ace_cargo_space = 20;
    // threat[] = {0.8,0.7,0.3};
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
    TRANSPORT_SUPPLIES

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
    HiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\fmtv\FMTV_Cab_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Chassis_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_wheel_d_co.paa",
        "\z\socomd\addons\data\fmtv\FMTV_25TRear_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Canvas1_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_BKIT_D_CO.paa",
        "rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
        "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Chassis1_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_5TRear_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Canvas2_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Shelter_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Hospital_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_5TRearLHC_D_CO.paa",
        "\z\socomd\addons\data\fmtv\FMTV_Chassis2_D_CO.paa",
        "\z\socomd\addons\data\fmtv\fmtv_sovchassis_co.paa",
        "\z\socomd\addons\data\fmtv\fmtv_sovcab_co.paa",
        "\z\socomd\addons\data\fmtv\fmtv_sovrear_co.paa",
        "\z\socomd\addons\data\fmtv\FMTV_SOVKit_CO.paa",
        "rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa"
        };
        
        class Turrets: Turrets{
            
			class CargoTurret_01: CargoTurret
			{
				weapons[] = {"rhsusf_weap_DummyLauncher"};
				gunnerAction = "passenger_inside_8";
				gunnerName = "Passenger (Front)";
				gunnerGetInAction = "GetInMRAP_01_cargo";
				gunnerGetOutAction = "GetOutMRAP_01";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				memoryPointGunnerOptics = "";
				gunnerDoor = "Door_RF";
				proxyIndex = 1;
				maxTurn = 75;
				minTurn = -75;
				maxElev = 45;
				minElev = -16;
				class dynamicViewLimits{};
				selectionFireAnim = "";
				class Hitpoints{};
			};
            class M2_Turret: M2_Turret{
                magazines[] = {"rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_mag_Tracer_Red","rhs_mag_200rnd_127x99_mag_Tracer_Red"};
            };
        };
};
