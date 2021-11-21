    
////////////////////////////////////////////////////////////////////////////////
// HURRICANE

class RHS_AH64D_wd;
class SOCOMD_HURRICANE_A : RHS_AH64D_wd {
    
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    vehicleclass = "Air";
    forceInGarage = 1;
    crew = UNIT_SOCOMD_PILOT;
    cost = 40000;
    threat[] = {1.0,1.0,1.0};
    typicalCargo[] = {UNIT_SOCOMD_PILOT};
    class TransportWeapons {
        INVENTORY_VEHICLE_SMALL_WEAPONS
    };
    class TransportMagazines {
        INVENTORY_VEHICLE_SMALL_MAGAZINES
    };
    class TransportItems {
        INVENTORY_VEHICLE_SMALL_ITEMS
    };
    class TransportBackpacks {
        INVENTORY_VEHICLE_CAS_HELO_BAGS
    };
    // class HitPoints : HitPoints {
    //     class HitGlass1 : HitGlass1 {
    //         armor = 3.0;
    //     };
    //     class HitGlass2 : HitGlass2 {
    //         armor = 3.0;
    //     };
    //     class HitGlass3 : HitGlass3 {
    //         armor = 3.0;
    //     };
    //     class HitGlass4 : HitGlass4 {
    //         armor = 3.0;
    //     };
    //     class HitGlass5 : HitGlass5 {
    //         armor = 3.0;
    //     };
    //     class HitGlass6 : HitGlass6 {
    //         armor = 3.0;
    //     };
    // };
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "Crew";
            allowedPositions[] = {"driver", "gunner", "copilot"};
            limitedPositions[] = {};
            numLimitedPositions = 0;
            masterPositions[] = {"driver"};
            connectedByDefault = 1;
        };
    };
    class AcreRacks {
        class Rack_1 {
            allowedPositions[] = {"driver", "gunner", "copilot"};
            componentName = "ACRE_VRC110";
            displayName = "Dash";
            mountedRadio = "ACRE_PRC152";
            shortName = "Dash";
        };
    };
    displayname = "AH-64D Apache (2/0)";
    fuelCapacity = 1420;
    fuelConsumptionRate = 0.30;
    mass=8000; // Higher values improve handling default: 8000
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3"
    };

    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\ah64\ah64d_body_co.paa",
        "\z\socomd\addons\data\ah64\ah64d_details_co.paa",
        ""
    };
    // class Components: Components {
    //     class TransportPylonsComponent : TransportPylonsComponent {
    //         class pylons {
    //             class pylonLeft1 {
    //                 attachment = "";
    //                 bay = 1;
    //                 hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};
    //                 priority = 5;
    //                 turret[] = {};
    //                 UIposition[] = {0.59,0.35};
    //             };
    //             class pylonLeft2 {
    //                 attachment = "";
    //                 bay = 1;
    //                 hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};                    
    //                 priority = 4;
    //                 turret[] = {"MainTurret"};
    //                 UIposition[] = {0.57,0.4};
    //             };
    //             class pylonRight1 {
    //                 attachment = "";
    //                 bay = 1;
    //                 hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};
    //                 mirroredMissilePos = 2;
    //                 priority = 5;
    //                 turret[] = {"MainTurret"};
    //                 UIposition[] = {0.08,0.4};
    //             };
    //             class pylonRight2 {
    //                 attachment = "";
    //                 bay = 1;
    //                 //hardpoints[] = {"DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_AH64","CUP_PylonPod_1Rnd_AGM65_Maverick_M"};
    //                 hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};
    //                 mirroredMissilePos = 1;
    //                 priority = 4;
    //                 turret[] = {};
    //                 UIposition[] = {0.06,0.35};
    //             };
    //             class pylonWingL {
    //                 //attachment = "CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M";
    //                 attachment = "";
    //                 bay = 1;
    //                 hardpoints[] = {"CUP_NATO_HELO_WINGTIP"};
    //                 priority = 5;
    //                 turret[] = {"MainTurret"};
    //                 UIposition[] = {0.61,0.3};
    //             };
    //             class pylonWingR {
    //                 //attachment = "CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M";
    //                 attachment = "";
    //                 bay = 1;
    //                 hardpoints[] = {"CUP_NATO_HELO_WINGTIP"};
    //                 mirroredMissilePos = 5;
    //                 priority = 5;
    //                 turret[] = {"MainTurret"};
    //                 UIposition[] = {0.04,0.3};
    //             };
    //         };
    //     };
    // };
};