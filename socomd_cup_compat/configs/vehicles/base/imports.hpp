// shared taki HMG
class StaticWeapon;
class StaticMGWeapon : StaticWeapon {
    class Turrets;
};
class CUP_DSHKM_base : StaticMGWeapon {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_DSHKM_MiniTripod_base : CUP_DSHKM_base { };
class CUP_DSHKM_base_OCimport_01 : CUP_DSHKM_base { };
class CUP_DSHKM_base_OCimport_02 : CUP_DSHKM_base_OCimport_01 {};
class CUP_DSHKM_MiniTripod_base_OCimport_01 : CUP_DSHKM_MiniTripod_base {};
class CUP_DSHKM_MiniTripod_base_OCimport_02 : CUP_DSHKM_MiniTripod_base_OCimport_01 {};

class StaticMortar;
class CUP_2b14_82mm_Base : StaticMortar { };

class Car_F;

// militia btr
class Wheeled_APC_F : Car_F {
    class Turrets;
};
class CUP_BTR40_MG_Base : Wheeled_APC_F {
    class Turrets : Turrets {
        class MainTurret;
    };
};
class LandVehicle;
class Tank : LandVehicle {
    class Turrets;
};
class Tank_F : Tank {
    class Turrets : Turrets {
        class MainTurret;
    };
};

// malita btr 
// CUP_O_MTLB_pk_TK_MILITIA
class CUP_MTLB_Base : Tank_F { };


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