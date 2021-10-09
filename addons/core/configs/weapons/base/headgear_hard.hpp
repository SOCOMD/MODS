

////////////////////////////////////////////////////////////////////////////////

class HeadgearItem;


// Monk's helmets
class acwp_airframe_mc_ct3_light_strap;
class acwp_airframe_mc_ct3_light;
class acwp_airframe_mc_light_strap;
class acwp_airframe_mc_light;
class acwp_airframe_mc_ct3_light_black_strap;
class acwp_airframe_mc_ct3_light_black;
class acwp_airframe_mc_light_black_strap;
class acwp_airframe_mc_light_black;
class acwp_airframe_mc_ct3_strap;
class acwp_airframe_mc_ct3;
class acwp_airframe_mc_strap;
class acwp_airframe_mc;
class acwp_airframe_amcu_ct3_light_strap:acwp_airframe_mc_ct3_light_strap
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Tan light) (A)";
    hiddenSelectionsTextures[] = {"acwp_carrier\data\helmet\manta_dark.paa","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa","acwp_carrier\data\helmet\manta_dark.paa"};
};
class acwp_airframe_amcu_ct3_light:acwp_airframe_mc_ct3_light
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Tan light) (B)";
    hiddenSelectionsTextures[] = {"acwp_carrier\data\helmet\manta_dark.paa","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa",""};
    
};
class acwp_airframe_amcu_light_strap:acwp_airframe_mc_light_strap
{    
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Tan light) (C)";
    hiddenSelectionsTextures[] = {"","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa","acwp_carrier\data\helmet\manta_dark.paa"};
};
class acwp_airframe_amcu_light:acwp_airframe_mc_light
{    
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Tan light) (D)";
    hiddenSelectionsTextures[] = {"","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa",""};
};
class acwp_airframe_amcu_ct3_light_black_strap:acwp_airframe_mc_ct3_light_black_strap
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Black light) (A)";
    hiddenSelectionsTextures[] = {"acwp_carrier\data\helmet\manta_dark.paa","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa","acwp_carrier\data\helmet\manta_dark.paa"};
};
class acwp_airframe_amcu_ct3_light_black:acwp_airframe_mc_ct3_light_black
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Black light) (B)";
    hiddenSelectionsTextures[] = {"acwp_carrier\data\helmet\manta_dark.paa","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa",""};
};
class acwp_airframe_amcu_light_black_strap:acwp_airframe_mc_light_black_strap
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (Black light) (C)";
    hiddenSelectionsTextures[] = {"","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa","acwp_carrier\data\helmet\manta_dark.paa"};
};
class acwp_airframe_amcu_light_black:acwp_airframe_mc_light_black
{
    HEARING_PROTECTION_PELTOR    
    displayName = "Crye Airframe AMCU (Black light) (D)";    
    hiddenSelectionsTextures[] = {"","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa",""};
};
class acwp_airframe_amcu_ct3_strap:acwp_airframe_mc_ct3_strap
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (No light) (A)";
    hiddenSelectionsTextures[] = {"acwp_carrier\data\helmet\manta_dark.paa","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa","acwp_carrier\data\helmet\manta_dark.paa"};
};
class acwp_airframe_amcu_ct3:acwp_airframe_mc_ct3
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (No light) (B)";
    hiddenSelectionsTextures[] = {"acwp_carrier\data\helmet\manta_dark.paa","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa",""};
};
class acwp_airframe_amcu_strap:acwp_airframe_mc_strap
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (No light) (C)";
    hiddenSelectionsTextures[] = {"","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa","acwp_carrier\data\helmet\manta_dark.paa"};
};
class acwp_airframe_amcu:acwp_airframe_mc
{
    HEARING_PROTECTION_PELTOR
    displayName = "Crye Airframe AMCU (No light) (D)";
    hiddenSelectionsTextures[] = {"","\z\socomd\addons\data\CTgear\h_airframe_cover_AMC_co.paa",""};
};


//TODO add peltors for Groud vic crew - @Slatery

class H_PilotHelmetHeli_B;
class H_PilotHelmetHeli_O : H_PilotHelmetHeli_B {
    class ItemInfo;
    HEARING_PROTECTION_VICCREW
};

class H_CrewHelmetHeli_B;
class H_CrewHelmetHeli_O : H_CrewHelmetHeli_B {
    class ItemInfo;
    HEARING_PROTECTION_VICCREW
};

class H_HelmetCrew_B;
class H_HelmetCrew_I :H_HelmetCrew_B {
    class ItemInfo;
    HEARING_PROTECTION_VICCREW
};

class ADFU_H_OpsCore_02 : ItemCore {
    class ItemInfo;
};

class ADFU_H_OpsCore_03 : ItemCore {
    class ItemInfo;
    HEARING_PROTECTION_PELTOR
};
class ADFU_H_OpsCore_08 : ItemCore {
    class ItemInfo;
    HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_03 : ItemCore {
    class ItemInfo;
    HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_10 : ItemCore {
    class ItemInfo;
    HEARING_PROTECTION_PELTOR
};


class ADFU_H_Airframe_Cover_05 : ItemCore {
    class ItemInfo;
};

class ADFU_H_Airframe_Cover_02 : ItemCore {
    class ItemInfo;
};

////////////////////////////////////////////////////////////////////////////////
//ADFU Helmets

class ADFU_H_OpsCore_02_BLK: ADFU_H_OpsCore_02 {
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;
    displayName = "OpsCore (Black)";
    picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";

    HELMET_ARMOR_STRONG
    
    hiddenSelections[]= {
        "camo",
        "camo2",
        "_Camera",
        "_Chemlights",
        "_CW",
        "_ESS",
        "_ESSglass",
        "_IR_Strobe",
        "_Peltor",
        "_Surefire",
        "_Manta_Back",
        "_Manta_Top",
        "_Vlite_Green",
        "_Vlite_Red"
    };

    hiddenSelectionsTextures[]= {
        "\z\socomd\addons\data\CTgear\h_opscore_black_co.paa",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
};

class ADFU_H_OpsCore_08_BLK: ADFU_H_OpsCore_08 {
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;
    displayName="OpsCore (Black)";
    picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";

    HELMET_ARMOR_STRONG

    hiddenSelections[]= {
        "camo",
        "camo2",
        "_Camera",
        "_Chemlights",
        "_CW",
        "_ESS",
        "_ESSglass",
        "_IR_Strobe",
        "_Peltor",
        "_Surefire",
        "_Manta_Back",
        "_Manta_Top",
        "_Vlite_Green",
        "_Vlite_Red"
    };

    hiddenSelectionsTextures[]= {
        "\z\socomd\addons\data\CTgear\h_opscore_black_co.paa",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\z\socomd\addons\data\CTgear\h_gear_01_black_co.paa",
        "",
        "",
        "",
        "",
        ""
    };
};
class ADFU_H_Airframe_Cover_02_MC: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;
};

class ADFU_H_Airframe_Cover_03_MC: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;
};
class ADFU_H_Airframe_Cover_10_MC: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;
};

class ADFU_H_Airframe_Cover_11_MC: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;
};

class ADFU_H_Airframe_02_tan: ADFU_H_Airframe_Cover_02 {
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;
    displayName="Airframe (Tan)";
    picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

    HELMET_ARMOR_STRONG

    hiddenSelections[]= {
        "_arc_peltor",
        "_camera",
        "_cover",
        "_face_cover",
        "_Manta_Rear",
        "_NVG_Battery",
        "_surefire_light",
        "camo",
        "camo2"
    };

    hiddenSelectionsTextures[]= {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\z\socomd\addons\data\CTgear\h_airframe_tan_co.paa",
        "\z\socomd\addons\data\CTgear\h_fast_khk_co.paa"
    };
};

class ADFU_H_Airframe_03_tan: ADFU_H_Airframe_Cover_03 {
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;
    displayName="Airframe (Tan)";
    picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

    HELMET_ARMOR_STRONG

    hiddenSelections[]= {
        "_arc_peltor",
        "_camera",
        "_cover",
        "_face_cover",
        "_Manta_Rear",
        "_NVG_Battery",
        "_surefire_light",
        "camo",
        "camo2"
    };

    hiddenSelectionsTextures[]= {
        "ADFU_Units\data\h_gear_01_khk_co.paa",
        "",
        "",
        "",
        "",
        "",
        "",
        "\z\socomd\addons\data\CTgear\h_airframe_tan_co.paa",
        "\z\socomd\addons\data\CTgear\h_fast_khk_co.paa"
    };
};

class ADFU_H_Airframe_10_tan: ADFU_H_Airframe_Cover_05 {
    HEARING_PROTECTION_PELTOR
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;
    displayName="Airframe (Tan)";
    picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

    HELMET_ARMOR_STRONG

    hiddenSelections[]= {
        "_arc_peltor",
        "_camera",
        "_cover",
        "_face_cover",
        "_Manta_Rear",
        "_NVG_Battery",
        "_surefire_light",
        "camo",
        "camo2"
    };

    hiddenSelectionsTextures[]= {
        "ADFU_Units\data\h_gear_01_khk_co.paa",
        "ADFU_Units\data\h_gear_01_khk_co.paa",
        "",
        "",
        "\z\socomd\addons\data\CTGear\manta_dark.paa",
        "",
        "ADFU_Units\data\h_gear_01_khk_co.paa",
        "\z\socomd\addons\data\CTgear\h_airframe_tan_co.paa",
        "\z\socomd\addons\data\CTgear\h_fast_khk_co.paa"
    };
};

class ADFU_H_Airframe_11_tan: ADFU_H_Airframe_Cover_05 {
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;
    displayName="Airframe (Tan)";
    picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

    HELMET_ARMOR_STRONG

    hiddenSelections[]= {
        "_arc_peltor",
        "_camera",
        "_cover",
        "_face_cover",
        "_Manta_Rear",
        "_NVG_Battery",
        "_surefire_light",
        "camo",
        "camo2"
    };

    hiddenSelectionsTextures[]= {
        "",
        "ADFU_Units\data\h_gear_01_khk_co.paa",
        "",
        "",
        "\z\socomd\addons\data\CTGear\manta_dark.paa",
        "",
        "ADFU_Units\data\h_gear_01_khk_co.paa",
        "\z\socomd\addons\data\CTgear\h_airframe_tan_co.paa",
        "\z\socomd\addons\data\CTgear\h_fast_khk_co.paa"
    };
};

class ADFU_H_Airframe_02_OD: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;};

class ADFU_H_Airframe_03_OD: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;};

class ADFU_H_Airframe_10_OD: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;};

class ADFU_H_Airframe_11_OD: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;};

class ADFU_H_Airframe_11_AMCU: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;
};

class ADFU_H_Airframe_10_AMCU: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;
};

class ADFU_H_Airframe_02_AMCU: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;};

class ADFU_H_Airframe_03_AMCU: acwp_airframe_mc {
    scope = 1;
    scopeArsenal = 1;};

class ADFU_H_OpsCore_02_TAN: ADFU_H_OpsCore_02{
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};
class ADFU_H_OpsCore_02_MC: ADFU_H_OpsCore_02{
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};
class ADFU_H_OpsCore_08_TAN: ADFU_H_OpsCore_08{
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};
class ADFU_H_OpsCore_08_MC: ADFU_H_OpsCore_08{
    rgoc_canAcceptNVG = 1;
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};

//////////////////////////////////////////////////////////////////////
// SOLS Overrides

class SOCOMD_Pilot_helmet : H_PilotHelmetHeli_O {
    rgoc_canAcceptNVG = 1;
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "Heli-Pilot Helmet";

    HELMET_SOLS_ARMOR
};

class SOCOMD_Crew_helmet : H_CrewHelmetHeli_O {
    rgoc_canAcceptNVG = 1;
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "Heli-Crew Helmet";

    HELMET_SOLS_ARMOR
};

class SOCOMD_Ground_Crew_helmet : H_HelmetCrew_I {
    rgoc_canAcceptNVG = 1;
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "Armour Crew Helmet";
    HELMET_SOLS_ARMOR
};


// Boonie hat remove armour values
class H_HelmetB:ItemCore{
    class ItemInfo;
};

class H_Booniehat_khk:H_HelmetB{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_khk_hs:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_dgtl:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_dirty:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_eaf:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_grn:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_indp:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_mcamo:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_mgrn:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_oli:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_taiga:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_tan:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_tna_F:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};
class H_Booniehat_wdl:H_Booniehat_khk{
    rgoc_canAcceptNVG = 0;
    HELMET_BOONIE_ARMOR
};