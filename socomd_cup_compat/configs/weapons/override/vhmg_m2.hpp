
class CUP_Vhmg_M2_veh : HMG_M2 {
    magazines[] = {
        "CUP_100Rnd_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Green_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Yellow_Tracer_127x99_M",
        "CUP_100Rnd_TE4_White_Tracer_127x99_M",
        "CUP_100Rnd_TE1_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE1_Green_Tracer_127x99_M",
        "CUP_100Rnd_TE1_Yellow_Tracer_127x99_M",
        "CUP_100Rnd_TE1_White_Tracer_127x99_M",
        "CUP_200Rnd_TE1_Red_Tracer_127x99_M"
    };
    class manual : MGun {
        dispersion=0.00144;
        reloadTime=0.1;
    };
    class close: manual {
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
    class short: close {
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
    class medium: close {
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
    class far: close {
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