class CfgWeapons {
	// Base classes
	class ItemCore;
	class H_HelmetB;
	class H_Cap_red;
	class H_Bandanna_khk;
	class rhs_booniehat2_marpatd;
	
	// RHSSAF
	class rhssaf_helmet_base : H_HelmetB{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m59_85_nocamo : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m59_85_oakleaf : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_olive_nocamo : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_olive_nocamo_black_ess : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_olive_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_black_nocamo : rhssaf_helmet_m97_olive_nocamo{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_black_nocamo_black_ess : rhssaf_helmet_m97_olive_nocamo_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_black_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess_bare{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_woodland : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_digital : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_md2camo : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_oakleaf : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_nostrap_blue : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_nostrap_blue_tan_ess : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_nostrap_blue_tan_ess_bare : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_woodland_black_ess : rhssaf_helmet_m97_olive_nocamo_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_digital_black_ess : rhssaf_helmet_m97_woodland_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_md2camo_black_ess : rhssaf_helmet_m97_woodland_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_oakleaf_black_ess : rhssaf_helmet_m97_woodland_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_woodland_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_digital_black_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_md2camo_black_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_oakleaf_black_ess_bare : rhssaf_helmet_m97_woodland_black_ess_bare{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_veil_Base : rhssaf_helmet_m97_woodland{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_veil_woodland : rhssaf_helmet_m97_veil_Base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_veil_digital : rhssaf_helmet_m97_veil_Base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_veil_md2camo : rhssaf_helmet_m97_veil_Base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_helmet_m97_veil_oakleaf : rhssaf_helmet_m97_veil_Base{
		rgoc_canAcceptNVG = 1;
	};
	class rhssaf_beret_green : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_beret_red : rhssaf_beret_green{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_beret_para : rhssaf_beret_green{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_beret_black : rhssaf_beret_green{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_beret_blue_un : rhssaf_helmet_base{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_booniehat_digital: rhs_booniehat2_marpatd{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_booniehat_md2camo: rhs_booniehat2_marpatd{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_booniehat_woodland: rhs_booniehat2_marpatd{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_bandana_digital: H_Bandanna_khk{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_bandana_digital_desert: rhssaf_bandana_digital{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_bandana_oakleaf: rhssaf_bandana_digital{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_bandana_smb: rhssaf_bandana_digital{
		rgoc_canAcceptNVG = 0;
	};
	class rhssaf_bandana_md2camo: rhssaf_bandana_digital{
		rgoc_canAcceptNVG = 0;
	};
};