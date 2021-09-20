class AllVehicles;
class Air : AllVehicles {
	ace_refuel_flowRate = 2;
};

class Helicopter_Base_H;
class MELB_base : Helicopter_Base_H {
	class Hitpoints;
	class Components;
    class Turrets;
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
	class Turrets : Turrets {
        class CopilotTurret;
    };
    class Components : Components {
		class TransportPylonsComponent {
			class pylons {
                class R_Rockets_12x;
				class R_Rockets_4x;
				class R_Rockets_3x;
				
				class R_HellfireRack_R_slot;
				class R_HellfireRack_L_slot;
                class L_HellfireRack_R_slot;
				class L_HellfireRack_L_slot;	
						
				class L_Rockets_3x;
				class L_Rockets_4x;
				class L_Rockets_12x;
            };
        };
    };
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