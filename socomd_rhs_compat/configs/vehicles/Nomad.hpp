////////////////////////////////////////////////////////////////////////////////
// NOMAD

/*
RHS_CH_47F_10 <== TARGET
RHS_CH_47F
RHS_CH_47F_base
Heli_Transport_02_base_F
Helicopter_Base_H
*/

class RHS_CH_47F_10;
class SOCOMD_NOMAD_A : RHS_CH_47F_10 {
	scope = public;
	scopeCurator = public;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Nomad (4/18)";

	hiddenSelectionsTextures[] = {
		"socomd_data\chinook\ch47_ext_1_co.paa",
		"socomd_data\chinook\ch47_ext_2_co.paa",
		"socomd_data\chinook\ch47f_nalepky_ca.paa"
	};
};