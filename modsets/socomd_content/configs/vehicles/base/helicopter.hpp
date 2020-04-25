class AllVehicles;
class Air : AllVehicles {
	ace_refuel_flowRate = 2;
};

class Helicopter_Base_H;
class MELB_base : Helicopter_Base_H {
	class Hitpoints;
};

class MELB_MH6M : MELB_base {
	class HitPoints : HitPoints {
		class HitHull;
		class HitEngine;
		class HitFuel;
		class HitAvionics;
		class HitGlass1;
		class HitHRotor;
		class HitMissiles;
		class HitTransmission;
		class HitVRotor;
	};
 };
class MELB_AH6M : MELB_base {
	class HitPoints : HitPoints {
		class HitHull;
		class HitEngine;
		class HitFuel;
		class HitAvionics;
		class HitGlass1;
		class HitHRotor;
		class HitMissiles;
		class HitTransmission;
		class HitVRotor;
	};
 };