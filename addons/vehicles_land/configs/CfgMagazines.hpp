class CfgMagazines {
    class VehicleMagazine;
    class CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M;
    class SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M: CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M{
        displayName="250rnd Mag 58 Box";
        count=250;
        ammo="CUP_B_762x51_Tracer_Red";
        descriptionShort="Mag 58 200rnd Box 7.62x51";
        mass=22;
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
	/*
    class CUP_500Rnd_TE2_Green_Tracer_145x115_KPVT_M : VehicleMagazine {
        maxLeadSpeed = 400;
        // ammo = "CUP_B_145x115_AP_Green_Tracer";
    };
	*/
};