// Predefines to allow overwrites
class Truck_F;
class CUP_Ural_BaseTurret : Truck_F {
    class Components;
    class Turrets;
};
class CUP_Ural_ZU23_Base : CUP_Ural_BaseTurret {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret;
    };
};
// default mags used CUP_40Rnd_23mm_AZP23_M * 16

///////////////////////////////////////////////////////////////////////////////////
// ZU23 Urals

// Taki Insurgents
class CUP_I_Ural_ZU23_TK_Gue : CUP_Ural_ZU23_Base { };
class CUP_I_Ural_ZU23_TK_Gue_OCimport_01 : CUP_I_Ural_ZU23_TK_Gue { };
class CUP_I_Ural_ZU23_TK_Gue_OCimport_02 : CUP_I_Ural_ZU23_TK_Gue_OCimport_01 { };
class CUP_Ural_ZU23_Base_OCimport_01 : CUP_Ural_ZU23_Base {};
class CUP_Ural_ZU23_Base_OCimport_02 : CUP_Ural_ZU23_Base_OCimport_01 {};




///////////////////////////////////////////////////////////////////////////////////
// ZU23 Turrets
class StaticWeapon;
class StaticCannon : StaticWeapon {
    class Turrets;
};
class CUP_ZU23_base : StaticCannon {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret;
    };
};
class CUP_ZU23_base_OCimport_01 : CUP_ZU23_base { };
class CUP_ZU23_base_OCimport_02 : CUP_ZU23_base_OCimport_01 { };
