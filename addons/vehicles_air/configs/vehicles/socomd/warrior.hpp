    
////////////////////////////////////////////////////////////////////////////////
// WARRIOR

// class B_Heli_Transport_01_F;

// #define WARRIOR_BASE(ID, SCOPE) \
// class SOCOMD_WARRIOR_##ID : B_Heli_Transport_01_F { \
//     scope = SCOPE; \
//     scopeCurator = SCOPE; \
//     editorCategory = SOCOMD_EdCat_Core; \
//     editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
//     side = WEST; \
//     author = AUTHOR_STR; \
//     faction = FACTION_STR; \
//     displayname = "S-70A-9 Blackhawk (4/8)"; \
//     vehicleclass = "Air"; \
//     forceInGarage = 1; \
//     fuelCapacity = 1360; \
//     fuelConsumptionRate = 0.28; \
//     driverCanSee = CanSeeAll; \
//     crew = SOCOMD_PILOT; \
//     cost = 40000; \
//     threat[] = {1.0,0.9,0.9}; \
//     typicalCargo[] = {SOCOMD_PILOT}; \
//     class TransportWeapons { \
//         INVENTORY_VEHICLE_DEFAULT_WEAPONS \
//     }; \
//     class TransportMagazines { \
//         INVENTORY_VEHICLE_MEDIUM_MAGAZINES \
//     }; \
//     class TransportItems { \
//         INVENTORY_VEHICLE_MEDIUM_ITEMS \
//     }; \
//     class TransportBackpacks { \
//         INVENTORY_VEHICLE_HELO_BAGS \
//     }; \
//     class AcreIntercoms { \
//         class Intercom_1 { \
//             displayName = "Crew Intercom"; \
//             shortName = "Crew"; \
//             allowedPositions[] = {"driver", "commander", {"turret", "all"}}; \
//             limitedPositions[] = {}; \
//             numLimitedPositions = 0; \
//             masterPositions[] = {"driver"}; \
//             connectedByDefault = 1; \
//         }; \
//     }; \
//     class AcreRacks { \
//         class Rack_1 { \
//             allowedPositions[] = {"driver", "commander", {"turret", "all"}}; \
//             componentName = "ACRE_VRC110"; \
//             displayName = "Dash"; \
//             mountedRadio = "ACRE_PRC152"; \
//             shortName = "Dash"; \
//         }; \
//     }; \
// };

// WARRIOR_BASE(A,SCOPE_PUBLIC)
// WARRIOR_BASE(B,SCOPE_PRIVATE)

// delete SOCOMD_WARRIOR_B;
// delete SOCOMD_WARRIOR_A;
class Heli_Transport_01_base_F; // Helicopter_Base_H
class vtx_H60_base: Heli_Transport_01_base_F {
    class AnimationSources;
}; // Heli_Transport_01_base_F
class vtx_MH60M: vtx_H60_base{
    class Components;
    class AnimationSources:AnimationSources{
        class Fuelprobe_Show;
        
        class FLIR_HIDE;
		class FLIR_BACK;
        
        class RADAR_HIDE;
        class Cockpitdoors_Hide;
    };
};
class vtx_uh60M : vtx_H60_base {
    class Components;
};
class SOCOMD_WARRIOR_A:vtx_uh60M {
    scope = SCOPE_PUBLIC; 
    scopeCurator = SCOPE_PUBLIC; 
    editorCategory = SOCOMD_EdCat_Core; 
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; 
    side = WEST; 
    author = AUTHOR_STR; 
    faction = FACTION_STR; 
    vehicleclass = "Air"; 
    forceInGarage = 1; 
    fuelCapacity = 1360; 
    fuelConsumptionRate = 0.14; 
    driverCanSee = CanSeeAll; 
    crew = UNIT_SOCOMD_PILOT; 
    cost = 40000; 
    threat[] = {1.0,0.9,0.9}; 
    hiddenSelectionsTextures[]=
        {   
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\z\socomd\addons\data\S-70A-9 Australia\Hull Main_Aussie.paa",
            "\z\socomd\addons\data\S-70A-9 Australia\Misc_Aussie.paa",
            "\z\socomd\addons\data\S-70A-9 Australia\Hull Tail_Aussie.paa",
            "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa",
            "", // "left_num_1",
            "", // "left_num_2",
            "", // "right_num_1",
            "", // "right_num_2",
            ""
    };
    typicalCargo[] = {SOCOMD_PILOT}; 
    class TransportWeapons { 
        INVENTORY_VEHICLE_SMALL_WEAPONS 
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
    // ace_fastroping_enabled = 1;
    // ace_fastroping_ropeOrigins[] = {
    //     {1.405, 2.031, 0.05}
    // };
    displayName="S-70A-9 Blackhawk (4/11)";
    icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
    picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
    
    class Components: Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
                class DatalinkSensorComponent: SensorTemplateDataLink{};
            };
        };
    };
};
class SOCOMD_WARRIOR_B:vtx_MH60M{
    
    class Components: Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
                class DatalinkSensorComponent: SensorTemplateDataLink{};
            };
        };
    };
    weapons[] = {"CMFlareLauncher"};
    magazines[] = {"60Rnd_CMFlareMagazine"};
    scope = SCOPE_PUBLIC; 
    scopeCurator = SCOPE_PUBLIC; 
    editorCategory = SOCOMD_EdCat_Core; 
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; 
    side = WEST; 
    author = AUTHOR_STR; 
    faction = FACTION_STR; 
    vehicleclass = "Air"; 
    forceInGarage = 1; 
    fuelCapacity = 1360; 
    fuelConsumptionRate = 0.14; 
    driverCanSee = CanSeeAll; 
    crew = UNIT_SOCOMD_PILOT; 
    cost = 40000; 
    threat[] = {1.0,0.9,0.9}; 
    driverWeaponsInfoType = "";
    hiddenSelectionsTextures[]=
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "\z\socomd\addons\data\S-70A-9 Australia\Hull Main_Aussie.paa",
            "\z\socomd\addons\data\S-70A-9 Australia\Misc_Aussie.paa",
            "\z\socomd\addons\data\S-70A-9 Australia\Hull Tail_Aussie.paa",
            "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa",
            "", // "left_num_1",
            "", // "left_num_2",
            "", // "right_num_1",
            "", // "right_num_2",
            ""
    };
    typicalCargo[] = {SOCOMD_PILOT}; 
    class TransportWeapons { 
        INVENTORY_VEHICLE_SMALL_WEAPONS 
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
    class AnimationSources:AnimationSources{
        class Fuelprobe_Show:Fuelprobe_Show{
            source="user";
            animPeriod=1;
            initPhase=0;
        };
        
        class FLIR_HIDE {
            source="user";
            animPeriod=1;
            initPhase=0;
        };

        class FLIR_BACK {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
        
        class RADAR_HIDE {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
    };
    // ace_fastroping_enabled = 1;
    // ace_fastroping_ropeOrigins[] = {
    //     {1.405, 2.031, 0.05}
    // };
    
    displayName="S-70A-9 Blackhawk FFV (4/10)";
    icon="\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
    picture="\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
};