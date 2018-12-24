class CfgVehicles {

	////////////////////////////////////////////////////////////////////////////////
	//LAND VEHICLES

	/*
	Car_F
	Car
	LandVehicle
	Land
	*/
	
	#include "vehicles\Trucks.hpp"

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

	#include "vehicles\Firefly.hpp"
	#include "vehicles\Warrior.hpp"
	#include "vehicles\Nomad.hpp"
	#include "vehicles\Hurricane.hpp"
};