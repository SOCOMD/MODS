//////////////////////////////////////////////////////////////////////
//RIFLES

class srifle_LRR_F;
class UK3CB_BAF_L115A3 : srifle_LRR_F 
{
	displayname = "SR98 .338 (Woodland)";
};

class UK3CB_BAF_L115A3_Desert : UK3CB_BAF_L115A3
{
	displayname = "SR98 .338 (Desert)";
};

class UK3CB_BAF_L115A3_Ghillie : UK3CB_BAF_L115A3 
{
	displayname = "SR98 .338 (Woodland/Ghillie)";
};

class UK3CB_BAF_L115A3_Desert_Ghillie : UK3CB_BAF_L115A3 
{
	displayname = "SR98 .338 (Desert/Ghillie)";
};

class srifle_GM6_F;
class UK3CB_BAF_L82A1 : srifle_GM6_F 
{
	displayname = "M82A1 BARRETT .50 BMG";
	magazines[] = {"5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "SOCOMD_DEM_10rnd_127x99mm"};
};

class UGL_F;
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
};

//////////////////////////////////////////////////////////////////////
// LIGHT MACHINE GUNS
class LMG_Zafir_F;
class UK3CB_BAF_L7A2 : LMG_Zafir_F 
{
	displayname = "FN MAG 58";
};