// BMP 1
class CUP_Vacannon_2A28 : CUP_Vacannon_D10 {
	// make it prefer the main cannon at closer ranges before switching to m2
	minRangeProbab = 0.3;
	minRange = 1;
	midRangeProbab = 0.63;
	midRange = 150;
	maxRangeProbab = 0.58;
	maxRange = 500;
	class close : player {
		midRange = 200; // original 500;
	};
};

class CUP_Vacannon_2A42_veh : CannonCore {
	canLock = 1;
	class close : LowROF {
		midRange = 200;
	};
};