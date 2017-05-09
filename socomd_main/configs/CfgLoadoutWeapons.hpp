class CfgLoadoutWeapons
{
    class Rifle_556
    {
        loadoutWhitelist[] = { 
                "SASR_TroopLeader",
                "SASR_PatrolLeader",
                "SASR_Rifleman",
                "SASR_Grenadier",
                "SASR_Sapper",
                "SASR_Medic",
                "SASR_Marksman",
                "SASR_LAT",
                "SASR_MAT",
                "SASR_HAT"
            };

        magazines[] = {
                {"SMA_30Rnd_556x45_M855A1", 8}
            };
    };
    
    class SMA_MK18MOEBLK : Rifle_556 { };
    class SMA_AUG_A3_F : Rifle_556 { };
    class SMA_M4afgSTOCK : Rifle_556 { };

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
                {"UGL_FlareWhite_F", 2},
                {"UGL_FlareRed_F", 2},
                {"UGL_FlareGreen_F", 2},
                {"1Rnd_SmokeRed_Grenade_shell", 2}
            };
    };

    class SMA_MK18BLK_GL_SM : RifleGL_556 { };    
    class SMA_AUG_EGLM : RifleGL_556 { };
    class SMA_M4_GL_SM : RifleGL_556 { };
};