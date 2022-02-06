
    class Uniform_Base;
class U_B_CombatUniform_mcam;

class ADFU_G3_MC;
class SOCOMD_Uniform_SleevesDown : ADFU_G3_MC {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD MC Uniform";
};

class SOCOMD_Uniform_SleevesDown_Recon : ADFU_G3_MC {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD MC Recon Uniform";
};

class ADFU_G3_MC_Rolled;
class SOCOMD_Uniform_SleevesUp : ADFU_G3_MC_Rolled {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD MC Uniform (Rolled)";
};

class SOCOMD_Uniform_SleevesUp_Recon : ADFU_G3_MC_Rolled {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD MC Recon Uniform (Rolled)";
};

class U_B_Wetsuit;
class SOCOMD_Uniform_Wetsuit : U_B_Wetsuit {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD MC Wetsuit";
};
class SOCOMD_Uniform_Wetsuit_AMCU : U_B_Wetsuit{
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD AMCU Wetsuit ";
};

class SOCOMD_Commando_BLK_SleevesDown : ADFU_G3_MC {
    displayName = "SOCOMD Black Role";
    author = "SOCOMD & ADFU";
    class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="SOCOMD_Soldier_BLK_SleevesDown";
            containerClass="Supply80";
            mass=40;
        };
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};
class SOCOMD_Uniform_AMCU_SleevesDown : ADFU_G3_MC {
    displayName = "SOCOMD AMCU Uniform";
    author = "SOCOMD & ADFU";
    class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="SOCOMD_Soldier_AMC_SleevesDown";
            containerClass="Supply80";
            mass=40;
        };
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};

class SOCOMD_Uniform_AMCU_SleevesUp : ADFU_G3_MC_Rolled {
    displayName = "SOCOMD AMCU Uniform (Rolled)";
    author = "SOCOMD & ADFU";
    class ItemInfo: UniformItem
        {
            uniformModel="-";
            uniformClass="SOCOMD_Soldier_AMC_SleevesUp";
            containerClass="Supply80";
            mass=40;
        };
    model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};

class SOCOMD_Uniform_AMCU_SleevesUp_Recon : SOCOMD_Uniform_AMCU_SleevesUp {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD AMCU Recon Uniform (Rolled)";
};
class SOCOMD_Uniform_AMCU_SleevesDown_Recon : SOCOMD_Uniform_AMCU_SleevesDown {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayName = "SOCOMD AMCU Recon Uniform";
};

class SOCOMD_Uniform_Survival: Uniform_Base
{
    author="SOCOMD";
    scope=2;
    displayName="SOCOMD MC Survival Fatigues";
    picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="SOCOMD_Survival";
        containerClass="Supply80";
        uniformType="Neopren";
        mass=60;
    };
};

class SOCOMD_Uniform_AMCU_Survival: Uniform_Base
{
    displayName="SOCOMD AMCU Survival Fatigues";
    scope=2;
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="SOCOMD_Survival_AMCU";
        containerClass="Supply80";
        uniformType="Neopren";
        mass=60;
    };
};

class SOCOMD_Tee_base: Uniform_Base
{
    author="SOCOMD";
    scope=0;
    displayName="SOCOMD MC Tee";
    picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="SOCOMD_Tee";
        containerClass="Supply80";
        mass=40;
    };
};
class SOCOMD_Tee_uniform:SOCOMD_Tee_base{
    scope=2;
};
class SOCOMD_Tee_AMCU_uniform: SOCOMD_Tee_base
{
    displayName="SOCOMD AMCU Tee";
    scope=2;
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="SOCOMD_Tee_AMCU";
        containerClass="Supply80";
        mass=40;
    };
};

class SEAL_AOR1_U: Uniform_Base
{
    author="SOCOMD";
    scope=2;
    displayName="SEAL AOR1";
    picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="SEAL_AOR1";
        containerClass="Supply80";
        mass=40;
    };
};

class SEAL_AOR2_U: Uniform_Base
{
    author="SOCOMD";
    scope=2;
    displayName="SEAL AOR2";
    picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    class ItemInfo: UniformItem
    {
        uniformModel="-";
        uniformClass="SEAL_AOR2";
        containerClass="Supply80";
        mass=40;
    };
};

class U_B_FullGhillie_lsh;
class SOCOMD_Ghillie_lsh : U_B_FullGhillie_lsh {
    scope=1;
    SOCOMD_Ghillie = 1;
};
class SOCOMD_AMCU_Ghillie_lsh : U_B_FullGhillie_lsh {
    scope=1;
    SOCOMD_Ghillie = 1;
};

class U_B_FullGhillie_sard;
class SOCOMD_Ghillie_sard : U_B_FullGhillie_sard {
    scope=1;
    SOCOMD_Ghillie = 1;
};
class SOCOMD_AMCU_Ghillie_sard : U_B_FullGhillie_sard {
    scope=1;
    SOCOMD_Ghillie = 1;
};

class U_B_FullGhillie_ard;
class SOCOMD_Ghillie_ard : U_B_FullGhillie_ard {
    scope=1;
    SOCOMD_Ghillie = 1;
};
class SOCOMD_AMCU_Ghillie_ard : U_B_FullGhillie_ard {
    scope=1;
    SOCOMD_Ghillie = 1;
};

class U_B_T_FullGhillie_tna_F;
class SOCOMD_Ghillie_jngl : U_B_T_FullGhillie_tna_F {
    scope=1;
    SOCOMD_Ghillie = 1;
};
class SOCOMD_AMCU_Ghillie_jngl : U_B_T_FullGhillie_tna_F {
    scope=1;
    SOCOMD_Ghillie = 1;
};

    #include "weapons\g3set.hpp"
    #include "weapons\tshirt.hpp"
    #include "weapons\softshell.hpp"
    #include "weapons\overwhite.hpp"
    #include "weapons\pcu.hpp"