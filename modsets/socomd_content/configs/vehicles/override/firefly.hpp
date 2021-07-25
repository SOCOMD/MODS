// Melb little birds overriding vanilla
class SOCOMD_FIREFLY_A : MELB_MH6M {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;

	ace_fastroping_enabled = 1;
	ace_fastroping_ropeOrigins[] = {
		{-1.16, 0.78, -0.065},
		{ 1.16, 0.78, -0.065}
	};
	displayname = "Firefly (2/6)";
	mass=1220; // higher makes controls more sensitive default: 1220
	hiddenSelections[] = {"camo1","d_sn"};
	hiddenSelectionsTextures[] = {
		"socomd_data_core\ah6\ah6_hull_co.paa",
		"melb\data\decals\sn\blank_ca.paa"
	};
	armor = 30;
	armorStructural = 4;
	class HitPoints : HitPoints {
		class HitHull : HitHull {
			material = -1;
			armor = 4.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
		};
		class HitEngine : HitEngine {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitFuel : HitFuel {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitAvionics : HitAvionics {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			material = -1;
		};
		class HitGlass1 : HitGlass1 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
			material = -1;
		};
		class HitHRotor : HitHRotor {
			armor = 8.0;
			passThrough = 0.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitVRotor : HitVRotor {
			armor = 4.0;
			passThrough = 0.0;
			explosionShielding = 5.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitMissiles : HitMissiles {
			armor = 2.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
			material = -1;
		};
		class HitTransmission : HitTransmission {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
	};
};

class SOCOMD_DRAGONFLY_A : MELB_AH6M {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Dragonfly (2/1)";
	mass=1220; // higher makes controls more sensitive default: 1220
	hiddenSelections[] = {"camo1","d_sn"};
	hiddenSelectionsTextures[] = {
		"socomd_data_core\ah6\ah6_hull_co.paa",
		"melb\data\decals\sn\blank_ca.paa"
	};
	armor = 30;
	armorStructural = 4;
	class HitPoints : HitPoints {
		class HitHull : HitHull {
			material = -1;
			armor = 4.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
		};
		class HitEngine : HitEngine {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitFuel : HitFuel {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitAvionics : HitAvionics {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			material = -1;
		};
		class HitGlass1 : HitGlass1 {
			armor = 0.7;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
			material = -1;
		};
		class HitHRotor : HitHRotor {
			armor = 8.0;
			passThrough = 0.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitVRotor : HitVRotor {
			armor = 4.0;
			passThrough = 0.0;
			explosionShielding = 5.0;
			minimalHit = 0.01;
			material = -1;
		};
		class HitMissiles : HitMissiles {
			armor = 2.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
			material = -1;
		};
		class HitTransmission : HitTransmission {
			armor = 6.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
			material = -1;
		};
	};
};