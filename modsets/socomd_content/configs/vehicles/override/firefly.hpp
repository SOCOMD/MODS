// Melb little birds overriding vanilla
class SOCOMD_FIREFLY_A : MELB_MH6M {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Firefly (2/6)";

	hiddenSelections[] = {"camo1","d_sn"};
	hiddenSelectionsTextures[] = {
		"socomd_data_core\ah6\ah6_hull_co.paa",
		"melb\data\decals\sn\blank_ca.paa"
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

	hiddenSelections[] = {"camo1","d_sn"};
	hiddenSelectionsTextures[] = {
		"socomd_data_core\ah6\ah6_hull_co.paa",
		"melb\data\decals\sn\blank_ca.paa"
	};
};