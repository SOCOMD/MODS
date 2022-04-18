
class CfgLoadoutWeapons {
    class Rifle_556 {
        magazines[] = {
            {QUOTE(ITEM_MAGAZINE_556), 8}
        };
    };

    class RifleGL_556 {
        magazines[] = {
            {QUOTE(ITEM_MAGAZINE_556), 8}
        };
        grenades[] = {
            {"1Rnd_HE_Grenade_shell", 8}
        };
        commandGrenades[] = {
            {"UGL_FlareRed_F", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"ACE_HuntIR_M203", 3}
        };
        tacpGrenades[] = {
            {"1Rnd_SmokeRed_Grenade_shell", 6},
            {"ACE_HuntIR_M203", 3}
        };
    };
    class Rifle_545 {
        magazines[] = {
            {"rhs_30Rnd_545x39_7N10_AK", 8}
        };
    };

    class RifleGL_545 {
        magazines[] = {
            {"rhs_30Rnd_545x39_7N10_AK", 8}
        };
        grenades[] = {
            {"hlc_VOG25_AK", 8}
        };
        commandGrenades[] = {
            {"rhs_VG40OP_red", 2},
            {"hlc_GRD_Red", 2},
        };
        tacpGrenades[] = {
            {"hlc_GRD_Red", 6},
        };
    };
    class MachineGun_545 {
        magazines[] = {
            {"rhs_30Rnd_545x39_7N10_AK", 8}
        };
    };

    class MachineGun_556 {
        magazines[] = {
            {QUOTE(ITEM_MAGAZINE_556_BELT), 5}
        };
    };

    class MachineGun_762 {
        magazines[] = {
            {QUOTE(ITEM_MAGAZINE_762_BELT), 6}
        };
    };
    class MachineGun_762_heavy {
        magazines[] = {
            {QUOTE(ITEM_MAGAZINE_GPMG_BELT), 6}
        };
    };

    class MachineGun_762x54 {
        magazines[] = {
            {"rhs_100Rnd_762x54mmR", 4}
        };
    }

    class Rifle_762 {
        magazines[] = {
            {"20Rnd_762x51_Mag", 8}
        };
    };

    class Rifle_762x39 {
        magazines[] = {
            {"rhs_30Rnd_762x39mm_polymer", 8}
        };
    }

    class RifleGL_762x39 {
        magazines[] = {
            {"rhs_30Rnd_762x39mm_polymer", 8}
        };
        grenades[] = {
            {"hlc_VOG25_AK", 8}
        };
        commandGrenades[] = {
            {"rhs_VG40OP_red", 2},
            {"hlc_GRD_Red", 2},
        };
        tacpGrenades[] = {
            {"hlc_GRD_Red", 6},
        };
    };

    class Breacher_Shotgun{
        magazines[]={
            {"SOCOMD_Breaching_Slug",18}
        };
    };

    class Sniper_762x54R {
        magazines[] = {
            {"rhs_10Rnd_762x54mmR_7N1", 14}
        };
    };

    class Rifle_300 {
        magazines[] = {
            {"hlc_5rnd_300WM_FMJ_AWM", 12}
        };
    };
    class SSO_Rifle_338 {
        magazines[] ={
            {"rhs_5Rnd_338lapua_t5000",12}
        };
    };

    class SOCOMD_SSO_RPK {
        magazines[]={
            {"hlc_45Rnd_545x39_EP_rpkm",7}
        };
    };
    class SOCOMD_pkp_acc {
        magazines[]={
            {"rhs_100Rnd_762x54mmR",5}
        };
    };
    class SOCOMD_SSO_AK_GL {
        magazines[] = {
            {"AGE_30Rnd_545x39mm_Mag", 8},
            {"hlc_VOG25_AK", 8}
        };
        commandGrenades[] = {
            {"rhs_VG40OP_red", 2},
            {"hlc_GRD_Red", 2},
            {"ACE_HuntIR_M203", 3}
        };
    };
    class rhs_weap_m82a1  {
        magazines[] = {
            {"rhsusf_mag_10Rnd_STD_50BMG_M33", 6}
        };
    };
    class Recon_338 {
        magazines[] = {
            {"ACWP_5rnd_338LM_base", 7},
            {"ACWP_5rnd_338LM_APDS", 2}
        };
    };
    class PISTOL_USP {
        startLoaded = 1;
        magazines[] ={
            {"ACWP_18Rnd_9x21_Mag_USP",3}
        };
    };
    class PISTOL_HP {
        startLoaded = 1;
        magazines[] ={
            {"ACWP_13Rnd_9x21_Mag_HP",3}
        };
    };
    class PISTOL_GLOCK {
        startLoaded = 1;
        magazines[] ={
            {"ACWP_19Rnd_9x21_Mag_glock",3}
        };
    };
    class PISTOL_9x21 {
        startLoaded = 1;
        magazines[] = {
            {"rhs_18rnd_9x21mm_7N29", 3}
        };
    }
    class PISTOL_9x19 {
        startLoaded = 1;
        magazines[] = {
            {"rhs_mag_9x19_17", 3}
        };
    }
    class Launcher {
        magazines[] = {};
    };
    class SOCOMD_RPG7{

        magazines[] ={
            {"rhs_rpg7_PG7VL_mag",3},
        };
    };
};
