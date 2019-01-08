// modify damage model of warrior
class CUP_B_UH60M_US : CUP_Uh60_Base {
	armorStructural = 4; // default 4

	class AnimationSources : AnimationSources {
		class Filters_Hide;
	};

	class HitPoints : Hitpoints {
		class HitHull {
			armor = 14;// default 1
			material = -1;
			// destroy the shit out of the hull so it looks banged up from the outside.
			explosionShielding = 10;
			name = "trup";
			passThrough = 3;
			visual = "trup";
		};
		class HitAvionics : HitAvionics {
			material = -1;// default 51
		};
		class HitEngine {
			// 0.05 armor = 9 shots with 12.7mm to disable
			armor = 12; // default 0.5
			material = -1;// default 51
			name = "motor";
			passThrough = 0.7;
			visual = "motor";
			explosionShielding = 10.0;
		};
		class HitEngine1 : HitEngine {
			material = -1;// default 51
			name = "engine_1_hit";
			convexComponent = "engine_1_hit";
			// armor = 0.25;
			// passThrough = 1;
		};
		class HitEngine2 : HitEngine {
			material = -1;// default 51
			name = "engine_2_hit";
			convexComponent = "engine_2_hit";
			// armor = 0.25;
			// passThrough = 1;
		};
		class HitEngine3 : HitEngine {
			material = -1;// default 51
			name = "engine_3_hit";
			convexComponent = "engine_3_hit";
			// armor = 0.25;
			// passThrough = 1;
		};
		class HitFuel : HitHull {
			convexComponent = "fuel_hit";
			name = "fuel_hit";
			material = -1;
			// armor = 1;
			// passThrough = 1;
		};
		class HitGear {
			armor = 0.9;
			material = -1;
			name = "gear";
			passThrough = 0;
		};
		class HitGlass1 {
			armor = 2;
			material = -1;
			name = "glass1";
			passThrough = 0;
			visual = "glass1";
		};
		class HitGlass2 {
			armor = 2;
			material = -1;
			name = "glass2";
			passThrough = 0;
			visual = "glass2";
		};
		class HitGlass3 {
			armor = 2;
			material = -1;
			name = "glass3";
			passThrough = 0;
			visual = "glass3";
		};
		class HitGlass4 {
			armor = 2;
			material = -1;
			name = "glass4";
			passThrough = 0;
			visual = "glass4";
		};
		class HitGlass5 {
			armor = 2;
			material = -1;
			name = "glass5";
			passThrough = 0;
			visual = "glass5";
		};
		class HitGlass6 {
			armor = 2;
			material = -1;
			name = "glass6";
			passThrough = 0;
			visual = "glass6";
		};
		class HitHRotor {
			armor = 40; // default 0.5
			material = -1;// default 51
			name = "velka vrtule";
			passThrough = 0.3; // default 0.1
			visual = "velka vrtule staticka";
		};
		class HitHStabilizerL1 {
			armor = 0.8;
			material = -1;
			name = "HStabilizerL1";
			passThrough = 0.1;
		};
		class HitHStabilizerR1 {
			armor = 0.8;
			material = -1;
			name = "HStabilizerR1";
			passThrough = 1;
		};
		class HitHydraulics {
			armor = 0.8;
			material = -1;
			name = "hydraulics";
			passThrough = 0.8;
		};
		class HitLGlass {
			armor = 0.1;
			convexComponent = "sklo predni L";
			explosionShielding = 1;
			material = -1;// default 51
			name = "sklo predni L";
			passThrough = 0;
			visual = "sklo predni L";
		};
		class HitLight {
			armor = 0.1;
			material = -1;
			name = "light";
			passThrough = 0;
		};
		class HitMissiles : HitMissiles {
			armor = 0.1;
			convexComponent = "ammo_hit";
			explosionShielding = 1;
			material = -1;// default 51
			name = "ammo_hit";
			passThrough = 0.5;
			visual = "munice";
		};
		class HitPitotTube {
			armor = 0.5;
			material = -1;
			name = "pitot tube";
			passThrough = 0.2;
		};
		class HitRGlass {
			armor = 0.1;
			convexComponent = "sklo predni P";
			explosionShielding = 1;
			material = -1;// default 51
			name = "sklo predni P";
			passThrough = 0;
			visual = "sklo predni P";
		};
		class HitStarter1 {
			armor = 0.1;
			material = -1;
			name = "starter1";
			passThrough = 0;
		};
		class HitStarter2 {
			armor = 0.1;
			material = -1;
			name = "starter2";
			passThrough = 0;
		};
		class HitStarter3 {
			armor = 0.1;
			material = -1;
			name = "starter3";
			passThrough = 0;
		};
		class HitStaticPort {
			armor = 0.1;
			material = -1;
			name = "static port";
			passThrough = 1;
		};
		class HitTail {
			armor = 0.8;
			material = -1;
			name = "tail boom";
			explosionShielding = 1.0;
			passThrough = 0.4;
		};
		class HitTransmission {
			armor = 12;
			material = -1;
			name = "transmission";
			passThrough = 0.4;
			explosionShielding = 10.0;
		};
		class HitVRotor {
			armor = 0.5;
			material = -1;// default 51
			name = "mala vrtule";
			passThrough = 0.4;
			explosionShielding = 1.0;
			visual = "mala vrtule staticka";
		};
		class HitVStabalizer1 {
			armor = 0.8;
			material = -1;
			name = "VStabilizer1";
			explosionShielding = 1.0;
			passThrough = 0.1;
		};
		class HitWinch {
			armor = -40;
			material = -1;// default 51
			name = "slingLoad0";
			passThrough = 0;
			radius = 0.1;
			visual = "";
		};
	};
};


/*
CUP_B_UH60M_US <== TARGET
CUP_Uh60_Base
Helicopter_Base_H
*/

class SOCOMD_WARRIOR_A : CUP_B_UH60M_US {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	displayname = "Warrior (4/12)";

	class AnimationSources : AnimationSources {
		class Filters_Hide : Filters_Hide {
			animPeriod = 1;
			DisplayName = "Hide Filters";
			initphase = 1;
		};
	};
	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\blackhawk\uh60m_fuselage_co.paa",
		"socomd_data_cup\data\blackhawk\uh60m_engine_co.paa",
		"socomd_data_cup\data\blackhawk\default_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////

/*
CUP_B_UH60M_FFV_US <== TARGET
CUP_Uh60_FFV_Base
CUP_Uh60_Base
Helicopter_Base_H
*/

class CUP_B_UH60M_FFV_US;
class SOCOMD_WARRIOR_B : CUP_B_UH60M_FFV_US {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	displayname = "Warrior FFV (4/8)";

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\blackhawk\uh60m_fuselage_co.paa",
		"socomd_data_cup\data\blackhawk\uh60m_engine_co.paa",
		"socomd_data_cup\data\blackhawk\default_co.paa"
	};
};