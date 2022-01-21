class Vest_Camo_Base;
#define VEST_ITEM_INFO\
    class ItemInfo: VestItem\
    {\
        containerClass="Supply150";\
        class HitpointsProtectionInfo\
        {\
            class Chest\
            {\
                hitpointName="HitChest";\
                armor=30;\
                passThrough=0.1;\
            };\
            class Diaphragm\
            {\
                hitpointName="HitDiaphragm";\
                armor=30;\
                passThrough=0.1;\
            };\
            class Abdomen\
            {\
                hitpointName="HitAbdomen";\
                armor=30;\
                passThrough=0.1;\
            };\
            class Body\
            {\
                hitpointName="HitBody";\
                passThrough=0.1;\
            };\
        };\
    };\

class lbt_pouchless_coy: Vest_Camo_Base{
    VEST_ITEM_INFO
};
class lbt_comms_coy;
class lbt_tl_mc: lbt_comms_coy{
    VEST_ITEM_INFO
};
// TFA STUFF 
class tfa_v_jpc_assaulter_ak_multicam: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_assaulter_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_assaulter_belt_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_grenadier_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_grenadier_belt_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_hgunner_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_hgunner_belt_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_light_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_marksman_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_marksman_belt_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_medic_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_medic_belt_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_teamleader_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
class tfa_v_jpc_teamleader_belt_rngrn: ItemCore	{
    VEST_ITEM_INFO
};
// removing patches
class socomd_tfa_v_jpc_assaulter_mc:tfa_v_jpc_assaulter_rngrn
{
    displayname = "JPC Multicam (Assaulter)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_assaulter_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};
class socomd_tfa_v_jpc_assaulter_belt_mc: tfa_v_jpc_assaulter_belt_rngrn
{
    displayname = "JPC Multicam w/Belt (Assaulter)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","tfa_vests2\data\patches\Patch2\2_set1_ca.paa","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_assaulter_belt_base.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","tfa_vests2\data\patches\Patch2\2_set1_ca.paa","","",""};
    };
};
class socomd_tfa_v_jpc_grenadier_mc: tfa_v_jpc_grenadier_rngrn
{
    displayname = "JPC Multicam (Grenadier)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_grenadier_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","",""};
    };
};
class socomd_tfa_v_jpc_grenadier_belt_mc: tfa_v_jpc_grenadier_belt_rngrn
{
    displayname = "JPC Multicam w/Belt (Grenadier)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_grenadier_belt_base.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","",""};
    };
};

class socomd_tfa_v_jpc_hgunner_mc: tfa_v_jpc_hgunner_rngrn
{
    displayname = "JPC Multicam (Heavy Gunner)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa"};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_hgunner_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa"};
    };
};

class socomd_tfa_v_jpc_hgunner_belt_mc: tfa_v_jpc_hgunner_belt_rngrn
{
    displayname = "JPC Multicam w/Belt (Heavy Gunner)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa"};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_hgunner_belt_base.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa"};
    };
};

class socomd_tfa_v_jpc_light_mc: tfa_v_jpc_light_rngrn
{
    displayname = "JPC Multicam (Light)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_light_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","",""};
    };
};

class socomd_tfa_v_jpc_marksman_mc: tfa_v_jpc_marksman_rngrn
{
    displayname = "JPC Multicam (Marksman)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_marksman_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};

class socomd_tfa_v_jpc_marksman_belt_mc: tfa_v_jpc_marksman_belt_rngrn
{
    displayname = "JPC Multicam w/Belt (Marksman)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_marksman_belt_base.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};
class socomd_tfa_v_jpc_medic_mc: tfa_v_jpc_medic_rngrn
{
    displayname = "JPC Multicam (Medic)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_medic_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};
class socomd_tfa_v_jpc_medic_belt_mc: tfa_v_jpc_medic_belt_rngrn
{
    displayname = "JPC Multicam w/Belt (Medic)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_medic_belt_base.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};
class socomd_tfa_v_jpc_teamleader_mc: tfa_v_jpc_teamleader_rngrn
{
    displayname = "JPC Multicam (Teamleader)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_teamleader_base.p3d";
        hiddenSelections[] = {"camo","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};
class socomd_tfa_v_jpc_teamleader_belt_mc: tfa_v_jpc_teamleader_belt_rngrn
{
    displayname = "JPC Multicam w/Belt (Teamleader)";
    picture = "\tfa_vests2\data\UI\icon_jpcmc_ca.paa";
    hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
    hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    class ItemInfo: ItemInfo
    {
        uniformModel = "tfa_vests2\tfa_v_jpc_teamleader_belt_base.p3d";
        hiddenSelections[] = {"camo","camo1","camo2","camo3","Patch1","Patch2","Patch3","Patch4"};
        hiddenSelectionsTextures[] = {"tfa_vests2\data\tfa_v_jpc_mc_co.paa","tfa_vests2\data\tfa_v_battle_belt_mc.paa","tfa_vests2\data\tfa_v_gear_01_mc_co.paa","tfa_vests2\data\tfa_v_gear_02_black_co.paa","","","",""};
    };
};