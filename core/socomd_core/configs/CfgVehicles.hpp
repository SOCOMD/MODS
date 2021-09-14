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

class CfgVehicles  {
	//MAN
	class Land;
	class Man : Land {
		skill=0.5;
	};
	class Civilian;
	class O_helipilot_F;
	class B_Soldier_02_f;
	class B_Soldier_05_f;
	class I_Soldier_04_F;
	class B_Diver_F;

	////////////////////////////////////////////////////////////////////////////////
	// Land

	class B_Quadbike_01_F;
	class Bicycle;


	class LandVehicle : Land {
		class Components;
	};

	class Car : LandVehicle {
		class Components : Components {
			class AICarSteeringComponent;
		};
	};

	class Car_F : Car {
		class HitPoints;
		class textureSources;
		class Turrets;
		class Components : Components {
			class AICarSteeringComponent : AICarSteeringComponent {

				convoyPIDWeights[] = {0.5, 0.0, 1.0};

				// controls working parameters of steering PID controller (Kp, Ki, Kd)
				steeringPIDWeights[] = { 2.0, 0.2, 0.0 };

				// controls working parameters of speed PID controller (Kp, Ki, Kd)
				speedPIDWeights[] = { 4.0, 0.5, 2.0 };

				// remapping of maxSpeed of vehicle, for fast vehicles we want to lower the used speed
				doRemapSpeed = true;
				remapSpeedRange[] = { 5.0, 60.0 };
				remapSpeedScalar[] = { 1.0, 0.66 };

				// prediction ahead is used for both steering and analysing of shape to modify the speed
				doPredictForward = true;
				predictForwardRange[] = { 0.5, 18 };

				// steer ahead is a point to steer to, saturated down to given range, in meters
				steerAheadSaturation[] = { 1, 5 };

				// set method of predicting safe speed
				// 0 - three angles method
				// 1 - wheel direction method
				// 2 - combined method
				speedPredictionMethod = 2;

				// three coef's to determine how much given angle should influence slowing down
				wheelAngleCoef = 0.7;
				forwardAngleCoef = 0.7;
				steeringAngleCoef = 1.2;
				differenceAngleCoef = 1.0;

				// for how long we allow the vehicle to be not moving, before it replans
				stuckMaxTime = 3.0;

				// overtaking is part of collision avoidance
				allowOvertaking = true;
				allowCollisionAvoidance = true;

				// allow using movement vector as direction (experimental)
				allowDrifting = false;

				// parameters of predictionMethod = 1
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.05;

				// how strong AI will turn when commanded left/right
				commandTurnFactor = 1.0;

				// AITankSteeringComponent only
				//allowTurnAroundInPoint = true;
			};
		};
	};

	////////////////////////////////////////////////////////////////////////////////
	// Helicopters
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
			class CopilotTurret;
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
	////////////////////////////////////////////////////////////////////////////////
	// Other

	//BACKPACKS
	class B_Kitbag_Base;

	//AMMOBOX
	class NATO_Box_Base;
	class Box_NATO_AmmoVeh_F;

	//FLAGS
	class FLAG_NATO_F;
	class FLAG_CSAT_F;

	////////////////////////////////////////////////////////////////////////////////
	// Includes

	#include "vehicles\base\backpack.hpp"
	#include "vehicles\base\bike.hpp"
	#include "vehicles\base\bushmaster.hpp"
	#include "vehicles\base\firefly.hpp"
	#include "vehicles\base\hurricane.hpp"
	#include "vehicles\base\land.hpp"
	#include "vehicles\base\nomad.hpp"
	#include "vehicles\base\ship.hpp"
	#include "vehicles\base\soldier.hpp"
	#include "vehicles\base\warrior.hpp"
	//#include "vehicles\base\offroad_armed.hpp"
	//#include "vehicles\base\csat_hmg.hpp"
	//#include "vehicles\base\karatel.hpp"
	//#include "vehicles\base\lsv_mk2.hpp"
	#include "vehicles\base\structures.hpp"

	#include "vehicles\boxes\qstores.hpp"
	#include "vehicles\boxes\supply.hpp"
	#include "vehicles\boxes\voidBox.hpp"

	#include "vehicles\override\backpack.hpp"
	#include "vehicles\override\extensions.hpp"
	#include "vehicles\override\flags.hpp"
	#include "vehicles\override\socomd_men_backpacks.hpp"
	//#include "vehicles\override\offroad_armed.hpp"
	//#include "vehicles\override\csat_hmg.hpp"
	//#include "vehicles\override\karatel.hpp"
	//#include "vehicles\override\lsv_mk2.hpp"
	#include "vehicles\override\atv.hpp"
};