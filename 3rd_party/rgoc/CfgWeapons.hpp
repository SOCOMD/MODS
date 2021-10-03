class CfgWeapons{
	// custom nvg class with no NVG
    class NVGoggles;
    class ngoc_anti_nvg : NVGoggles {
        model="";
        visionMode[]=
        {
            "Normal"
        };
    };
    class ItemCore;
    class HelmetBase;
    class H_HelmetB: ItemCore {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_camo: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_paint: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_light: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_Booniehat_khk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_oli: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_indp: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_mcamo: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_grn: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_tan: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_dirty: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_dgtl: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_khk_hs: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_HelmetB_plain_mcamo: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_plain_blk: H_HelmetB_plain_mcamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecB: H_HelmetB_plain_mcamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecB_paint1: H_HelmetSpecB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecB_paint2: H_HelmetSpecB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecB_blk: H_HelmetSpecB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecB_snakeskin: H_HelmetSpecB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecB_sand: H_HelmetSpecB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetIA: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetIA_net: H_HelmetIA {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetIA_camo: H_HelmetIA {
        rgoc_canAcceptNVG = 1;
    };
	class H_Helmet_Kerry: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_grass: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_snakeskin: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_desert: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_black: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_sand: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_Cap_red: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_blu: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_oli: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_headphones: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_tan: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_blk: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_blk_CMMG: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_brn_SPECOPS: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_tan_specops_US: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_khaki_specops_UK: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_grn: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_grn_BI: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_blk_Raven: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_blk_ION: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_oli_hs: H_Cap_oli {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_press: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_usblack: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_surfer: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_police: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_HelmetCrew_B: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetCrew_O: H_HelmetCrew_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetCrew_I: H_HelmetCrew_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_PilotHelmetFighter_B: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_PilotHelmetFighter_O: H_PilotHelmetFighter_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_PilotHelmetFighter_I: H_PilotHelmetFighter_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_PilotHelmetHeli_B: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_CrewHelmetHeli_B: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_CrewHelmetHeli_I: H_CrewHelmetHeli_B {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetO_ocamo: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_MilCap_ocamo: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_mcamo: H_MilCap_ocamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_oucamo: H_MilCap_ocamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_rucamo: H_MilCap_oucamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_gry: H_MilCap_oucamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_dgtl: H_MilCap_oucamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_blue: H_MilCap_oucamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_HelmetB_light_grass: H_HelmetB_light {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_light_snakeskin: H_HelmetB_light {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_light_desert: H_HelmetB_light {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_light_black: H_HelmetB_light {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_light_sand: H_HelmetB_light {
        rgoc_canAcceptNVG = 1;
    };
	class H_BandMask_blk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_BandMask_khk: H_BandMask_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_BandMask_reaper: H_BandMask_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_BandMask_demon: H_BandMask_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_HelmetO_oucamo: H_HelmetO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetLeaderO_oucamo: H_HelmetLeaderO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecO_ocamo: H_HelmetO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecO_blk: H_HelmetSpecO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_Bandanna_surfer: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_khk: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_khk_hs: H_Bandanna_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_cbr: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_sgg: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_sand: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_surfer_blk: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_surfer_grn: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_gry: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_blu: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_camo: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Bandanna_mcamo: H_Bandanna_surfer {
        rgoc_canAcceptNVG = 0;
    };
	class H_Shemag_khk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Shemag_tan: H_Shemag_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Shemag_olive: H_Shemag_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Shemag_olive_hs: H_Shemag_olive {
        rgoc_canAcceptNVG = 0;
    };
	class H_ShemagOpen_khk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_ShemagOpen_tan: H_ShemagOpen_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_blk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_blk_POLICE: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_red: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_grn: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_grn_SF: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_brn_SF: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_ocamo: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_02: H_Beret_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_Colonel: H_Beret_02 {
        rgoc_canAcceptNVG = 0;
    };
	class H_Watchcap_blk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Watchcap_cbr: H_Watchcap_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Watchcap_khk: H_Watchcap_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Watchcap_camo: H_Watchcap_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Watchcap_sgg: H_Watchcap_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_TurbanO_blk: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_StrawHat: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_StrawHat_dark: H_StrawHat {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_blue: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_brown: H_Hat_blue {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_camo: H_Hat_blue {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_grey: H_Hat_blue {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_checker: H_Hat_blue {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_tan: H_Hat_blue {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_F: H_HelmetB_camo {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_2_F: H_RacingHelmet_1_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_3_F: H_RacingHelmet_1_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_4_F: H_RacingHelmet_1_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_black_F: H_RacingHelmet_1_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_blue_F: H_RacingHelmet_1_black_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_green_F: H_RacingHelmet_1_black_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_red_F: H_RacingHelmet_1_black_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_white_F: H_RacingHelmet_1_black_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_yellow_F: H_RacingHelmet_1_black_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_RacingHelmet_1_orange_F: H_RacingHelmet_1_black_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_marshal: H_Cap_headphones {
        rgoc_canAcceptNVG = 0;
    };

    // APEX
   class H_Helmet_Skate: H_HelmetB {
       rgoc_canAcceptNVG = 1;
   };
	class H_HelmetB_TI_tna_F: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetO_ViperSP_hex_F: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetO_ViperSP_ghex_F: H_HelmetO_ViperSP_hex_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_tna_F: H_HelmetB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_Enh_tna_F: H_HelmetSpecB {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetB_Light_tna_F: H_HelmetB_light {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetSpecO_ghex_F: H_HelmetSpecO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetLeaderO_ghex_F: H_HelmetLeaderO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetO_ghex_F: H_HelmetO_ocamo {
        rgoc_canAcceptNVG = 1;
    };
	class H_HelmetCrew_O_ghex_F: H_HelmetCrew_O {
        rgoc_canAcceptNVG = 1;
    };
	class H_MilCap_tna_F: H_MilCap_ocamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_ghex_F: H_MilCap_ocamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_Booniehat_tna_F: H_Booniehat_khk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Beret_gen_F: H_Beret_02 {
        rgoc_canAcceptNVG = 0;
    };
	class H_MilCap_gen_F: H_MilCap_ocamo {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_oli_Syndikat_F: H_Cap_oli {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_tan_Syndikat_F: H_Cap_tan {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_blk_Syndikat_F: H_Cap_blk {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_grn_Syndikat_F: H_Cap_grn {
        rgoc_canAcceptNVG = 0;
    };

    // Laws of War
    class H_Hat_Safari_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_Safari_sand_F: H_Hat_Safari_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Hat_Safari_olive_F: H_Hat_Safari_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_yellow_F: H_Construction_basic_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_white_F: H_Construction_basic_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_orange_F: H_Construction_basic_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_red_F: H_Construction_basic_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_vrana_F: H_Construction_basic_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_basic_black_F: H_Construction_basic_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_yellow_F: H_Construction_earprot_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_white_F: H_Construction_earprot_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_orange_F: H_Construction_earprot_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_red_F: H_Construction_earprot_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_vrana_F: H_Construction_earprot_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_earprot_black_F: H_Construction_earprot_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_yellow_F: H_Construction_headset_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_white_F: H_Construction_headset_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_orange_F: H_Construction_headset_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_red_F: H_Construction_headset_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_vrana_F: H_Construction_headset_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Construction_headset_black_F: H_Construction_headset_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_EarProtectors_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_EarProtectors_yellow_F: H_EarProtectors_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_EarProtectors_white_F: H_EarProtectors_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_EarProtectors_orange_F: H_EarProtectors_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_EarProtectors_red_F: H_EarProtectors_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_EarProtectors_black_F: H_EarProtectors_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadSet_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadSet_yellow_F: H_HeadSet_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadSet_white_F: H_HeadSet_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadSet_orange_F: H_HeadSet_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadSet_red_F: H_HeadSet_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadSet_black_F: H_HeadSet_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_PASGT_basic_base_F: HelmetBase {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_basic_blue_press_F: H_PASGT_basic_base_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_basic_blue_F: H_PASGT_basic_base_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_basic_white_F: H_PASGT_basic_base_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_basic_olive_F: H_PASGT_basic_base_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_basic_black_F: H_PASGT_basic_base_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_neckprot_base_F: HelmetBase {
        rgoc_canAcceptNVG = 1;
    };
	class H_PASGT_neckprot_blue_press_F: H_PASGT_neckprot_base_F {
        rgoc_canAcceptNVG = 1;
    };
	class H_HeadBandage_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadBandage_stained_F: H_HeadBandage_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadBandage_clean_F: H_HeadBandage_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_HeadBandage_bloody_F: H_HeadBandage_base_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_White_IDAP_F: H_Cap_red {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_Orange_IDAP_F: H_Cap_White_IDAP_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_Cap_Black_IDAP_F: H_Cap_White_IDAP_F {
        rgoc_canAcceptNVG = 0;
    };
	class H_WirelessEarpiece_base_F: HelmetBase {
        rgoc_canAcceptNVG = 0;
    };
	class H_WirelessEarpiece_F: H_WirelessEarpiece_base_F {
        rgoc_canAcceptNVG = 0;
    };

};