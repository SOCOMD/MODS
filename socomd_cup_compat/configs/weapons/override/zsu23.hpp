class CUP_Vacannon_AZP23_veh : CannonCore {
    magazines[] = {"CUP_40Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
    class manual : CannonCore {
        // default dispersion = 0.007;
        dispersion = 0.007;
    };
    class close : manual {
        // MIN: 0, MID: 300, MAX: 600
        // burst: 15
        // rof: 0.5
        // rofd: 50
        aiRateOfFire = 0.5;
        burst = 28; // caution hot potato
        burstRangeMax = 28;
    };

    class short : close {
        // MIN: 400, MID: 600, MAX: 900
        // burst: 15
        // rof: 1
        // rofd: 300
        aiRateOfFire = 1;
        burst = 28;
    };
    class medium : close {
        // MIN: 700, MID: 900, MAX: 1200
        // burst: 12
        // rof: 1.5
        // rofd: 600
        aiRateOfFire = 1.5;
        burst = 24;
        burstRangeMax = 24;
    };
    class far : close {
        // MIN: 1000, MID: 1200, MAX: 1500
        // burst: 12
        // rof: 2.5
        // rofd: 1000
        aiRateOfFire = 1.5;
        burst = 24;
        burstRangeMax = 24;
        minRange = 1100;
        midRange = 1800;
        maxRange = 2600;
        aiRateOfFireDistance = 1800;
    };
};