//class Default;
class CannonCore;
class CUP_Vacannon_2A14_veh : CannonCore {
    // these are default
    magazines[] = {"CUP_40Rnd_23mm_AZP23_M","CUP_2000Rnd_23mm_AZP23_M"};
    class manual : CannonCore {
        // dispersion: 0.007
        dispersion = 0.007; 
        aiBurstTerminable=1; // most cup vics haven't got this yet, it basically stops the gun if the gunner dies
    };

    class close : manual {
        // MIN: 0, MID: 300, MAX: 600
        // burst: 15
        // rof: 0.5
        burst = 15;
        burstRangeMax=20;
        aiRateOfFire = 0.5;
    };

    class short : close {
        // MIN : 400, MID: 600, MAX: 900
        // burst: 10
        // rof: 2
        burst = 15;
        burstRangeMax=20;
        aiRateOfFire = 1;
    };
    class medium : close {
        // MIN: 700, MID: 900, MAX: 1200
        // burst: 7
        // rof: 3
        burst = 12;
        burstRangeMax=18;
        aiRateOfFire = 1.5;
    };

    class far : close {
        // MIN: 1200, MID: 1200, MAX: 1500
        // burst: 4
        // rof: 5
        burst = 12;
        burstRangeMax=14;
        aiRateOfFire = 2.5;
        maxRange=2600; // real life zu23 has max effective of 2500
        maxRangeProbab=0.250000001;
    };
};