// 10km rocket range
// 0.5km min range
// 0.8 cmimmunity
class CUP_O_2S6M_RU : CUP_2S6M_Base {
    displayname = "2S6m Tunguska (10km M / 3.5km G / 6km AR / 12km PR)";
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            passThrough = 0;
            magazines[] = {
                "CUP_8Rnd_9M311M_Tunguska_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M"
            };
            weapons[] = {"CUP_Vacannon_2A38M_veh","CUP_Vmlauncher_9M311M_veh"};
        };
    };
};

// 8km rocket range
// 0.5km min range
// 0.6 cmimmunity
class CUP_O_2S6_RU : CUP_2S6_Base {
    displayname = "2S6 Tunguska (8km M / 3.5km G / 4km AR / 12km PR)";
    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {
                "CUP_8Rnd_9M311_Tunguska_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M",
                "CUP_1904Rnd_TE1_30mm_2A38M_HE_M"
            };
            weapons[] = {"CUP_Vacannon_2A38M_veh","CUP_Vmlauncher_9M311_veh"};
        };
    };
};