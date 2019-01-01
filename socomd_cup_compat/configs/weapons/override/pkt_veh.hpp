
// this vic only tries to be effective up to 800m because 7.62 rounds with default distance.
// it is the Technical PK vic, this seems fair but they must be more squirty :).
class CUP_Vhmg_PKT_veh : MGun {
    displayName = "M2";
	author = "CUP";
	magazineReloadTime = 5;
	modes[] = {"manual","close","short","medium","far"};
     // adding our 250 round boxes to the allowed list.
    magazines[] = {"CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_1500Rnd_TE1_White_Tracer_762x54_PKT_M","CUP_1500Rnd_TE1_Red_Tracer_762x54_PKT_M","CUP_1500Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_1500Rnd_TE1_Yellow_Tracer_762x54_PKT_M","CUP_2000Rnd_TE1_White_Tracer_762x54_PKT_M","CUP_2000Rnd_TE1_Red_Tracer_762x54_PKT_M","CUP_2000Rnd_TE1_Yellow_Tracer_762x54_PKT_M","CUP_2000Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_200Rnd_TE1_White_Tracer_762x54_PKT_M","CUP_200Rnd_TE1_Red_Tracer_762x54_PKT_M","CUP_200Rnd_TE1_Yellow_Tracer_762x54_PKT_M","CUP_200Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_250Rnd_TE1_White_Tracer_762x54_PKT_M","CUP_250Rnd_TE1_Red_Tracer_762x54_PKT_M","CUP_250Rnd_TE1_Yellow_Tracer_762x54_PKT_M","CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_100Rnd_TE1_White_Tracer_762x54_PKT_M","CUP_100Rnd_TE1_Red_Tracer_762x54_PKT_M","CUP_100Rnd_TE1_Yellow_Tracer_762x54_PKT_M","CUP_100Rnd_TE1_Green_Tracer_762x54_PKT_M"};
    class manual : MGun {
        dispersion=0.00135;
        reloadTime=0.085;
        aiBurstTerminable=1;
        displayName = "M2";
        autoFire = 1;
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",0.5,1,20};
        drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",0.446684,1,10};
        magazineReloadSwitchPhase = 2.0;
        inertia = 1.2;
        class StandardSound
        {
            soundSetShot[] = {"CUP_M2_Closure_SoundSet","CUP_M2_Shot_SoundSet","CUP_Sniper1_Tail_SoundSet"};
        };
        burst = 1;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 50;
        minRange = 1;
        minRangeProbab = 0.01;
        midRange = 2;
        midRangeProbab = 0.01;
        maxRange = 3;
        maxRangeProbab = 0.01;
    };
    class close : manual {
        showToPlayer=0;
        // default 0.00135
        dispersion=0.0018;
        // default max burst 10
        burst=22;
        burstRangeMax=22;
        aiRateOfFire=0.2;
    };
    class short : close {
        burst=18;
        burstRangeMax=18;
        aiRateOfFire=0.3;
    };
    class medium : close {
        burst=12;
        burstRangeMax=12;
        aiRateOfFire=0.7;
    };
    // i think it should drop off close to max because he would chew ammo uneffectively for the callibar,
    // range is 800 max, 600 mid, 500 min. with default low probabilty so he would prefer to use medium.
    class far : close {
        burst=5;
        burstRangeMax=5;
        aiRateOfFire=1.2;
    };

    /*class GunParticles {
			class FirstEffect
			{
				positionName = "machinegun_start";
				directionName = "machinegun_end";
				effectName = "MachineGunCloud";
			};
			class SecondEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
			class ThirdEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunEject";
			};
		};
  */  
};