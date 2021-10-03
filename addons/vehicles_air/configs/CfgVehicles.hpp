    
//////////////////////////////////////////////////////////////////////////////////
// Jet Misc
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
    class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
    class components;
};
class Eventhandlers;
////////////////////
class NoDust{};
class CfgVehicles {
    class Helicopter;

    class Helicopter_Base_F : Helicopter {
        class HitPoints;
        class Turrets;
        class AcreIntercoms;
        class AcreRacks;
    };

    class Helicopter_Base_H : Helicopter_Base_F {
        class HitPoints : HitPoints {
            class HitHull;
            class HitAvionics;
            class HitEngine;
            class HitFuel;

            class HitHRotor;
            class HitVRotor;

            class HitLGlass;
            class HitRGlass;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
        };

        class Turrets : Turrets {
            class MainTurret;
            class CopilotTurret;
            class LeftDoorGun;
            class RightDoorGun;
        };
    };
    ////////////////////////////////////////////////////////////////////////////////
    // Jet
    class Air;
    class Plane: Air
    {
        class HitPoints;
    };
    class Plane_Base_F: Plane
    {
        class AnimationSources;
        class HitPoints: HitPoints
        {
            class HitHull;
        };
        class Components;
        class ViewPilot;
    };
    class Ejection_Seat_Base_F;
    class Plane_Canopy_Base_F;
    class PlaneWreck;
    class Plane_Fighter_01_Base_F: Plane_Base_F
    {
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class IRSensorComponent: SensorTemplateIR
                    {
                        class AirTarget
                        {
                            minRange=1;
                            maxRange=10000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=1;
                        };
                        class GroundTarget
                        {
                            minRange=1;
                            maxRange=10000;
                            objectDistanceLimitCoef=1;
                            viewDistanceLimitCoef=1;
                        };
                        angleRangeHorizontal=360;
                        angleRangeVertical=360;
                        maxTrackableSpeed=400;
                    };
                    class VisualSensorComponent: SensorTemplateVisual
                    {
                        class AirTarget
                        {
                            minRange=1;
                            maxRange=10000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=1;
                        };
                        class GroundTarget
                        {
                            minRange=1;
                            maxRange=10000;
                            objectDistanceLimitCoef=1;
                            viewDistanceLimitCoef=1;
                        };
                        angleRangeHorizontal=90;
                        angleRangeVertical=90;
                        maxTrackableSpeed=100;
                        aimDown=1;
                        animDirection="mainGun";
                    };
                    class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
                    {
                    };
                    class ActiveRadarSensorComponent: SensorTemplateActiveRadar
                    {
                        class AirTarget
                        {
                            minRange=20000;
                            maxRange=20000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=-1;
                        };
                        class GroundTarget
                        {
                            minRange=10000;
                            maxRange=10000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=-1;
                        };
                        typeRecognitionDistance=8000;
                        angleRangeHorizontal=45;
                        angleRangeVertical=45;
                        groundNoiseDistanceCoef=0.2;
                    };
                    class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
                    {
                        class AirTarget
                        {
                            minRange=20000;
                            maxRange=20000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=-1;
                        };
                        class GroundTarget
                        {
                            minRange=20000;
                            maxRange=20000;
                            objectDistanceLimitCoef=-1;
                            viewDistanceLimitCoef=-1;
                        };
                        maxTrackableATL=100;
                        maxTrackableSpeed=60;
                        angleRangeHorizontal=60;
                        angleRangeVertical=180;
                    };
                    class LaserSensorComponent: SensorTemplateLaser
                    {
                    };
                    class NVSensorComponent: SensorTemplateNV
                    {
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
            {
                class Components
                {
                    class SensorDisplay
                    {
                        componentType="SensorsDisplayComponent";
                        range[]={25000,15000,10000,5000};
                        resource="RscCustomInfoSensors";
                    };
                };
            };
            class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
            {
                class Components
                {
                    class SensorDisplay
                    {
                        componentType="SensorsDisplayComponent";
                        range[]={25000,15000,10000,5000};
                        resource="RscCustomInfoSensors";
                    };
                };
            };
        };
        class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName="WFOV";
                    initAngleX=0;
                    minAngleX=0;
                    maxAngleX=0;
                    initAngleY=0;
                    minAngleY=0;
                    maxAngleY=0;
                    initFov="(0.25 / 0.4)"; //1x
                    minFov="(0.25 / 0.4)";
                    maxFov="(0.25 / 0.4";
                    directionStabilized=1;
                    visionMode[]=
                    {
                        "Normal",
                        "NVG",
                        "Ti"
                    };
                    thermalMode[]={0,1};
                    gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[]=
                    {
                        "OpticsCHAbera2",
                        "OpticsBlur2"
                    };
                };
                class Medium: Wide
                {
                    opticsDisplayName="MFOV";
                    initFov="(0.25  / 2.1)"; //5x
                    minFov="(0.25  / 2.1)";
                    maxFov="(0.25  / 2.1)";
                    gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName="NFOV";
                    initFov="(0.25  / 6.25)"; //15x
                    minFov="(0.25  / 6.25)";
                    maxFov="(0.25  / 6.25)";
                    gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class SuperNarrow: Wide
                {
                    opticsDisplayName="SNFOV";
                    initFov="(0.25  / 10.4)"; //25x
                    minFov="(0.25  / 10.4)";
                    maxFov="(0.25  / 10.4)";
                    gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class 2xSuperNarrow: Wide
                {
                    opticsDisplayName="2xSNFOV";
                    initFov="(0.25  / 20.85)"; //50x
                    minFov="(0.25  / 20.85)";
                    maxFov="(0.25  / 20.85)";
                    gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class 3xSuperNarrow: Wide
                {
                    opticsDisplayName="3xSNFOV";
                    initFov="(0.25  / 31.25)"; //75x
                    minFov="(0.25  / 31.25)";
                    maxFov="(0.25  / 31.25)";
                    gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
            };
        };
    };
    #include "vehicles\socomd\firefly.hpp"
    #include "vehicles\socomd\hurricane.hpp"
    #include "vehicles\socomd\nomad.hpp"
    #include "vehicles\socomd\warrior.hpp"
};