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

class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
class ITEM_MAGAZINE_762_BELT: CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M {
    count = 100;
    mass = 40;
};

class ITEM_MAGAZINE_GPMG_BELT: CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M{
    displayName="250rnd Mag 58 Box";
    count=250;
    ammo="CUP_B_762x51_Tracer_Red";
    descriptionShort="Mag 58 200rnd Box 7.62x51";
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
class CUP_30Rnd_9x19_MP5;
class CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch;

class CA_LauncherMagazine;    // External class reference

class SOCOMD_M72_Rocket : CA_LauncherMagazine {
    scope = 2;
    displayName = "M72 Rocket";
    model = "\CUP\Weapons\CUP_Weapons_M72A6\CUP_m72a6_ammo.p3d";
    modelSpecial = "";
    picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\UI\M_M72A6_CA.paa";
    initSpeed = 40;
    descriptionShort = "LAW M72 Rocket";
    ammo = SOCOMD_M72_AD;
    type = 2*        256;
    mass = 10;
    allowedslots[] = {701, 801, 901};
};
class CUP_1Rnd_12Gauge_Slug;
class SOCOMD_Breaching_Slug: CUP_1Rnd_12Gauge_Slug{
    ammo = SOCOMD_BreachingRound;
    displayName = "Breaching Round";
};