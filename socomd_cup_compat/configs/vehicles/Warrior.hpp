/*
CUP_B_UH60M_US <== TARGET
CUP_Uh60_Base
Helicopter_Base_H
*/

class CUP_B_UH60M_US;
class SOCOMD_WARRIOR_A : CUP_B_UH60M_US {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	displayname = "Warrior (4/12)";

	hiddenSelectionsTextures[] = {
		"socomd_data\blackhawk\uh60m_fuselage_co.paa",
		"socomd_data\blackhawk\uh60m_engine_co.paa",
		"socomd_data\blackhawk\default_co.paa"
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
		"socomd_data\blackhawk\uh60m_fuselage_co.paa",
		"socomd_data\blackhawk\uh60m_engine_co.paa",
		"socomd_data\blackhawk\default_co.paa"
	};
};