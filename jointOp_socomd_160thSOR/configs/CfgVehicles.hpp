class CfgVehicles {

	////////////////////////////////////////////////////////////////////////////////
	//LAND VEHICLES

	/*
	Car_F
	Car
	LandVehicle
	Land
	*/

	#include "vehicles\override_rhs\Trucks.hpp"

	////////////////////////////////////////////////////////////////////////////////
	//AIR VEHICLES

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

	#include "vehicles\override_rhs\firefly.hpp"
	#include "vehicles\override_rhs\warrior.hpp"
	#include "vehicles\override_rhs\nomad.hpp"
	#include "vehicles\override_rhs\hurricane.hpp"

	////////////////////////////////////////////////////////////////////////////////
	// Boxes

	#include "vehicles\boxes\qstore.hpp"
};