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
        //model = "melb\proxies\pylon_m134_l";
		hardpoints[] = {"Left_MinigunMount_MELB"};
		mass = 60;
        tracersEvery = 1;
    };
    class Pylon_R_GUN_MELB_SOCOMD : Pylon_L_GUN_MELB_SOCOMD {
       // model = "melb\proxies\pylon_m134_r";
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

    class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
    class SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M: CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M{
        displayName="250rnd Mag 58 Box";
		count=250;
		ammo="CUP_B_762x51_Tracer_Red";
		descriptionShort="Mag 58 200rnd Box 7.62x51";
		mass=70;
		tracersEvery=5;
    };

    class CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M;
    class SOCOMD_RPK_MAGAZINE: CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M
	{
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="$STR_CUP_dn_rpk762_75rnd_M";
		ammo="CUP_B_545x39_Ball_Tracer_Green";
		count=75;
		type="2 * 256";
		picture="\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\M_RPK_74_CA.paa";
		tracersEvery=4;
		lastRoundsTracer=4;
		nameSound="mgun";
		descriptionShort="$STR_CUP_dss_rpk762_75rnd_M";
		mass=36;
		initSpeed=750;
		ACE_isBelt=0;
		model="\CUP\Weapons\CUP_Weapons_Ammunition\magazines\CUP_mag_75Rnd_RPK.p3d";
		modelSpecial="\CUP\Weapons\CUP_Weapons_Ammunition\magazines_proxy\CUP_mag_75Rnd_RPK.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\cup\weapons\cup_weapons_ak\data\rpk_magazine_drum_co.paa"
		};
	};

    // BTR-60PB
    class CUP_500Rnd_TE2_Green_Tracer_145x115_KPVT_M : VehicleMagazine {
        maxLeadSpeed = 300;
        // ammo = "CUP_B_145x115_AP_Green_Tracer";
    };
};