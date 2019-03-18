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
    class 6Rnd_ACE_Hellfire_AGM114K;
    class PylonRack_1Rnd_ACE_Hellfire_AGM114K : 6Rnd_ACE_Hellfire_AGM114K {
        hardpoints[] = {
            "B_MISSILE_PYLON",
            "SCALPEL_1RND_EJECTOR",
            "B_ASRRAM_EJECTOR",
            "UNI_SCALPEL",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_MELB",
            "RightMount_MELB",
            "LeftMount_MELB"
        };
    };
    class PylonRack_1Rnd_ACE_Hellfire_AGM114N : PylonRack_1Rnd_ACE_Hellfire_AGM114K {
        hardpoints[] = {
            "B_MISSILE_PYLON",
            "SCALPEL_1RND_EJECTOR",
            "B_ASRRAM_EJECTOR",
            "UNI_SCALPEL",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_MELB",
            "RightMount_MELB",
            "LeftMount_MELB"
        };
    };

    // disable MELB Pylon shit
    /*
    class VehicleMagazine;
    class Hydra_Magazine_MELB : VehicleMagazine {
        hardpoints[] = {""}
    };
    //delete Hydra_Magazine_MELB;
    class M229_Magazine_MELB : Hydra_Magazine_MELB {
        hardpoints[] = {""}
    };
    class M255A1_Magazine_MELB : Hydra_Magazine_MELB {
        hardpoints[] = {""}
    };

    class M257_Illum_Magazine_MELB : Hydra_Magazine_MELB {
        hardpoints[] = {""}
    };
    class M261_MPSM_Magazine_MELB {
        hardpoints[] = {""}
    }; */
    class 3000Rnd_762x51_Belt_Red_MELB;
    class Pylon_L_3000Rnd_M134_MELB : 3000Rnd_762x51_Belt_Red_MELB {
        hardpoints[] = {""};
    };
    class Pylon_R_3000Rnd_M134_MELB : Pylon_L_3000Rnd_M134_MELB {
        hardpoints[] = {""};
    };
    class 1300Rnd_127x99_mag_Tracer_Red_MELB;
    class Pylon_L_1300Rnd_GAU19_MELB : 1300Rnd_127x99_mag_Tracer_Red_MELB {
        hardpoints[] = {""};
    };
    class Pylon_R_1300Rnd_GAU19_MELB : Pylon_L_1300Rnd_GAU19_MELB {
        hardpoints[] = {""};
    };

    class M229_Magazine_MELB;
    class Pylon_HE_3x_M260_MELB : M229_Magazine_MELB {
        hardpoints[] = {""};
    };
    class Pylon_HE_4x_M260_MELB : Pylon_HE_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_HE_3x_M261_MELB : Pylon_HE_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_HE_4x_M261_MELB : Pylon_HE_3x_M261_MELB {
        hardpoints[] = {""};
    };
    class Pylon_HE_12x_M261_MELB : Pylon_HE_3x_M261_MELB {
        hardpoints[] = {""};
    };


    class M257_Illum_Magazine_MELB;
    class Pylon_M257_3x_M260_MELB : M257_Illum_Magazine_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M257_4x_M260_MELB : Pylon_M257_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M257_3x_M261_MELB : Pylon_M257_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M257_4x_M261_MELB : Pylon_M257_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M257_12x_M261_MELB : Pylon_M257_3x_M260_MELB {
        hardpoints[] = {""};
    };

    class M255A1_Magazine_MELB;
    class Pylon_M255A1_3x_M260_MELB : M255A1_Magazine_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M255A1_4x_M260_MELB : Pylon_M255A1_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M255A1_3x_M261_MELB : Pylon_M255A1_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M255A1_4x_M261_MELB : Pylon_M255A1_3x_M261_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M255A1_12x_M261_MELB : Pylon_M255A1_3x_M261_MELB {
        hardpoints[] = {""};
    };

    class M261_MPSM_Magazine_MELB;
    class Pylon_MPSM_3x_M260_MELB : M261_MPSM_Magazine_MELB {
        hardpoints[] = {""};
    };
    class Pylon_MPSM_4x_M260_MELB : Pylon_MPSM_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_MPSM_3x_M261_MELB : Pylon_MPSM_3x_M260_MELB {
        hardpoints[] = {""};
    };
    class Pylon_MPSM_4x_M261_MELB : Pylon_MPSM_3x_M261_MELB {
        hardpoints[] = {""};
    };
    class Pylon_MPSM_12x_M261_MELB : Pylon_MPSM_3x_M261_MELB {
        hardpoints[] = {""};
    };
    class AGM_114K_MELB;
    class Pylon_AGM_114K_MELB : AGM_114K_MELB {
        hardpoints[] = {""};
    };

    class DAGR_Magazine_MELB;
    class Pylon_DAGR_MELB : DAGR_Magazine_MELB {
        hardpoints[] = {"RightMount_MELB","LeftMount_MELB"};
        displayName = "4x DAGR [ACE]";
    };

    class FakeMagazine_MELB;
    class Pylon_HellfireLauncher_MELB : FakeMagazine_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M260_MELB : FakeMagazine_MELB {
        hardpoints[] = {""};
    };
    class Pylon_M261_MELB : FakeMagazine_MELB {
        hardpoints[] = {""};
    };
    
};