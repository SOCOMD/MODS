class CfgVehicles {

	////////////////////////////////////////////////////////////////////////////////
	//LAND VEHICLES

	/*
	Car_F
	Car
	LandVehicle
	Land
	*/

	#include "vehicles\override_cup\trucks.hpp"

	////////////////////////////////////////////////////////////////////////////////
	//AIR VEHICLES

	/*
	Helicopter_Base_H
	Helicopter_Base_F
	Helicopter
	*/

	class Helicopter;

	class Helicopter_Base_F : Helicopter {
		class Turrets;
		class HitPoints;
		class Components;
	};

	class Helicopter_Base_H : Helicopter_Base_F {

		class Turrets : Turrets {
			class MainTurret;
			class CopilotTurret;
		};

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
	};

	#include "vehicles\override_cup\firefly.hpp"
	#include "vehicles\override_cup\warrior.hpp"
	#include "vehicles\override_cup\nomad.hpp"
	#include "vehicles\override_cup\hurricane.hpp"

	////////////////////////////////////////////////////////////////////////////////
	//SEA VEHICLES

	#include "vehicles\override_cup\ships.hpp"

	////////////////////////////////////////////////////////////////////////////////
	//BOXES

	#include "vehicles\boxes\qstore.hpp"
};