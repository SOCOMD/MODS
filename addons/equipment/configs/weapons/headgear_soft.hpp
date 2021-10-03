class AU_03_780000_v1;
class SOCOMD_BERET : AU_03_780000_v1 {
    rgoc_canAcceptNVG = 0;
    author = AUTHOR_STR;
    scope = SCOPE_PUBLIC;
    displayName = "SOCOMD Beret";
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