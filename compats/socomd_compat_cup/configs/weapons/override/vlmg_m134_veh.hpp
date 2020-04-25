// used by socomd choppers
class CUP_Vlmg_M134_veh : MGunCore {
    class HighROF;
    class LowROF;
    class close : HighROF {
        aiRateOfFire=0.2;
        aiBurstTerminable = 1;
        minRange=0;
        midRange=100;
        maxRange=200;
        aiRateOfFireDispersion = 0.02; // higher rate of fire, more he cant aim
        burst = 50;
        burstRangeMax = 60;
        aiRateOfFireDistance = 200;
    };
    class short : close {
        dispersion = 0.0014;
        aiRateOfFire=0.7;
        minRange=50;
        midRange=200;
        maxRange=400;
        burst = 50;
        burstRangeMax = 50;
    };
    class medium : LowROF {
        dispersion = 0.0014;
        aiRateOfFire=1.3;
        minRange=300;
        midRange=400;
        maxRange=600;
        aiBurstTerminable = 1;
        aiRateOfFireDispersion = 0.01;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 400;
    };
    class far : medium {
        aiRateOfFire=2;
        minRange=500;
        midRange=600;
        maxRange=800;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 600;
    };
};

class CUP_Vlmg_M134_veh2 : CUP_Vlmg_M134_veh {
    class HighROF;
    class LowROF;
    class close : HighROF {
        aiRateOfFire=0.2;
        aiBurstTerminable = 1;
        minRange=0;
        midRange=100;
        maxRange=200;
        aiRateOfFireDispersion = 0.02; // higher rate of fire, more he cant aim
        burst = 50;
        burstRangeMax = 60;
        aiRateOfFireDistance = 200;
    };
    class short : close {
        dispersion = 0.0014;
        aiRateOfFire=0.7;
        minRange=50;
        midRange=200;
        maxRange=400;
        burst = 50;
        burstRangeMax = 50;
    };
    class medium : LowROF {
        dispersion = 0.0014;
        aiRateOfFire=1.3;
        minRange=300;
        midRange=400;
        maxRange=600;
        aiBurstTerminable = 1;
        aiRateOfFireDispersion = 0.01;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 400;
    };
    class far : medium {
        aiRateOfFire=2;
        minRange=500;
        midRange=600;
        maxRange=800;
        burst = 40;
        burstRangeMax = 50;
        aiRateOfFireDistance = 600;
    };
};

class CUP_Vlmg_TwinM134_veh : CUP_Vlmg_M134_veh {
    class LowROF : LowROF {
        //reloadTime = 0.03;// 0.03 default
        reloadTime = 0.06;
        showToPlayer = 1;
        textureType = "fullAuto"; // textureType = "burst";
    };
    class HighROF : HighROF {
        //reloadTime = 0.015;// 0.015 default
        showToPlayer = 0;
    };
    magazines[] = {
        "CUP_4000Rnd_TE5_White_Tracer_762x51_M134_M",
        "CUP_2000Rnd_TE5_White_Tracer_762x51_M134_M",
        "CUP_2000Rnd_TE1_White_Tracer_762x51_M134_M",
        "CUP_4000Rnd_TE5_Red_Tracer_762x51_M134_M",
        "CUP_2000Rnd_TE5_Red_Tracer_762x51_M134_M",
        "CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M",
        "CUP_2000Rnd_TE1_Red_Tracer_762x51_M134_M",
        "Pylon_L_GUN_MELB_SOCOMD",
        "Pylon_R_GUN_MELB_SOCOMD"
    };
};