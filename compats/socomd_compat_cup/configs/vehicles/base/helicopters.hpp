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
        class LeftDoorGun;
        class RightDoorGun;
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

// UH1H taki army
// socomd heli
class CUP_Uh60_Base : Helicopter_Base_H {
    class HitMissiles;
	class AnimationSources;
};

// Melb Heli
class MELB_base : Helicopter_Base_H {
    class Components;
    class Turrets;
};
class MELB_AH6M : MELB_base {
	//weapons[] = {"CUP_weapon_mastersafe","CUP_Vlmg_TwinM134_veh","CMFlareLauncher"};
	//magazines[] = {"CUP_2Rnd_pylonblank_M","CUP_8Rnd_pylonblank_M","CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M","CUP_1Rnd_pylonblank_M","168Rnd_CMFlare_Chaff_Magazine"};
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
};