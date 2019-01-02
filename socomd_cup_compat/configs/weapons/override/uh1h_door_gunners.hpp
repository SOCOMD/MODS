class CUP_M240_uh1h_left_veh_W : CUP_Vlmg_M240_veh {
    magazines[] = {
        "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
        "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
        "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
        "CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",
        "CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M",
        "CUP_100Rnd_TE4_White_Tracer_762x51_M240_M",
        "CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"
    };
    class manual : manual {
        aiBurstTerminable=1;
    };
    class close : manual {
        // Min: 0, Mid: 100, Max: 200
        // burst 10
        // rof: 0.5
        // rofd: 50
        // default : dispersion = 0.0012; 
        dispersion = 0.0018;
        burst=22;
        burstRangeMax=22;
        aiRateOfFire=0.2;
    };
    class short : close {
        // Min: 50, Mid: 200, Max: 400
        // burst: 8
        // rof: 2
        // rofd: 300
        burst=18;
        burstRangeMax=18;
        aiRateOfFire=0.3;
    };
    class medium : close {
        // Min: 300, Mid: 400, Max: 600
        // burst: 4
        // rof: 3
        // rofd: 600
        burst=16;
        burstRangeMax=16;
        aiRateOfFire=0.7;
    };
    class far : close {
        // Min: 500, Mid: 600, Max: 800
        // burst: 5
        // rof: 5
        // rofd: 1000
        burst=12;
        burstRangeMax=12;
        aiRateOfFire=1.2;
    };
};

class CUP_M240_uh1h_right_veh_W : CUP_Vlmg_M240_veh {
    class manual : manual {
        aiBurstTerminable=1;
    };
    class close : manual {
        dispersion = 0.0018;
        burst=22;
        burstRangeMax=22;
        aiRateOfFire=0.2;
    };
    class short : close {
        burst=18;
        burstRangeMax=18;
        aiRateOfFire=0.3;
    };
    class medium : close {
        burst=16;
        burstRangeMax=16;
        aiRateOfFire=0.7;
    };
    class far : close {
        burst=12;
        burstRangeMax=12;
        aiRateOfFire=1.2;
    };
};