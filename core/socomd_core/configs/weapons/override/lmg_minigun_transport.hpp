class LMG_Minigun_Transport : LMG_Minigun {
    class manual : manual {
        // default dispersion = 0.00093;
        //aiRateOfFire = 0.1;
        //dispersion = 0.00093;
    };
    class close : close {
        // min: 0, mid: 100, max: 300
        // burst: 12
        // rof: 0.5
        // rofd: 50
        minRange=0;
        midRange=100;
        maxRange=200;
        aiRateOfFire=0.2;
        soundBurst = 0;
        showToPlayer = 0;
        aiBurstTerminable = 1;
        aiRateOfFireDistance = 100;
        dispersion = 0.00120;
        burst = 48;
        burstRangeMax = 48;
    };
    class short : short {
        // min: 100, mid: 300, max: 600
        // burst: 8
        // rof: 1
        // rofd: 150 
        minRange=50;
        midRange=200;
        maxRange=400;
        aiRateOfFire=0.7;
        aiRateOfFireDistance = 200;
        burst = 48;
        burstRangeMax = 48;
    };
    class medium : medium {
        // min: 300, mid: 600, max: 800
        // burst: 8
        // rof: 2
        // rfd: 300
        minRange=300;
        midRange=400;
        maxRange=600;
        aiRateOfFire=1.3;
        aiRateOfFireDistance = 400;
        burst = 48;
        burstRangeMax = 48;
    };
    class far : far {
        // min: 800, mid: 1000, max: 1500
        // burst: 8
        // rof: 4
        // rofd: 800
        aiRateOfFire=2;
        aiRateOfFireDistance = 600;
        burst = 48;
        burstRangeMax = 48;
        minRange=500;
        midRange=600;
        maxRange=800;
    };
};