class CfgLoadoutWeapons
{
    class Rifle_556
    {
        loadoutWhitelist[] = { 
                "SASR_Rifleman",
                "SASR_Sapper",
                "SASR_Medic",
                "SASR_LAT",
                "SASR_MAT",
                "SASR_HAT"
            };

        magazines[] = {
                {"SMA_30Rnd_556x45_M855A1", 8}
            };
    };
    
    class SMA_MK18MOEBLK_SM : Rifle_556 { };
    class SMA_AUG_A3_F : Rifle_556 { };
    class SMA_M4afgSTOCK : Rifle_556 { };
	class SMA_HK416CUSTOMCQBvfgB : Rifle_556 { };

    class RifleGL_556
    {
        loadoutWhitelist[] = {
                "SASR_TroopLeader",
                "SASR_PatrolLeader",
                "SASR_Grenadier"
            };

        magazines[] = {
                {"SMA_30Rnd_556x45_M855A1", 8},
                {"1Rnd_HE_Grenade_shell", 8},
                {"UGL_FlareRed_F", 2},
                {"1Rnd_SmokeRed_Grenade_shell", 2}
            };
    };

    class SMA_MK18BLK_GL_SM : RifleGL_556 { };    
    class SMA_AUG_EGLM : RifleGL_556 { };
    class SMA_M4_GL_SM : RifleGL_556 { };
	class SMA_HK416GLCQB_B : RifleGL_556 { };

    class CUP_lmg_m249_pip2 {
        loadoutWhitelist[] = {
            "SASR_MachineGunner"
        };

        magazines[] = {
            {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249", 4}
        };
    };
    
    class sma_minimi_mk3_762tsb {
        loadoutWhitelist[] = {
            "SASR_MachineGunner"
        };

        magazines[] = {
            {"SMA_150Rnd_762_M80A1", 4}
        };
    };

    class SPARTAN_EBR_black_F {
        loadoutWhitelist[] = {
                "SASR_Marksman",
				"SASR_TroopLeader",
                "SASR_PatrolLeader"
            };

        magazines[] = {
                {"20Rnd_762x51_Mag", 8}
            };
    };

    class SMA_HK417_16in {
        loadoutWhitelist[] = {
                "SASR_Marksman",
				"TAGE_Sniper"
            };

        magazines[] = {
                {"20Rnd_762x51_Mag", 8}
            };
    };
    class SMA_HK417vfg {
        loadoutWhitelist[] = {
                "SASR_Marksman",
				"SASR_TroopLeader",
                "SASR_PatrolLeader",
				"SASR_Grenadier"
            };

        magazines[] = {
                {"20Rnd_762x51_Mag", 8}
            };
    };	

    class hlc_rifle_awmagnum {
        loadoutWhitelist[] = {
                "SASR_Sniper"
            };

        magazines[] = {
                {"hlc_5rnd_300WM_FMJ_AWM", 9}
            };
    };

    class hlc_rifle_awMagnum_OD_ghillie {
        loadoutWhitelist[] = {
                "SASR_Sniper"
            };

        magazines[] = {
                {"hlc_5rnd_300WM_FMJ_AWM", 9}
            };
    };

    class hlc_rifle_awcovert {
        loadoutWhitelist[] = {
                "SASR_Sniper"
            };

        magazines[] = {
                {"hlc_5rnd_300WM_FMJ_AWM", 9}
            };
    };
	class hlc_rifle_awcovert_BL {
        loadoutWhitelist[] = {
                "TAGE_Sniper"
            };

        magazines[] = {
                {"hlc_5rnd_300WM_FMJ_AWM", 9}
            };
    };
	class ej_m107 {
        loadoutWhitelist[] = {
                "SASR_Sniper"
            };

        magazines[] = {
                {"Barret_mag", 6}
            };
    };
	class SMG_05_F {
        loadoutWhitelist[] = {
                "TAGE_Medic",
				"TAGE_TroopLeader",
				"TAGE_Sapper"
            };

        magazines[] = {
                {"30Rnd_9x21_Mag_SMG_02", 12}
            };
    };
	class SMA_MK18MOEBLK {
		loadoutWhitelist[] = {
				"TAGE_Medic",
				"TAGE_TroopLeader",
				"TAGE_Sapper"
			};
		
		magazines[] = {
                {"SMA_30Rnd_556x45_M855A1", 5}
            };
	};
};