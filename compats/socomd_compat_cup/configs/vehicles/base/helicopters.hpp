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
class CUP_UH1H_base : Helicopter_Base_H {}; // needs left and right door gunner turret
class CUP_UH1H_base_OCimport_01 : CUP_UH1H_base { };
class CUP_UH1H_base_OCimport_02 : CUP_UH1H_base_OCimport_01 { };
class CUP_UH1H_slick_base : CUP_UH1H_base {};
class CUP_UH1H_slick_base_OCimport_01 : CUP_UH1H_slick_base {}
class CUP_UH1H_slick_base_OCimport_02 : CUP_UH1H_slick_base_OCimport_01 { };
class CUP_UH1H_armed_base : CUP_UH1H_base {};
class CUP_UH1H_gunship_base : CUP_UH1H_base {};

// socomd heli
class CUP_Uh60_Base : Helicopter_Base_H {
    class HitMissiles;
};