
class CfgGlasses {
    class EWK_Shemag_LULZ {
        author = AUTHOR_STR;
        identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
        scope = 1;
    };
    class None;
    //Add Overlay to Gasmasks
    class Mask_M40:None {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\GasMask.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\GasMaskCracked.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
        scope = 2;
    };
    class SP_GasMask_Black : Mask_M40 {
        model = "";
    };
    class Mask_M40_OD:Mask_M40 {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\GasMask.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\GasMaskCracked.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
        identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
        scope = 2;
    };
    class Mask_M50:None {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\GasMask.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\GasMaskCracked.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
        scope = 2;
    };
    class G_AirPurifyingRespirator_01_base_F {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\GasMask.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\GasMaskCracked.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
    };
    class G_AirPurifyingRespirator_02_base_F {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\GasMask.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\GasMaskCracked.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
    };
    
    class G_RegulatorMask_base_F {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\GasMask.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\GasMaskCracked.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
    };
    //Add Blinding to Blindfold
    class G_Blindfold_01_base_F {
        ACE_Overlay = "\z\socomd\addons\data\CTgear\blindfold.paa";
        ACE_OverlayCracked = "\z\socomd\addons\data\CTgear\blindfold.paa";
        ACE_Protection = 1;
        ACE_Resistance = 2;
    };

    class FGN_CAG_glasses_class;
    class FGN_CAG_Tactical_clr_Shemagh_amcu: FGN_CAG_glasses_class
    {
        displayname = "Face Shield + Clear Glasses /Shmgh (AMCU)";
        scope = 2;
        author = "Adacas & Fingolfin";
        model = "\FGN_CAG\f_face_shield_base.p3d";
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "_Shades",
            "_ESS"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\socomd\addons\data\CTgear\f_Face_shield_amc_co.paa",
            "milgp_headgear\textures\f_shemagh_khk_co.paa"
        };
    };
    class FGN_CAG_Tactical_clr_amcu: FGN_CAG_glasses_class
    {
        displayname = "Face Shield + Clear Glasses (AMCU)";
        scope = 2;
        author = "Adacas & Fingolfin";
        model = "\FGN_CAG\f_face_shield_base.p3d";
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "_Shades",
            "_ESS"
        };
        hiddenSelectionsTextures[] =
        {
            "\z\socomd\addons\data\CTgear\f_Face_shield_amc_co.paa",
            ""
        };
    };
    class milgp_f_face_shield_MC;
    class SOCOMD_faceshield_AMCU : milgp_f_face_shield_MC
    {
        displayname = "Face Shield (AMCU)";
        scope = 2;
        hiddenSelections[] = {"camo","_Tactical","_Shades","_ESS","_Shemagh"};
        hiddenSelectionsTextures[] = {"\z\socomd\addons\data\CTgear\f_Face_shield_amc_co.paa"};
    };
    class milgp_f_face_shield_tactical_MC;
    class SOCOMD_faceshield_tac_AMCU : milgp_f_face_shield_tactical_MC
    {
        displayname = "Face Shield + Tactical(AMCU)";
        scope = 2;
        hiddenSelections[] = {"camo","_Shades","_ESS","_Shemagh"};
        hiddenSelectionsTextures[] = {"\z\socomd\addons\data\CTgear\f_Face_shield_amc_co.paa"};
    };
    class FGN_CAG_Tactical_clr_Shemagh_mc: FGN_CAG_glasses_class
    {
        displayname = "Face Shield + Clear Glasses /Shmgh (MC)";
        scope = 2;
        author = "Adacas & Fingolfin";
        model = "\FGN_CAG\f_face_shield_base.p3d";
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "_Shades",
            "_ESS"
        };
        hiddenSelectionsTextures[] =
        {
            "milgp_headgear\textures\f_face_shield_MC_co.paa",
            "milgp_headgear\textures\f_shemagh_khk_co.paa"
        };
    };
    class FGN_CAG_Tactical_clr_mc: FGN_CAG_glasses_class
    {
        displayname = "Face Shield + Clear Glasses (MC)";
        scope = 2;
        author = "Adacas & Fingolfin";
        model = "\FGN_CAG\f_face_shield_base.p3d";
        hiddenSelections[] =
        {
            "camo",
            "camo1",
            "_Shades",
            "_ESS"
        };
        hiddenSelectionsTextures[] =
        {
            "milgp_headgear\textures\f_face_shield_MC_co.paa",
            ""
        };
    };
};