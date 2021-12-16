
class Heli_Transport_01_base_F; // Helicopter_Base_H
class SensorTemplatePassiveRadar;
class VehicleSystemsTemplateLeftPilot;
class 
class vtx_H60_base: Heli_Transport_01_base_F {
    class AnimationSources;
    class Wheels;
}; // Heli_Transport_01_base_F
class vtx_MH60M: vtx_H60_base{
    class Components;
    class AnimationSources:AnimationSources{
        class Fuelprobe_Show;
        
        class FLIR_HIDE;
        
        class RADAR_HIDE;
        class Cockpitdoors_Hide;
    };
    class Wheels:Wheels{
        class Wheel_1;
        class Wheel_2;
        class Wheel_3;
    };
};
class vtx_uh60M : vtx_H60_base {
    class Wheels:Wheels{
        class Wheel_1;
        class Wheel_2;
        class Wheel_3;
    };
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
    fuelConsumptionRate = 0.28; 
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
            "\z\socomd\addons\data\S-70A-9 Australia\Hull Tail_Aussie.paa"
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
    class Wheels : Wheels {
        class Wheel_1:Wheel_1 {
            maxBrakeTorque = 2800;
        };
        class Wheel_3:Wheel_3 {
            maxBrakeTorque = 1400;
        };
    };
};
class SOCOMD_WARRIOR_B:vtx_MH60M{
    class Wheels : Wheels {
        class Wheel_1:Wheel_1 {
            maxBrakeTorque = 2800;
        };
        class Wheel_3:Wheel_3 {
            maxBrakeTorque = 1400;
        };
    };
    memoryPointDriverOptics = "slingcam";
    delete vtx_templateFLIR;
    
    class PilotCamera
    {
        class OpticsIn
        {
            class Wide
            {
                opticsDisplayName="W";
                initAngleX=0;
                minAngleX=0;
                maxAngleX=0;
                initAngleY=0;
                minAngleY=0;
                maxAngleY=0;
                initFov=0.5;
                minFov=0.5;
                maxFov=0.5;
                directionStabilized=1;
                visionMode[]=
                {
                    "Normal",
                    "NVG"
                };
                thermalMode[]={0,1};
                gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
            };
            showMiniMapInOptics=0;
            showUAVViewpInOptics=0;
            showSlingLoadManagerInOptics=1;
        };
        minTurn=0;
        maxTurn=0;
        initTurn=0;
        minElev=80;
        maxElev=80;
        initElev=80;
        maxXRotSpeed=0.5;
        maxYRotSpeed=0.5;
        pilotOpticsShowCursor=1;
        controllable=0;
    };
    delete VTX_H60_HDTS_Pilot;
    delete VTX_H60_HDTS_Copilot;
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
    fuelConsumptionRate = 0.28; 
    driverCanSee = CanSeeAll; 
    crew = UNIT_SOCOMD_PILOT; 
    cost = 40000; 
    threat[] = {1.0,0.9,0.9}; 
    driverWeaponsInfoType = "";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
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
        class Cockpitdoors_Hide {
            source="user";
            animPeriod=1;
            initPhase=0;
        };
        class Fuelprobe_Show:Fuelprobe_Show{
            source="user";
            animPeriod=1;
            initPhase=0;
        };
        
        class FLIR_HIDE {
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