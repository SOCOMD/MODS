// KORD
class CUP_KORD_Base : StaticMgWeapon {
    class Turrets;
};

class CUP_KORD_MiniTripod_Base : CUP_KORD_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_KORD_MiniTripod_Base_OCimport_01 : CUP_KORD_MiniTripod_Base { }; 
class CUP_KORD_MiniTripod_Base_OCimport_02 : CUP_KORD_MiniTripod_Base_OCimport_01 {};

class CUP_KORD_High_Base : CUP_KORD_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_KORD_High_Base_OCimport_01 : CUP_KORD_High_Base {};
class CUP_KORD_High_Base_OCimport_02 : CUP_KORD_High_Base_OCimport_01 { };