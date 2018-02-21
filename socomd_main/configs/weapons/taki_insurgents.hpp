// Weapons Config
class MGunCore;
class MGun: MGunCore{};
class CUP_Vhmg_M2_veh;
class Vhmg_M2_veh_TKM : CUP_Vhmg_M2_veh {

    magazineReloadTime = 5;
    magazines[]=
    {
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
        "CUP_100Rnd_TE4_Red_Tracer_127x99_M"
    };
    class manual;
    class close: manual
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=8;
        burstRangeMax=16;
        aiRateOfFire=0.5;
        aiRateOfFireDispersion=1;
        aiRateOfFireDistance=50;
        minRange=0;
        minRangeProbab=0.80000001;
        midRange=20;
        midRangeProbab=0.69999999;
        maxRange=50;
        maxRangeProbab=0.2;
    };
    class short: close
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=5;
        burstRangeMax=12;
        aiRateOfFire=1;
        aiRateOfFireDispersion=4;
        aiRateOfFireDistance=150;
        minRange=20;
        minRangeProbab=0.69999999;
        midRange=150;
        midRangeProbab=0.69999999;
        maxRange=300;
        maxRangeProbab=0.2;
        dispersion = 0.008;
    };
    class medium: close
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=8;
        burstRangeMax=12;
        aiRateOfFire=2.5;
        aiRateOfFireDispersion=6;
        aiRateOfFireDistance=250;
        minRange=150;
        minRangeProbab=0.69999999;
        midRange=600;
        midRangeProbab=0.64999998;
        maxRange=800;
        maxRangeProbab=0.1;
        dispersion = 0.012;
    };
    class far: close
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=12;
        burstRangeMax=14;
        aiRateOfFire=2;
        aiRateOfFireDispersion=8;
        aiRateOfFireDistance=600;
        minRange=600;
        minRangeProbab=0.64999998;
        midRange=800;
        midRangeProbab=0.40000001;
        maxRange=120;
        maxRangeProbab=0.1;
        dispersion = 0.018;
    };
};