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
class CUP_2b14_82mm_Base : StaticMortar {};

class LandVehicle;

class Car : LandVehicle {
    class NewTurret;
};

class Car_F : Car {
    class Turrets {
        class MainTurret : NewTurret {};
    };
};

class Wheeled_APC_F : Car_F {};

class Tank : LandVehicle {
    class Turrets;
};

class Tank_F : Tank {
    class Turrets : Turrets {
        class MainTurret;
    };
    class Components;
};

// militia btr
class CUP_BTR40_MG_Base : Wheeled_APC_F{};

// malita btr 
// CUP_O_MTLB_pk_TK_MILITIA
class CUP_MTLB_Base : Tank_F {};