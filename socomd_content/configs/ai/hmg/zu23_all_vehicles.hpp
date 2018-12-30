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
class O_CUPOTban_Ural_ZU_23_01 : CUP_I_Ural_ZU23_TK_Gue_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
     };
};

// Taki Malitia
class CUP_O_Ural_ZU23_TKM : CUP_Ural_ZU23_Base {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
     };
};

class CUP_Ural_ZU23_Base_OCimport_01 : CUP_Ural_ZU23_Base {};
class CUP_Ural_ZU23_Base_OCimport_02 : CUP_Ural_ZU23_Base_OCimport_01 {};
// Taki Army
class CUP_O_Ural_ZU23_TKA : CUP_Ural_ZU23_Base_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
     };
};

// Sahrani Liberation Army
class CUP_O_Ural_ZU23_SLA : CUP_Ural_ZU23_Base_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
     };
};

// Chernarussian movement of the red star
class CUP_O_Ural_ZU23_CHDKZ : CUP_Ural_ZU23_Base_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
     };
};

// Armed forces of the russian federation
class CUP_O_Ural_ZU23_RU : CUP_Ural_ZU23_Base {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
     };
};


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

// Taki Malitia
class CUP_O_ZU23_TK_INS: CUP_ZU23_base {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
    };
};

// Taki Army
class CUP_ZU23_base_OCimport_01 : CUP_ZU23_base { };
class CUP_ZU23_base_OCimport_02 : CUP_ZU23_base_OCimport_01 { };
class CUP_O_ZU23_TK: CUP_ZU23_base_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
    };
};

// Sahrani Liberation Army
class CUP_O_ZU23_SLA: CUP_ZU23_base_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
    };
};

class CUP_O_ZU23_ChDKZ : CUP_ZU23_base_OCimport_02 {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CUP_2000Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
            weapons[] = {"CUP_Vacannon_2A14_veh"};
        };
    };
};