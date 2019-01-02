// HMG_01_base_F uses this, csat turrets. watch em go balastic compared to other taliban at 900m range :D.
class HMG_static : HMG_01 {
    class manual : manual {
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

class HMG_M2 : HMG_01 {
    magazines[] = {
        "100Rnd_127x99_mag",
        "100Rnd_127x99_mag_Tracer_Red",
        "100Rnd_127x99_mag_Tracer_Green",
        "100Rnd_127x99_mag_Tracer_Yellow",
        "500Rnd_127x99_mag_Tracer_Yellow" // this is new
    };
    class manual : manual {
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