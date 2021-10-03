    
class HMG_127 : LMG_RCWS {
    class manual : MGun {
        dispersion = 0.0012;
    };
    class close : manual {
        // min: 0, mid: 100, max: 200
        // burst: 8
        // rof: 0.5
        // rofd: 50
        aiRateOfFire=0.5;
        burst = 16;
        burstRangeMax = 16;
        aiRateOfFireDistance = 100;
        dispersion = 0.00160;
    };
    class short : close {
        // min: 100, 400, 800
        // burst: 6
        // rof: 1
        // rofd: 150
        aiRateOfFire=1;
        burst = 16;
        burstRangeMax = 16;
        aiRateOfFireDistance = 400;
    };
    class medium : close {
        // min: 400, mid: 800, max: 1500
        // burst: 4
        // rof: 2
        // rofd: 400
        aiRateOfFire=2;
        burst = 16;
        burstRangeMax = 16;
        aiRateOfFireDistance = 800;
    };
    class far : close {
        // min: 800, mid: 1500, max: 2000
        // burst 3
        // rof: 4
        // rofd: 800
        aiRateOfFire=4;
        burst = 10;
        burstRangeMax = 10;
        aiRateOfFireDistance = 1500;
    };
};