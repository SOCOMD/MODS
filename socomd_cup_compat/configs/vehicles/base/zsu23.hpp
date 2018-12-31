class CUP_ZSU23_Base : Tank_F {
    receiveRemoteTargets = 1; // let the zu23 become aware of radar targets that the side has seen.
    gunnerCanSee = 31; // can see radar eyes, optics.
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            discreteDistance[] = {200,400,600,800,1000,1200,1400,1600,1800,2000,2200,2400,2600,2800,3000,3200,3400,3600,3800,4000,4200};
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
