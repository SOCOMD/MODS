// vanilla
class 20Rnd_762x51_Mag;
class 11Rnd_45ACP_Mag;

//SMA
class SMA_30Rnd_556x45_M855A1;
class SMA_30Rnd_556x45_M855A1_Tracer;
//ACW
class ACWP_30rnd_556x45_EPR_PMAG;
class ACWP_30rnd_556x45_M_PMAG;

class ACWP_18Rnd_9x21_Mag_USP;

class rhsusf_100Rnd_762x51_m80a1epr;
class ITEM_MAGAZINE_762_BELT: rhsusf_100Rnd_762x51_m80a1epr {
    count = 150;
    mass = 18;
};

class ITEM_MAGAZINE_GPMG_BELT: rhsusf_100Rnd_762x51_m80a1epr{
    displayName="250rnd Mag 58 Box";
    count=250;
    mass=22;
    tracersEvery=5;
};

//HLC
class hlc_5rnd_300WM_FMJ_AWM;

class Barret_mag;
class Recon_Barret_mag : Barret_mag {
    count = 5;
};

//CUP

class CA_LauncherMagazine;    // External class reference

// class SOCOMD_M72_Rocket : CA_LauncherMagazine {
//     scope = 2;
//     displayName = "M72 Rocket";
//     model = "\CUP\Weapons\CUP_Weapons_M72A6\CUP_m72a6_ammo.p3d";
//     modelSpecial = "";
//     picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\UI\M_M72A6_CA.paa";
//     initSpeed = 40;
//     descriptionShort = "LAW M72 Rocket";
//     ammo = SOCOMD_M72_AD;
//     type = 2*        256;
//     mass = 10;
//     allowedslots[] = {701, 801, 901};
// };
class rhsusf_5Rnd_Slug;
class SOCOMD_Breaching_Slug_5rnd: rhsusf_5Rnd_Slug{
    ammo = SOCOMD_BreachingRound;
    displayName = "Breaching Round 5Rnd";
    mass = 5;
};
class SOCOMD_Breaching_Slug: SOCOMD_Breaching_Slug_5rnd{
    ammo = SOCOMD_BreachingRound;
    count = 1;
    displayName = "Breaching Round 1Rnd";
    mass = 1;
};