class CfgVehicles {
	class All;
	class AllVehicles: All
	{
		class ViewOptics;
		class NewTurret
		{
			class ViewGunner: ViewOptics
			{
				minFov = 0.75;
				maxFov = 0.75;
				initFov = 0.75;
			};
		};
	};
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class ViewPilot: ViewPilot
		{
			minFov = 0.75;
			maxFov = 0.75;
			initFov = 0.75;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
			};
		};
	};
	class Helicopter_Base_F: Helicopter{};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
					minFov = 0.75;
					maxFov = 0.75;
					initFov = 0.75;
				};
			};
		};
	};


	class land : AllVehicles {
		class NewTurret;
		class CargoTurret;
	};
	class man : land {
		class ViewCargo;
		class ViewOptics;
		class ViewPilot;
		class NewTurret : NewTurret {
			class ViewOptics;
			class ViewGunner;
		};
		class CargoTurret : CargoTurret {
			class ViewOptics;
			class ViewGunner;
		}
	};
	class CAManBase : man {
		// naked eye
		class ViewCargo : ViewCargo {
			// init is 0.75
			minFov = 0.75;
			maxFov = 0.75;
		};

		// idk what this is for
		class ViewOptics : ViewOptics {
			//init is 0.7
			initFov = 0.25;
			minFov = 0.25;
			maxFov = 0.25;
		};

		// pilot naked eye?
		class ViewPilot : ViewPilot {
			minFov = 0.75;
			maxFov = 0.75;
			speedZoomMaxSpeed = 0;
		};

		// just incase this gets used anywhere important
		class NewTurret : NewTurret {
			class ViewGunner : ViewGunner {
				// init 0.75
				minFov = 0.75;
				maxFov = 0.75;
			};
		};

		// this one stops us zooming in when looking down sights.
		class CargoTurret : CargoTurret {
			class ViewGunner : ViewGunner {
				// init 0.75
				minFov = 0.75;
				maxFov = 0.75;
			};
		};
	};
	#include "vehicles\base\medical.hpp"
};