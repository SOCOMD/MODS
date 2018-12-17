
class UGL_F;

////////////////////////////////////////////////////////////////////////////////
// M4A5

class SMA_M4_BASE;
class SMA_M4afgSTOCK : SMA_M4_BASE {
	displayName = "M4A5";
};

class SMA_M4_GL_SM : SMA_M4_BASE {
	displayName = "M4A5 UGL";
};

////////////////////////////////////////////////////////////////////////////////
// HK 416

class SMA_HK416_BASE;

#define FIX_SMA_HK416GL(CLASSNAME, SUBCLASS) class CLASSNAME : SUBCLASS \
{ \
	class HK_GL : UGL_F \
	{ \
		magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"}; \
	}; \
	class EGLM : UGL_F \
	{ \
		magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"}; \
	}; \
};

FIX_SMA_HK416GL(SMA_HK416GL,SMA_HK416_BASE)
FIX_SMA_HK416GL(SMA_HK416GLCQB,SMA_HK416GL)
FIX_SMA_HK416GL(SMA_HK416GLCQB_B,SMA_HK416GL)
FIX_SMA_HK416GL(SMA_HK416GLCQB_ODP,SMA_HK416GL)
FIX_SMA_HK416GL(SMA_HK416CQBGLOD,SMA_HK416GL)
FIX_SMA_HK416GL(SMA_HK416GLOD,SMA_HK416GL)
FIX_SMA_HK416GL(SMA_HK416_GL_ODPAINTED,SMA_HK416GL)

////////////////////////////////////////////////////////////////////////////////
// HK 417

class SMA_HK417_16in;

////////////////////////////////////////////////////////////////////////////////
// Maximi

class sma_minimi_762_base_F;
class sma_minimi_mk3_762tsb : sma_minimi_762_base_F
{
	displayName = "Mk 48 Maximi";
};

////////////////////////////////////////////////////////////////////////////////
// Minimi

class CUP_lmg_minimi_railed;
class CUP_lmg_m249_pip2 : CUP_lmg_minimi_railed
{
	displayName = "FN Minimi HS";
};

////////////////////////////////////////////////////////////////////////////////
//AW Magnum

class hlc_rifle_awmagnum;

////////////////////////////////////////////////////////////////////////////////
//MP5

class CUP_smg_MP5A5;