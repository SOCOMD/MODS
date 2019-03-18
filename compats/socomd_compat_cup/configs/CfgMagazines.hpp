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
        model = "melb\proxies\pylon_m134_l";
		hardpoints[] = {"Left_MinigunMount_MELB"};
		mass = 60;
    };
    class Pylon_R_GUN_MELB_SOCOMD : Pylon_L_GUN_MELB_SOCOMD {
        model = "melb\proxies\pylon_m134_r";
		hardpoints[] = {"Right_MinigunMount_MELB"};
    };
    class CUP_19Rnd_CRV7_FAT_M;
    class CUP_PylonPod_19Rnd_CRV7_FAT_M : CUP_19Rnd_CRV7_FAT_M {
        hardpoints[] = {
            "CUP_SUPER_PYLON",
            "DAR",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "CUP_NATO_HELO_ROCKETS",
            "CUP_19Rnd_CRV7_FAT",
            "RightMount_MELB",
            "LeftMount_MELB"
        };
    };
    class CUP_2Rnd_AGM114K_Hellfire_II_M;
    class CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M : CUP_2Rnd_AGM114K_Hellfire_II_M {
        hardpoints[] = {
            "CUP_SUPER_PYLON",
            "DAR",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "CUP_2Rnd_AGM114K",
            "RightMount_MELB",
            "LeftMount_MELB"
        };
    };

    // disable MELB Pylon shit
    /*
    //delete Hydra_Magazine_MELB;
    delete M229_Magazine_MELB;
    delete M255A1_Magazine_MELB;
    delete Hydra_Magazine_MELB;
    delete M257_Illum_Magazine_MELB;
    delete M261_MPSM_Magazine_MELB;

    delete Pylon_L_3000Rnd_M134_MELB;
    delete Pylon_R_3000Rnd_M134_MELB;
    delete Pylon_L_1300Rnd_GAU19_MELB;
    delete Pylon_R_1300Rnd_GAU19_MELB;
    delete Pylon_HE_3x_M260_MELB;
    //delete Pylon_HE_4x_M260_MELB;
    delete Pylon_HE_3x_M261_MELB;
    delete Pylon_HE_4x_M261_MELB;
    delete Pylon_HE_12x_M261_MELB;
    delete Pylon_M257_3x_M260_MELB;
    delete Pylon_M257_4x_M260_MELB;
    delete Pylon_M257_3x_M261_MELB;
    delete Pylon_M257_4x_M261_MELB;
    delete Pylon_M257_12x_M261_MELB;
    delete Pylon_M255A1_3x_M260_MELB;
    delete Pylon_M255A1_4x_M260_MELB;
    delete Pylon_M255A1_3x_M261_MELB;
    delete Pylon_M255A1_4x_M261_MELB;
    delete Pylon_M255A1_12x_M261_MELB;
    delete Pylon_MPSM_3x_M260_MELB;
    delete Pylon_MPSM_4x_M260_MELB;
    delete Pylon_MPSM_3x_M261_MELB;
    delete Pylon_MPSM_4x_M261_MELB;
    delete Pylon_MPSM_12x_M261_MELB;
    delete Pylon_AGM_114K_MELB;
    delete Pylon_DAGR_MELB;
    delete Pylon_HellfireLauncher_MELB;
    //delete Pylon_M260_MELB; //needed for melb loading?
    delete Pylon_M261_MELB;
    */
};