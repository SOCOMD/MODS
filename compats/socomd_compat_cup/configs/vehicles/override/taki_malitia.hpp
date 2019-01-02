// mortar man
/*
class CUP_O_2b14_82mm_TK_INS : CUP_2b14_82mm_Base {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_shells",
                "8Rnd_82mm_Mo_Flare_white",
                "8Rnd_82mm_Mo_Smoke_white"
            };
            weapons[] = {"mortar_82mm"};
        };
    };
};
*/

// m2 BTR milita
class CUP_O_BTR40_MG_TKM : CUP_BTR40_MG_Base {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M",
                "CUP_200Rnd_TE1_Red_Tracer_127x99_M"
            };
            weapons[] = {"CUP_Vhmg_M2_veh"};
        };
    };
};
// APC MT-LB-LV
class CUP_O_MTLB_pk_TK_MILITIA : CUP_MTLB_Base {
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {
                "CUP_2000Rnd_TE1_Green_Tracer_762x54_PKT_M",
                "CUP_2000Rnd_TE1_Green_Tracer_762x54_PKT_M",
                "CUP_2000Rnd_TE1_Green_Tracer_762x54_PKT_M",
                "CUP_2000Rnd_TE1_Green_Tracer_762x54_PKT_M"
            };
            // default: weapons[] = {"CUP_Vhmg_PKT_veh_Noeject"};
            weapons[] = {"CUP_Vhmg_PKT_veh"}; // squirty :) 
        };
    };
};