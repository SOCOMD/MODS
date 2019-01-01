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

class StaticMortar;
class CUP_2b14_82mm_Base : StaticMortar { };

class Car_F;
class CUP_LR_Base: Car_F {
    class Turrets;
};
class CUP_LR_MG_Base : CUP_LR_Base {
    class Turrets : Turrets {
        class MainTurret;
    };
};

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

