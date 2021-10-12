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
class Launcher;
class Launcher_Base_F;
class CUP_launch_M72A6_Loaded: Launcher_Base_F{
    class WeaponSlotsInfo;
};
class SOCOMD_LAW_Loaded : CUP_launch_M72A6_Loaded {
    magazines[] = {"SOCOMD_M72_Rocket"};
    baseWeapon = "SOCOMD_LAW_Loaded";
    discreteDistance[] = {200};
    scope = 1;
    scopeArsenal = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 8.3;
    };
};
class SOCOMD_LAW: SOCOMD_LAW_Loaded
{
    author = "$STR_CUP_AUTHOR_STRING";
    displayName = "[SOCOMD] M72 LAW";
    baseWeapon = "SOCOMD_LAW";
    scope = 2;
    scopeArsenal = 2;
    magazines[] = {"CBA_FakeLauncherMagazine"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 17.3;
    };
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
        mass = 8.3;
    };
};
class twc_2inch_bag: Launcher_Base_F
{
    author = "[TWC] Rik & [TWC] lockoncap";
    scope = 2;
    displayname = "60mm Mortar";
    model = "twc_2inch\twc_2inch_bag.p3d";
    picture = "\twc_2inch\data\ui\w_2inch_ca.paa";
    UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
    magazines[] = {"twc_2inch_he_1rnd","twc_2inch_smoke_1rnd","twc_2inch_illum_1rnd"};
    handAnim[] = {};
};