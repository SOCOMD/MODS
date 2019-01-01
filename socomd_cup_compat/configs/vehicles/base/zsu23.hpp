class CUP_ZSU23_Base : Tank_F {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M",
                "CUP_2000Rnd_23mm_AZP23_M"
            };
            weapons[] = {"CUP_Vacannon_AZP23_veh"};
        };
    };
};
class CUP_ZSU23_Base_OCimport_01 : CUP_ZSU23_Base {};
class CUP_ZSU23_Base_OCimport_02 : CUP_ZSU23_Base_OCimport_01 {};
class CUP_ZSU23_Afghan_Base : CUP_ZSU23_Base {};
class CUP_ZSU23_Afghan_Base_OCimport_01 : CUP_ZSU23_Afghan_Base {};
class CUP_ZSU23_Afghan_Base_OCimport_02 : CUP_ZSU23_Afghan_Base_OCimport_01 {};
