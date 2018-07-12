class NoDust{};

class CfgVehicles 
{
	//MAN
	class Man;
	class Civilian;
	class O_helipilot_F;
	class B_Soldier_02_f;
	class B_Soldier_05_f;
	class I_Soldier_04_F;
	class B_Diver_F;

	class Car;
	class Car_F : Car
	{
		class HitPoints;		
		class textureSources;
	};

	//LAND
	class bma3_bushmaster_base_F : Car_F
	{
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitBody;
			class HitEngine;
			class HitFuel;

			class HitLFWheel;
			class HitLF2Wheel;
			class HitLMWheel;
			class HitLBWheel;

			class HitRFWheel;
			class HitRF2Wheel;
			class HitRMWheel;
			class HitRBWheel;

			class HitLGlass;
			class HitRGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};

		class AcreIntercoms;

		class textureSources {
			class adf_001;
			class adf_002;
			class adf_003;
			class adf_004;
			class adf_005;
			class adf_006;
			class adf_007;
			class adf_008;
			class adf_009;
			class adf_010;
		};
	};

	class B_Quadbike_01_F;
	class Bicycle;

	//AIR
	class Helicopter;


	//SEA
	class B_Boat_Transport_01_F;

	//BACKPACKS
	//class tf_rt1523g_big_bwmod;
	class B_Kitbag_Base;

	//AMMOBOX
	class NATO_Box_Base;
	class Box_NATO_AmmoVeh_F;
	
	//FLAGS
	class FLAG_NATO_F;
	class FLAG_CSAT_F;
		
	#include "vehicles\fixes.hpp"
	#include "vehicles\land.hpp"
	#include "vehicles\air.hpp"
	#include "vehicles\ship.hpp"
	#include "vehicles\backpacks.hpp"
	#include "vehicles\men.hpp"
	#include "vehicles\boxes.hpp"
	#include "vehicles\other.hpp"

};
