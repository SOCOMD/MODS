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
        ammo = CUP_B_762x51_Tracer_Red_Splash;
        model = "melb\proxies\pylon_m134_l";
        hardpoints[] = {"Left_MinigunMount_MELB"};
        mass = 60;
        tracersEvery = 1;
        count= 4000;
    };
    class Pylon_R_GUN_MELB_SOCOMD : Pylon_L_GUN_MELB_SOCOMD {
       model = "melb\proxies\pylon_m134_r";
        hardpoints[] = {"Right_MinigunMount_MELB"};
    };
    class CUP_14Rnd_FFAR_M;
    class CUP_PylonPod_7Rnd_Rocket_FFAR_M : CUP_14Rnd_FFAR_M {
        mass=100;
        hardpoints[] += {
            "RightMount_MELB_SOCOMD",
            "LeftMount_MELB_SOCOMD"
        };
    };
    class CUP_19Rnd_CRV7_FAT_M;
    class CUP_PylonPod_19Rnd_CRV7_FAT_M : CUP_19Rnd_CRV7_FAT_M {
        mass=250;
        hardpoints[] = {
            "CUP_SUPER_PYLON",
            "DAR",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "CUP_NATO_HELO_ROCKETS",
            "CUP_19Rnd_CRV7_FAT",
            "SOCOMD_HURRICANE_PYLON"
        };
    };
    class 6Rnd_ACE_Hellfire_AGM114K;
    class PylonRack_1Rnd_ACE_Hellfire_AGM114K : 6Rnd_ACE_Hellfire_AGM114K {
        mass=100;
        hardpoints[] = {
            "B_MISSILE_PYLON",
            "SCALPEL_1RND_EJECTOR",
            "B_ASRRAM_EJECTOR",
            "UNI_SCALPEL",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_MELB",
            "RightMount_MELB_SOCOMD",
            "LeftMount_MELB_SOCOMD",
            "SOCOMD_HURRICANE_PYLON"
        };
    };
    class PylonRack_1Rnd_ACE_Hellfire_AGM114N : PylonRack_1Rnd_ACE_Hellfire_AGM114K {
        mass=100;
        hardpoints[] = {
            "B_MISSILE_PYLON",
            "SCALPEL_1RND_EJECTOR",
            "B_ASRRAM_EJECTOR",
            "UNI_SCALPEL",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_MELB",
            "RightMount_MELB_SOCOMD",
            "LeftMount_MELB_SOCOMD",
            "SOCOMD_HURRICANE_PYLON"
        };
    };
    
    class PylonRack_3Rnd_ACE_Hellfire_AGM114K : 6Rnd_ACE_Hellfire_AGM114K {
        mass=300;
        hardpoints[] = {
            "B_MISSILE_PYLON",
            "UNI_SCALPEL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_LONGBOW_RACK",
            "SOCOMD_HURRICANE_PYLON"
        };
    };
    class PylonRack_3Rnd_ACE_Hellfire_AGM114N : PylonRack_3Rnd_ACE_Hellfire_AGM114K {
        mass=300;
        hardpoints[] = {
            "B_MISSILE_PYLON",
            "UNI_SCALPEL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_LONGBOW_RACK",
            "SOCOMD_HURRICANE_PYLON"
        };       
    };
    class PylonRack_4Rnd_ACE_Hellfire_AGM114K : 6Rnd_ACE_Hellfire_AGM114K {
        mass=400;
        hardpoints[] = {
            "UNI_SCALPEL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_HELLFIRE_RACK",
            "RHS_HP_LONGBOW_RACK",
            "SOCOMD_HURRICANE_PYLON"
        };
    };

    class PylonRack_4Rnd_ACE_Hellfire_AGM114N : PylonRack_4Rnd_ACE_Hellfire_AGM114K {
        mass=400;
        hardpoints[] = {
            "UNI_SCALPEL",
            "CUP_NATO_HELO_LARGE",
            "RHS_HP_HELLFIRE_RACK",
            "RHS_HP_LONGBOW_RACK",
            "SOCOMD_HURRICANE_PYLON"
        };
    };

    class magazine_Missile_HARM_x1;
    class PylonRack_Missile_HARM_x1 : magazine_Missile_HARM_x1 {
        mass=150;
        hardpoints[] = {
            "B_HARM_RAIL",
            "I_HARM_RAIL",
            "SOCOMD_HURRICANE_PYLON"
        };
    };
    
    class CUP_1Rnd_AIM_9L_Sidewinder_External_M;
    class CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M : CUP_1Rnd_AIM_9L_Sidewinder_External_M {
        // ammo = "CUP_M_AIM_9L_Sidewinder_AA";
        hardpoints[] = {
            "CUP_SUPER_PYLON",
            "CUP_NATO_HELO_SMALL",
            "CUP_NATO_HELO_LARGE",
            "CUP_NATO_HELO_WINGTIP",
            "CUP_1Rnd_AIM_9L",
            "SOCOMD_HURRICANE_PYLON",
            "RightMount_MELB_SOCOMD",
            "LeftMount_MELB_SOCOMD"
        };
        mass = 50;
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
        mass=200;
        hardpoints[] = {"RightMount_MELB_SOCOMD","LeftMount_MELB_SOCOMD"};
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