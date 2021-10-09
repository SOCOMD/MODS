
// Melb Heli
class MELB_base : Helicopter_Base_H {
    class Hitpoints;
    class Components;
    class Turrets;
};

class MELB_MH6M : MELB_base {
    class HitPoints : HitPoints {
        class HitHull;
        class HitEngine;
        class HitFuel;
        class HitAvionics;
        class HitGlass1;
        class HitHRotor;
        class HitMissiles;
        class HitTransmission;
        class HitVRotor;
    };
 };
class MELB_AH6M : MELB_base {
    //weapons[] = {"CUP_weapon_mastersafe","CUP_Vlmg_TwinM134_veh","CMFlareLauncher"};
    //magazines[] = {"CUP_2Rnd_pylonblank_M","CUP_8Rnd_pylonblank_M","CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M","CUP_1Rnd_pylonblank_M","168Rnd_CMFlare_Chaff_Magazine"};
    class Turrets : Turrets {
        class CopilotTurret;
    };
    
    class HitPoints : HitPoints {
        class HitHull;
        class HitEngine;
        class HitFuel;
        class HitAvionics;
        class HitGlass1;
        class HitHRotor;
        class HitMissiles;
        class HitTransmission;
        class HitVRotor;
    };
    class Components : Components {
        class TransportPylonsComponent {
            class pylons {
                class R_Rockets_12x;
                class R_Rockets_4x;
                class R_Rockets_3x;
                
                class R_HellfireRack_R_slot;
                class R_HellfireRack_L_slot;
                class L_HellfireRack_R_slot;
                class L_HellfireRack_L_slot;    
                        
                class L_Rockets_3x;
                class L_Rockets_4x;
                class L_Rockets_12x;
            };
        };
    };
}; 

////////////////////////////////////////////////////////////////////////////////
// FIREFLY / DRAGONFLY COMMON
// Melb little birds overriding vanilla
class SOCOMD_FIREFLY_A : MELB_MH6M {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;

    ace_fastroping_enabled = 1;
    ace_fastroping_ropeOrigins[] = {
        {-1.16, 0.78, -0.065},
        { 1.16, 0.78, -0.065}
    };
    displayname = "Firefly (2/6)";
    mass=1220; // higher makes controls more sensitive default: 1220
    hiddenSelections[] = {"camo1","d_sn"};
    typicalCargo[] = {SOCOMD_PILOT};
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
        INVENTORY_VEHICLE_HELO_BAGS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\ah6\ah6_hull_co.paa",
        "melb\data\decals\sn\blank_ca.paa"
    };
    magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
    weapons[] = {"CMFlareLauncher"};
    armor = 30;
    armorStructural = 4;
    class HitPoints : HitPoints {
        class HitHull : HitHull {
            material = -1;
            armor = 4.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
        };
        class HitEngine : HitEngine {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitFuel : HitFuel {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitAvionics : HitAvionics {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            material = -1;
        };
        class HitGlass1 : HitGlass1 {
            armor = 1.0;
            passThrough = 1.0;
            explosionShielding = 0.0;
            minimalHit = 0.1;
            material = -1;
        };
        class HitHRotor : HitHRotor {
            armor = 8.0;
            passThrough = 0.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitVRotor : HitVRotor {
            armor = 4.0;
            passThrough = 0.0;
            explosionShielding = 5.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitMissiles : HitMissiles {
            armor = 2.0;
            passThrough = 1.0;
            explosionShielding = 0.0;
            minimalHit = 0.1;
            material = -1;
        };
        class HitTransmission : HitTransmission {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
    };
};

class SOCOMD_DRAGONFLY_A : MELB_AH6M {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "Dragonfly (2/1)";
    typicalCargo[] = {SOCOMD_PILOT};
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
    mass=1220; // higher makes controls more sensitive default: 1220
    hiddenSelections[] = {"camo1","d_sn"};
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\ah6\ah6_hull_co.paa",
        "melb\data\decals\sn\blank_ca.paa"
    };
    armor = 30;
    armorStructural = 4;
    magazines[] = {"CUP_2Rnd_pylonblank_M","CUP_8Rnd_pylonblank_M","CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M","CUP_1Rnd_pylonblank_M","168Rnd_CMFlare_Chaff_Magazine"};
    weapons[] = {"CUP_weapon_mastersafe","CUP_Vlmg_TwinM134_veh","CMFlareLauncher"};
  
    
    class AcreIntercoms { 
        class Intercom_1 { 
            displayName = "Crew Intercom"; 
            shortName = "Crew"; 
            allowedPositions[] = {"driver", "gunner", "copilot"}; 
            disabledPositions[] = {{"Turret", {0,0}, {1}, {2}}}; 
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
    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret {
            weapons[] = {"CUP_Laserdesignator_mounted"};
            magazines[] = {"Laserbatteries"};
        };
    };
    
    class Components : Components {
        class TransportPylonsComponent {
            UIPicture = "melb\data\ui\melb_eden_ca.paa";
            class pylons {
                // Keep
                class R_Pylon {
                    hardpoints[] = {"RightMount_MELB_SOCOMD"};
                    attachment = "";
                    maxweight = 800;
                    UIposition[] = {0.125,0.4};
                };

                
                class R_Rockets_12x {
                    hardpoints[] = {"12x_Rockets_MELB"};
                    attachment = "";
                    priority = 3;
                    maxweight = 300;
                    UIposition[] = {99,99};
                };
                class R_Rockets_4x: R_Rockets_12x {
                    hardpoints[] = {"4x_Rockets_MELB"};
                    attachment = "";
                    priority = 2;
                    maxweight = 200;
                    UIposition[] = {99,99};
                };
                
                class R_Rockets_3x: R_Rockets_12x {
                    hardpoints[] = {"3x_Rockets_MELB"};
                    attachment = "";
                    priority = 1;
                    maxweight = 200;
                    UIposition[] = {99,99};
                };
                
                class R_HellfireRack_R_slot: R_Pylon {
                    turret[] = {"CopilotTurret"};
                    hardpoints[] = {"HellfireRail_MELB"};
                    attachment = "";
                    maxweight = 80;
                    UIposition[] = {99,99};
                };
                class R_HellfireRack_L_slot: R_HellfireRack_R_slot {
                    UIposition[] = {99,99};
                };
            
                // keep x2
                class R_Minigun: R_Pylon {
                    hardpoints[] = {"Right_MinigunMount_MELB"};
                    attachment = "Pylon_R_GUN_MELB_SOCOMD";
                    priority = 5;
                    maxweight = 100;
                    UIposition[] = {0.225,0.325};
                };
                class L_Minigun: R_Minigun {
                    hardpoints[] = {"Left_MinigunMount_MELB"};
                    attachment = "Pylon_L_GUN_MELB_SOCOMD";
                    UIposition[] = {0.415,0.325};
                };

                

                class L_HellfireRack_R_slot: R_HellfireRack_R_slot {
                    UIposition[] = {99,99};
                    mirroredMissilePos = 6;
                };
                class L_HellfireRack_L_slot: R_HellfireRack_R_slot {
                    UIposition[] = {99,99};
                    mirroredMissilePos = 5;
                };    
                        
                class L_Rockets_3x: R_Rockets_3x {
                    hardpoints[] = {"3x_Rockets_MELB"};
                    UIposition[] = {99,99};
                    priority = 1;
                    mirroredMissilePos = 4;
                };
                
                class L_Rockets_4x: R_Rockets_4x {
                    hardpoints[] = {"4x_Rockets_MELB"};
                    UIposition[] = {99,99};
                    priority = 2;
                    mirroredMissilePos = 3;
                };
                class L_Rockets_12x: R_Rockets_12x {
                    hardpoints[] = {"12x_Rockets_MELB"};
                    UIposition[] = {99,99};
                    priority = 3;
                    mirroredMissilePos = 2;
                };

                // keep
                class L_Pylon: R_Pylon {
                    hardpoints[] = {"LeftMount_MELB_SOCOMD"};
                    UIposition[] = {0.4925,0.4};
                    mirroredMissilePos = 1;
                };
                /*
                // this does remove the boxes if you comment out the above classes being deleted but it all goes wacky
                delete R_HellfireRack_R_slot;
                delete R_HellfireRack_L_slot;
                delete R_Rockets_3x;
                delete R_Rockets_4x;
                delete R_Rockets_12x;

                delete L_HellfireRack_R_slot;
                delete L_HellfireRack_L_slot;
                delete L_Rockets_3x;
                delete L_Rockets_4x;
                delete L_Rockets_12x;
                */

            };
            class presets {
                class empty {
                    displayName = "empty";
                    attachment[] = {};
                };
                delete M260HE_M134;
                delete M260HE_M134_GAU;
                delete GAU_M134_DAGR;
                delete Hellfires;
            };
        };
    };

    class HitPoints : HitPoints {
        class HitHull : HitHull {
            material = -1;
            armor = 4.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
        };
        class HitEngine : HitEngine {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitFuel : HitFuel {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitAvionics : HitAvionics {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            material = -1;
        };
        class HitGlass1 : HitGlass1 {
            armor = 0.7;
            passThrough = 1.0;
            explosionShielding = 0.0;
            minimalHit = 0.1;
            material = -1;
        };
        class HitHRotor : HitHRotor {
            armor = 8.0;
            passThrough = 0.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitVRotor : HitVRotor {
            armor = 4.0;
            passThrough = 0.0;
            explosionShielding = 5.0;
            minimalHit = 0.01;
            material = -1;
        };
        class HitMissiles : HitMissiles {
            armor = 2.0;
            passThrough = 1.0;
            explosionShielding = 0.0;
            minimalHit = 0.1;
            material = -1;
        };
        class HitTransmission : HitTransmission {
            armor = 6.0;
            passThrough = 1.0;
            explosionShielding = 1.0;
            minimalHit = 0.01;
            material = -1;
        };
    };
};