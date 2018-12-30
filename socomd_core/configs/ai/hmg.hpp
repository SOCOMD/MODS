// a3/weapons_f/config line 495
// this is the base element all weapons fire rates derive from, 
// its default values are
/*
    class Mode_SemiAuto
    {
        sounds[]=
        {
            "StandardSound",
            "SilencedSound"
        };
        displayName="$STR_DN_MODE_SEMIAUTO";
        textureType="semi";
        recoil="recoil_single_primary_3outof10";
        recoilProne="recoil_single_primary_prone_3outof10";
        aiDispersionCoefY=1.7;
        aiDispersionCoefX=1.4;
        soundBurst=0;
        requiredOpticType=-1;
        aiRateOfFire=2;
        aiRateOfFireDispersion=1;
        aiRateOfFireDistance=500;
    };
*/
// which is why the ai shoot two bullets and stop all the time. Every AI Weapon needs to have new configs if you desire to have them shoot differently.
// If multiple modes are present within a weapon it will select the best mode based on distance so balance wisely
/*
        burst = 13;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 50;
        minRange = 10;
        minRangeProbab = 0.05;
        midRange = 20;
        midRangeProbab = 0.58;
        maxRange = 50;
        maxRangeProbab = 0.04;
        showToPlayer = 0;
*/
// https://community.bistudio.com/wiki/Weapons_settings


/*
HMG_Static weapons defaults

    class close: manual
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=8;
        burstRangeMax=16;
        aiRateOfFire=0.5;
        aiRateOfFireDispersion=1.5;
        aiRateOfFireDistance=50;
        minRange=0;
        minRangeProbab=0.69999999;
        midRange=100;
        midRangeProbab=0.69999999;
        maxRange=200;
        maxRangeProbab=0.2;
    };
    class short: close
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=6;
        burstRangeMax=16;
        aiRateOfFire=1;
        aiRateOfFireDispersion=2;
        aiRateOfFireDistance=150;
        minRange=100;
        minRangeProbab=0.69999999;
        midRange=400;
        midRangeProbab=0.75;
        maxRange=800;
        maxRangeProbab=0.2;
    };
    class medium: close
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=4;
        burstRangeMax=12;
        aiRateOfFire=2;
        aiRateOfFireDispersion=2;
        aiRateOfFireDistance=400;
        minRange=400;
        minRangeProbab=0.75;
        midRange=800;
        midRangeProbab=0.69999999;
        maxRange=1500;
        maxRangeProbab=0.1;
    };
    class far: close
    {
        aiBurstTerminable=1;
        showToPlayer=0;
        burst=3;
        burstRangeMax=12;
        aiRateOfFire=4;
        aiRateOfFireDispersion=4;
        aiRateOfFireDistance=800;
        minRange=800;
        minRangeProbab=0.60000002;
        midRange=1500;
        midRangeProbab=0.25;
        maxRange=2000;
        maxRangeProbab=0.050000001;
    };

*/
//class Mode_FullAuto;

// lets set a more squirty base for everyone :)
class HMG_127;
class HMG_01 : HMG_127 {
    class manual;
};
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