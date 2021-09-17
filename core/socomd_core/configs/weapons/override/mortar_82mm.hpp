/*
// issue with inheriting from mode burst, since cannoncore doesn't create it.
class Mode_Burst;
class CannonCore;
class mortar_82mm : CannonCore {
    //dispersion = 0.002;
    class Burst1 : Mode_Burst {
        // default: dispersion = 0.0005;
        dispersion = 0.2;
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        showToPlayer = 0;
        reloadTime = 1.8;
        soundBurst = 0;
        sounds[] = {"StandardSound"};
        soundServo[] = {"",0.0001,1};
        
        artilleryCharge = 0.35;
        artilleryDispersion = 2.2;
        aiBurstTerminable = 1;
        displayName = "Burst (close)";
        burst = 4;
        maxRange = 665;
        maxRangeProbab = 0.5;
        midRange = 290;
        midRangeProbab = 0.7;
        minRange = 60;
        minRangeProbab = 0.5;
    };
};*/

class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponsSlotsInfo;
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
		class weaponSlotsInfo: WeaponsSlotsInfo
		{
			mass = 105.8;
		};
	};