class HAFM_LAW; //LAT
class tf47_m3maaws; //MAT
class SOCOMD_Carl_Gustav : tf47_m3maaws {
	author = AUTHOR_STR;
	displayName = "Carl Gustav";
	ace_reloadlaunchers_enabled = 1;
};
class CUP_launch_Javelin; //HAT
// class CUP_launch_RPG7V;
class SOCOMD_RPG7 : CUP_launch_RPG7V {};
// law
class WeaponSlotsInfo;
class CUP_launch_M72A6_Loaded;
class SOCOMD_LAW_Loaded : CUP_launch_M72A6_Loaded {
	magazines[] = {"SOCOMD_M72_Rocket"};
	baseWeapon = "SOCOMD_LAW_Loaded";
	discreteDistance[] = {200};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 57.3;
	};
};
class SOCOMD_LAW: SOCOMD_LAW_Loaded
{
	author = "$STR_CUP_AUTHOR_STRING";
	baseWeapon = "SOCOMD_LAW";
	scope = 2;
	scopeArsenal = 2;
	magazines[] = {"CBA_FakeLauncherMagazine"};
};
class SOCOMD_LAW_Used: SOCOMD_LAW_Loaded
{
	author = "$STR_BWA3_Author";
	baseWeapon = "SOCOMD_LAW_Used";
	scope = 1;
	magazines[] = {"CBA_FakeLauncherMagazine"};
	model = "\CUP\Weapons\CUP_Weapons_M72A6\CUP_m72a6_used.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 17.3;
	};
};