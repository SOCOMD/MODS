    
class AU_03_780000_v1;
class SOCOMD_BERET : AU_03_780000_v1 {
    rgoc_canAcceptNVG = 0;
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "SOCOMD Beret";
};


class SOCOMD_Aus_Boonie: H_Booniehat_khk_hs {
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "SOCOMD Booniehat MC";

    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\z\socomd\addons\data\CTgear\booniehat_co.paa"};
};
class SOCOMD_Aus_Boonie_AMC: H_Booniehat_khk_hs {
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "SOCOMD Booniehat AMCU";

    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\z\socomd\addons\data\CTgear\booniehat_AMC_co.paa"};
};
class CFP_BaseballCap_Multicam_DEF_Back : ItemCore {
    HEARING_PROTECTION_PELTOR
};
class CFP_BaseballCap_Multicam_DEF : ItemCore {
    HEARING_PROTECTION_PELTOR
};
class CUP_H_PMC_Cap_EP_Tan : ItemCore {
    HEARING_PROTECTION_PELTOR
};
class CUP_H_PMC_Cap_Back_EP_Tan : ItemCore {
    HEARING_PROTECTION_PELTOR
};