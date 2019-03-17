class CfgMagazines {
    class VehicleMagazine;
    class CUP_2000Rnd_23mm_AZP23_M : VehicleMagazine {
        //ammo = "B_35mm_AA"; // ammo = "CUP_B_23mm_AA";
        //muzzleImpulseFactor[] = {1,4};
        initSpeed = 1800;
    };
    class CUP_PylonPod_2000Rnd_TE5_Red_Tracer_762x51_M134A_M;
    // Melb Changes for pylon system from cup
    class Pylon_L_GUN_MELB_SOCOMD : CUP_PylonPod_2000Rnd_TE5_Red_Tracer_762x51_M134A_M {
		hardpoints[] = {"Left_MinigunMount_MELB"};
		mass = 60;
    };
    class Pylon_R_GUN_MELB_SOCOMD  : Pylon_L_GUN_MELB_SOCOMD {
		hardpoints[] = {"Right_MinigunMount_MELB"};
    };
};