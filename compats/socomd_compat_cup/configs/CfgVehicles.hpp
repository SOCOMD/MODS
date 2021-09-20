class CfgVehicles {
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
			
		};
	};
    // Base
    //#include "vehicles\base\imports.hpp"
    //#include "vehicles\base\zu23.hpp"
    #include "vehicles\base\helicopters.hpp"
    #include "vehicles\base\trucks.hpp"
    //#include "vehicles\base\zsu23.hpp"
    //#include "vehicles\base\datsun_pk.hpp"
    //#include "vehicles\base\uaz.hpp"
    //#include "vehicles\base\offroad_armed.hpp"
    //#include "vehicles\base\kord.hpp"
    //#include "vehicles\base\tunguska.hpp"
    //#include "vehicles\base\apc.hpp"

    // Override
    // AI
    //#include "vehicles\override\zu23.hpp"
    //#include "vehicles\override\zsu23.hpp"
   //#include "vehicles\override\taki_malitia.hpp"
   //#include "vehicles\override\taki_army.hpp"
   //#include "vehicles\override\uh1h.hpp"
   //#include "vehicles\override\dshkm.hpp"
   //#include "vehicles\override\datsun_pk.hpp"
   //#include "vehicles\override\uaz.hpp"
   //#include "vehicles\override\offroad_armed.hpp"
   //#include "vehicles\override\kord.hpp"
   //#include "vehicles\override\tunguska.hpp"
   //#include "vehicles\override\apc.hpp"

    // Player
    //#include "vehicles\override\firefly.hpp"
    #include "vehicles\override\hurricane.hpp"
    #include "vehicles\override\nomad.hpp"
    //#include "vehicles\override\warrior.hpp"
    #include "vehicles\override\ships.hpp"
    #include "vehicles\override\trucks.hpp"
	#include "vehicles\override\coyote.hpp"
};