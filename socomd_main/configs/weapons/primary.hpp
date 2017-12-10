//////////////////////////////////////////////////////////////////////
//RIFLES

class UGL_F;
class SMA_M4_BASE;
class SMA_HK416_BASE;

class SMA_M4_GL_SM : SMA_M4_BASE
{
	displayName = "M4A5 UGL";
};

class SMA_M4afgSTOCK : SMA_M4_BASE
{
	displayName = "M4A5";
};

////////////////////////////////////////////////////////////////////////////////
// MODIFY SMA HK416GL

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

class sma_minimi_762_base_F;

class sma_minimi_mk3_762tsb : sma_minimi_762_base_F
{
	displayName = "Mk 48 Maximi";
};

class CUP_lmg_minimi_railed;

class CUP_lmg_m249_pip2 : CUP_lmg_minimi_railed
{
	displayName = "FN Minimi HS";
};

/*class UK3CB_BAF_L115_Base;
class UK3CB_BAF_L115A3 : UK3CB_BAF_L115_Base 
{
	displayname = "SR98 .338";
};*/

/*class UK3CB_BAF_L115A3_Ghillie : UK3CB_BAF_L115A3 
{
	displayname = "SR98 .338 (Ghillie)";
};*/

/*class srifle_GM6_F;
class UK3CB_BAF_L135A1 : srifle_GM6_F 
{
	displayname = "M82A1 BARRETT .50 BMG";
	magazines[] = {"UK3CB_BAF_127_10Rnd", "UK3CB_BAF_127_10Rnd_AP", "SOCOMD_DEM_10rnd_127x99mm"};
};*/

/*class UGL_F;
class Rifle_Base_F;
class RH_m4 : Rifle_Base_F
{
	class M203 : UGL_F
	{
		magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
	};
};

class RH_m110 : Rifle_Base_F
{
	magazines[] = {"RH_20Rnd_762x51_M80A1","RH_20Rnd_762x51_Mk316LR","RH_20Rnd_762x51_LFMJSB","20Rnd_762x51_Mag"};
};

class RH_SR25EC : RH_m110
{
	magazines[] = {"RH_20Rnd_762x51_M80A1","RH_20Rnd_762x51_Mk319","RH_20Rnd_762x51_LFMJSB","20Rnd_762x51_Mag"};
};*/

//////////////////////////////////////////////////////////////////////
// LIGHT MACHINE GUNS
/*class Rifle_Long_Base_F;
class UK3CB_BAF_L7A2 : Rifle_Long_Base_F 
{
	displayname = "FN MAG 58";
};*/