class NoDust{};

class CfgVehicles  {
	//MAN
	class Man;
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

	class Land;
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

		class AcreIntercoms : AcreIntercoms {
			class Intercom_1;
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
	#include "vehicles\base\offroad_armed.hpp"
	#include "vehicles\base\csat_hmg.hpp"
	#include "vehicles\base\karatel.hpp"
	#include "vehicles\base\lsv_mk2.hpp"
	#include "vehicles\base\structures.hpp"

	#include "vehicles\boxes\qstores.hpp"
	#include "vehicles\boxes\supply.hpp"

	#include "vehicles\override\extensions.hpp"
	#include "vehicles\override\flags.hpp"
	#include "vehicles\override\socomd_men_backpacks.hpp"
	#include "vehicles\override\offroad_armed.hpp"
	#include "vehicles\override\csat_hmg.hpp"
	#include "vehicles\override\karatel.hpp"
	#include "vehicles\override\lsv_mk2.hpp"
};


