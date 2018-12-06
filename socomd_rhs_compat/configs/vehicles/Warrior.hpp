////////////////////////////////////////////////////////////////////////////////
// WARRIOR

/*
RHS_UH60M_D <== TARGET
RHS_UH60M
RHS_UH60M_US_base
RHS_UH60M_base
RHS_UH60_Base
Heli_Transport_01_base_F
Helicopter_Base_H
*/

class RHS_UH60M_D;
class SOCOMD_WARRIOR_A : RHS_UH60M_D {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	displayname = "Warrior (4/12)";

	hiddenSelectionsTextures[] = {
		"socomd_data\blackhawk\uh60m_fuselage_co.paa",
		"socomd_data\blackhawk\uh60m_engine_co.paa",
		"socomd_data\blackhawk\default_co.paa"
	};
};