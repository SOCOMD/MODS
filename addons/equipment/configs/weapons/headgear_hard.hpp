
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
    HEARING_PROTECTION_VICCREW
};

class H_CrewHelmetHeli_B;
class H_CrewHelmetHeli_O : H_CrewHelmetHeli_B {
    HEARING_PROTECTION_VICCREW
};

class H_HelmetCrew_B;
class H_HelmetCrew_I :H_HelmetCrew_B {
    HEARING_PROTECTION_VICCREW
};
class ADFU_H_OpsCore_02;

class ADFU_H_OpsCore_03 : ItemCore {
    HEARING_PROTECTION_PELTOR
};
class ADFU_H_OpsCore_08 : ItemCore {
    HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_03 : ItemCore {
    HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_10 : ItemCore {
    HEARING_PROTECTION_PELTOR
};


class ADFU_H_Airframe_Cover_05;

class ADFU_H_Airframe_Cover_02;

////////////////////////////////////////////////////////////////////////////////
//ADFU Helmets

class ADFU_H_OpsCore_02_BLK: ADFU_H_OpsCore_02 {
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
    
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};
class ADFU_H_OpsCore_02_MC: ADFU_H_OpsCore_02{
    
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};
class ADFU_H_OpsCore_08_TAN: ADFU_H_OpsCore_08{
    
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};
class ADFU_H_OpsCore_08_MC: ADFU_H_OpsCore_08{
    
    scope = SCOPE_PUBLIC;
    scopeArsenal = 2;

    HELMET_ARMOR_STRONG
};

//////////////////////////////////////////////////////////////////////
// SOLS Overrides
class rhsusf_opscore_01;
class rhsusf_hgu56p : rhsusf_opscore_01 {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};
class rhsusf_hgu56p_black : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_black : rhsusf_hgu56p_black {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_black : rhsusf_hgu56p_black {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_black : rhsusf_hgu56p_black {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_Empire_black : rhsusf_hgu56p_black {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_black_skull : rhsusf_hgu56p_visor_mask_black {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_black_skull : rhsusf_hgu56p_visor_mask_black_skull {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_green : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_green : rhsusf_hgu56p_green {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_green : rhsusf_hgu56p_green {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_green : rhsusf_hgu56p_green {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};


class rhsusf_hgu56p_mask_green_mo : rhsusf_hgu56p_mask_green {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};
class rhsusf_hgu56p_visor_mask_green_mo : rhsusf_hgu56p_visor_mask_green {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_mo : rhsusf_hgu56p_mask {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_skull : rhsusf_hgu56p_mask {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_mo : rhsusf_hgu56p_visor_mask {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_skull : rhsusf_hgu56p_visor_mask {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_pink : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_pink : rhsusf_hgu56p_pink {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_pink : rhsusf_hgu56p_pink {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_pink : rhsusf_hgu56p_pink {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_saf : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_saf : rhsusf_hgu56p_saf {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_saf : rhsusf_hgu56p_saf {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_saf : rhsusf_hgu56p_visor_saf {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_smiley : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_smiley : rhsusf_hgu56p_mask_smiley {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_tan : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_mask_tan : rhsusf_hgu56p_tan {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_tan : rhsusf_hgu56p_tan {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_mask_tan : rhsusf_hgu56p_tan {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_usa : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class rhsusf_hgu56p_visor_usa : rhsusf_hgu56p_usa {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};
class rhsusf_hgu56p_white : rhsusf_hgu56p {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};
class rhsusf_hgu56p_visor_white : rhsusf_hgu56p_white {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};
class rhsusf_ihadss : rhsusf_opscore_01 {
    
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

class SOCOMD_Ground_Crew_helmet : H_HelmetCrew_I {
    
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "Armour Crew Helmet";
    HELMET_SOLS_ARMOR
    HEARING_PROTECTION_VICCREW
};

