class CUP_Vhmg_DSHKM_veh : MGun {
    magazines[] = {
        "CUP_100Rnd_TE3_LRT5_Green_Tracer_127x107_DSHKM_M",
        "CUP_50Rnd_TE3_LRT5_127x107_DSHKM_M",
        "CUP_150Rnd_TE3_LRT5_127x107_DSHKM_M"
    };
    class manual : MGun {
        aiRateOfFire = 0.2;
        aiRateOfFireDistance = 50;
    };
    class close : manual {
        // min 0 mid 20 max 100
        // burst 10
        // rof 0.5
        // rofd 50
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=16;
        burstRangeMax=16;
        aiRateOfFire=0.2;
        aiRateOfFireDispersion=1.5;
        aiRateOfFireDistance=50;
        minRange=0;
        minRangeProbab=0.69999999;
        midRange=100;
        midRangeProbab=0.69999999;
        maxRange=200;
        maxRangeProbab=0.2;
        
    };
    class short : close {
        // min 50 mid 150 max 300
        // burst 8
        // rof 2
        // rofd 300
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=14;
        burstRangeMax=16;
        aiRateOfFire=0.5;
        aiRateOfFireDispersion=2;
        aiRateOfFireDistance=150;
        minRange=100;
        minRangeProbab=0.69999999;
        midRange=400;
        midRangeProbab=0.75;
        maxRange=800;
        maxRangeProbab=0.2;
    };
    class medium : close {
        // min 200, mid 500, max 800
        // burst 4
        // rof 3
        // rofd 600
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=12;
        burstRangeMax=12;
        aiRateOfFire=1;
        aiRateOfFireDispersion=2;
        aiRateOfFireDistance=400;
        minRange=400;
        minRangeProbab=0.75;
        midRange=800;
        midRangeProbab=0.69999999;
        maxRange=1500;
        maxRangeProbab=0.1;
    };
    class far : close {
        // min 600, mid 800, max 1200
        // burst 5
        // rof 5
        // rofd 1000
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=8;
        burstRangeMax=12;
        aiRateOfFire=1.5;
        aiRateOfFireDispersion=4;
        aiRateOfFireDistance=800;
        minRange=800;
        minRangeProbab=0.60000002;
        midRange=1500;
        midRangeProbab=0.25;
        maxRange=2000;
        maxRangeProbab=0.050000001;
    };
};