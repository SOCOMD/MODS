
// Melb Heli
class RHS_MELB_base : Helicopter_Base_H {
    class Hitpoints;
    class Components;
    class Turrets;
};

class RHS_MELB_MH6M : RHS_MELB_base {
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
        class SensorsManagerComponent {
            class Components {
                class VisualSensorComponent : SensorTemplateVisual {
					class AirTarget {
                        minRange=1;
                          maxRange=4000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };
                    class GroundTarget{
                        minRange=1;
                        maxRange=4000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    allowsMarking           = 1;
					maxTrackableSpeed		= 70;
					animDirection			= "";
					angleRangeHorizontal	= 90;
					angleRangeVertical		= 90;
                    groundNoiseDistanceCoef	= -1;
					maxGroundNoiseDistance	= -1;
				};
                class IRSensorComponent : SensorTemplateIR {
					class AirTarget {
                        minRange=1;
                          maxRange=7000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };
                    class GroundTarget{
                        minRange=1;
                        maxRange=7000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    allowsMarking           = 1;
					animDirection			= "";
		    		angleRangeHorizontal	= 90;
					angleRangeVertical		= 90;
					typeRecognitionDistance	= -1;
					groundNoiseDistanceCoef	= -1;
		    		maxGroundNoiseDistance	= -1;
					minSpeedThreshold		= 0;
					maxSpeedThreshold		= 0;
					maxFogSeeThrough		= 0.95;
					minTrackableSpeed		= 0;
					maxTrackableSpeed		= 695;
                };
                class LaserSensorComponent : SensorTemplateLaser{
				
                    class GroundTarget{
                        minRange=1;
                        maxRange=7000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    allowsMarking           = 1;
					angleRangeHorizontal	= 180;
					angleRangeVertical		= 180;
                    groundNoiseDistanceCoef	= -1;
					maxGroundNoiseDistance	= -1;
                };
            };
        };
    };
 };
class RHS_MELB_AH6M : RHS_MELB_base {
    
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
    class AnimationSources;
   
    class Components : Components {
        class TransportPylonsComponent;
        class pylons;
        class SensorsManagerComponent {
            class Components {
                class VisualSensorComponent : SensorTemplateVisual {
					class AirTarget {
                        minRange=1;
                          maxRange=4000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };
                    class GroundTarget{
                        minRange=1;
                        maxRange=4000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    allowsMarking           = 1;
					maxTrackableSpeed		= 70;
					animDirection			= "";
					angleRangeHorizontal	= 90;
					angleRangeVertical		= 90;
                    groundNoiseDistanceCoef	= -1;
					maxGroundNoiseDistance	= -1;
				};
                class IRSensorComponent : SensorTemplateIR {
					class AirTarget {
                        minRange=1;
                          maxRange=7000;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=1;
                    };
                    class GroundTarget{
                        minRange=1;
                        maxRange=7000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    allowsMarking           = 1;
					animDirection			= "";
		    		angleRangeHorizontal	= 90;
					angleRangeVertical		= 90;
					typeRecognitionDistance	= -1;
					groundNoiseDistanceCoef	= -1;
		    		maxGroundNoiseDistance	= -1;
					minSpeedThreshold		= 0;
					maxSpeedThreshold		= 0;
					maxFogSeeThrough		= 0.95;
					minTrackableSpeed		= 0;
					maxTrackableSpeed		= 695;
                };
                class LaserSensorComponent : SensorTemplateLaser{
				
                    class GroundTarget{
                        minRange=1;
                        maxRange=7000;
                        objectDistanceLimitCoef=1;
                        viewDistanceLimitCoef=1;
                    };
                    allowsMarking           = 1;
					angleRangeHorizontal	= 180;
					angleRangeVertical		= 180;
                    groundNoiseDistanceCoef	= -1;
					maxGroundNoiseDistance	= -1;
                };
            };
        };
    };
}; 

////////////////////////////////////////////////////////////////////////////////
// FIREFLY / DRAGONFLY COMMON
// Melb little birds overriding vanilla
class SOCOMD_FIREFLY_A : RHS_MELB_MH6M {
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
    crew= UNIT_SOCOMD_PILOT;
    displayname = "MH-6M Little Bird (2/6)";
    mass=1220; // higher makes controls more sensitive default: 1220
    hiddenSelections[] = {"camo1","d_sn"};
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
        INVENTORY_VEHICLE_HELO_BAGS
    };
    hiddenSelectionsTextures[] = {
        "\z\socomd\addons\data\ah6\ah6_hull_co.paa",
        "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
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
            armor = 1.75;
            passThrough = 0.5;
            explosionShielding = 0.5;
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

class SOCOMD_DRAGONFLY_A : RHS_MELB_AH6M {
    scope = SCOPE_PUBLIC;
    scopeCurator = SCOPE_PUBLIC;
    editorCategory = SOCOMD_EdCat_Core;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
    side = WEST;
    author = AUTHOR_STR;
    faction = FACTION_STR;
    displayname = "AH-6M Little Bird (2/1)";
    crew= UNIT_SOCOMD_PILOT;
    typicalCargo[] = {UNIT_SOCOMD_PILOT};
    
    class Components : Components {
        class TransportPylonsComponent:TransportPylonsComponent{
            class pylons:pylons{
                class pylon1{
                    hardpoints[] = {"RHS_HP_MELB","RHS_HP_MELB_L"};
                    priority = 2;
                    attachment = "rhs_mag_M229_7";
                    maxweight = 1200;
                    UIposition[] = {0.625,0.2};
                    bay = -1;
                    turret[] = {};
                    hitpoint = "HitPylon1";
                };
                class pylon2: pylon1{
                    hardpoints[] = {"RHS_HP_MELB_M134"};
                    UIposition[] = {0.562,0.3};
                    priority = 1;
                    attachment = "rhs_mag_m134_pylon_3000";
                    turret[] = {};
                    hitpoint = "HitPylon2";
                };
                class pylon3: pylon2{
                    UIposition[] = {0.103,0.3};
                    mirroredMissilePos = 2;
                    attachment = "rhs_mag_m134_pylon_3000";
                    turret[] = {};
                    hitpoint = "HitPylon3";
                };
                class pylon4: pylon1{
                    hardpoints[] = {"RHS_HP_MELB","RHS_HP_MELB_R"};
                    UIposition[] = {0.04,0.2};
                    mirroredMissilePos = 1;
                    turret[] = {};
                    hitpoint = "HitPylon4";
                };
            };
        };
    };
    class AnimationSources: AnimationSources
    {
        class Addcrosshair
        {
            source = "user";
            animPeriod = 0;
            initPhase = 0;
        };
        class Addgunrack
        {
            source = "user";
            animPeriod = 1;
            initPhase = 1;
        };
        class Addfueltank
        {
            source = "user";
            animPeriod = 1;
            initPhase = 1;
        };
    };
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
        "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
    };
    armor = 30;
    armorStructural = 4;
   
    
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