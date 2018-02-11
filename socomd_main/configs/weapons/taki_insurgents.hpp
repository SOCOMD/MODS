// Weapons Config
class MGunCore;
class MGun: MGunCore{};
class CUP_Vhmg_M2_veh;
class Vhmg_M2_veh_TKM : CUP_Vhmg_M2_veh {

    magazineReloadTime = 5;

    class manual: MGun {
        dispersion = 0.00145;
    };
    class close: manual {
        burst = 12;
        aiRateOfFire = 0.8;
        aiRateOfFireDistance = 50;
        minRange = 0;
        minRangeProbab = 0.05;
        midRange = 20;
        midRangeProbab = 0.58;
        maxRange = 100;
        maxRangeProbab = 0.04;
    };
    class short: close {
        burst = 12;
        aiRateOfFire = 1.5;
        aiRateOfFireDistance = 300;
        minRange = 50;
        minRangeProbab = 0.05;
        midRange = 150;
        midRangeProbab = 0.58;
        maxRange = 300;
        maxRangeProbab = 0.04;
        dispersion = 0.0029;
    };

    class medium: close {
        burst = 12;
        aiRateOfFire = 3;
        aiRateOfFireDistance = 600;
        minRange = 200;
        minRangeProbab = 0.05;
        midRange = 500;
        midRangeProbab = 0.58;
        maxRange = 800;
        maxRangeProbab = 0.04;
    };

    class far: close {
        burst = 12;
        aiRateOfFire = 5;
        aiRateOfFireDistance = 1000;
        minRange = 600;
        minRangeProbab = 0.05;
        midRange = 800;
        midRangeProbab = 0.4;
        maxRange = 1200;
        maxRangeProbab = 0.01;
        dispersion = 0.0058;
    };
};