class CUP_Vacannon_2A38M_veh : CUP_Vacannon_GSh302K_veh {
    magazines[] = {"CUP_1904Rnd_TE1_30mm_2A38M_HE_M"};
    class LowROF;
    class close : LowROF {
        //min: 1, mid: 150, max: 300
        // burst 15
        // brm: -1
        // rof: 0.25
        // rofd: 400
        //aiBurstTerminable=1;
        burst = 36;
        minRange = 0; // 
        midRange = 400;
        maxRange = 800;
    };
    class short : close {
        // min: 200, mid: 400, max: 600
        // burst 10
        // rof: 0.5
        // rofd: 600
        burst = 36;
        minRange = 600;
        midRange = 1100;
        maxRange = 1500;
        aiRateOfFireDistance = 1500;
    };
    class medium : close {
        // min: 400, mid: 700, max: 900
        // burst: 7
        // rof: 1
        // rofd: 900
        burst = 28;
        minRange = 1200;
        midRange = 1900;
        maxRange = 2700;
        aiRateOfFireDistance = 2200;
    };
    class far : close {
        // min: 800, mid: 1000, max: 1500
        // burst: 5
        // rof: 2
        // rofd: 1500
        burst = 28;
        minRange = 2500;
        midRange = 3000;
        maxRange = 3500;
        aiRateOfFireDistance = 3000;
    };
};