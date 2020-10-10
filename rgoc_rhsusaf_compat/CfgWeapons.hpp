class CfgWeapons {
	// Base classes
	class ItemCore;
	class H_HelmetB;
	class H_Cap_red;
	class H_Bandanna_khk;

	// rhsusaf
	class rhs_xmas_antlers : ItemCore {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_Booniehat_ocp : ItemCore {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_Booniehat_ucp : rhs_Booniehat_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_Booniehat_marpatd : rhs_Booniehat_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_Booniehat_marpatwd : rhs_Booniehat_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_Booniehat_m81 : rhs_Booniehat_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_booniehat2_marpatd : ItemCore {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_booniehat2_marpatwd : rhs_booniehat2_marpatd {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_8point_marpatd : ItemCore {
		rgoc_canAcceptNVG = 0;
	};
	class rhs_8point_marpatwd : rhs_8point_marpatd {
		rgoc_canAcceptNVG = 0;
	};
	class RHS_jetpilot_usaf: H_HelmetB {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_patrolcap_ocp : H_HelmetB {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_patrolcap_ucp : rhsusf_patrolcap_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_ach_helmet_ocp : H_HelmetB {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_ach_helmet_ocp_alt : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_ach_helmet_ocp_norotos : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ucp : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ucp_alt : rhsusf_ach_helmet_ucp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ucp_norotos : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_M81 : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_DCU : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_DCU_early : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_ach_helmet_DCU_early_rhino : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_camo_ocp : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ocp : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ocp_alt : rhsusf_ach_helmet_headset_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ucp : rhsusf_ach_helmet_headset_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ucp_alt : rhsusf_ach_helmet_headset_ucp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ESS_ocp : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ESS_ocp_alt : rhsusf_ach_helmet_ESS_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ESS_ucp : rhsusf_ach_helmet_ESS_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_ESS_ucp_alt : rhsusf_ach_helmet_ESS_ucp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ess_ocp : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ess_ocp_alt : rhsusf_ach_helmet_headset_ess_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ess_ucp : rhsusf_ach_helmet_headset_ess_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_helmet_headset_ess_ucp_alt : rhsusf_ach_helmet_headset_ess_ucp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_headset : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_headset_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_tan : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_tan_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_tan_headset : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_tan_headset_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_wood : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_wood_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_wood_headset : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_wood_headset_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_des : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_des_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_des_headset : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_des_headset_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_semi : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_semi_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_semi_headset : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_ach_bare_semi_headset_ess : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_01 : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_fg  : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_fg_pelt  : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_fg_pelt_nsw  : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_fg_pelt_cam  : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_ut : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_ut_pelt : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_ut_pelt_cam : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_ut_pelt_nsw : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_ut_pelt_nsw_cam : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_bk : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_bk_pelt : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc_pelt : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc_pelt_nsw : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_aor1 : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_aor1_pelt : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_aor1_pelt_nsw : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_aor2 : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_aor2_pelt : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_aor2_pelt_nsw : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_paint : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_paint_pelt : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_paint_pelt_nsw : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_paint_pelt_nsw_cam : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_cover : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc_cover : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc_cover_pelt : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc_cover_pelt_nsw : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mc_cover_pelt_cam : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_rg_cover : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_rg_cover_pelt : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_coy_cover : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_coy_cover_pelt : rhsusf_opscore_cover {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mar_01 : rhsusf_ach_helmet_ocp {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mar_ut : rhsusf_opscore_mar_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mar_ut_pelt : rhsusf_opscore_mar_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mar_fg : rhsusf_opscore_mar_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_mar_fg_pelt : rhsusf_opscore_mar_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_01_tan : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_02 : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_02_tan : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_03_ocp : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_opscore_04_ocp : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_cvc_helmet : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_cvc_alt_helmet : rhsusf_cvc_helmet {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_cvc_green_helmet : rhsusf_cvc_helmet {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_cvc_green_alt_helmet : rhsusf_cvc_alt_helmet {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_cvc_ess : rhsusf_cvc_helmet {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_cvc_green_ess : rhsusf_cvc_ess {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_skull : rhsusf_hgu56p_visor_mask {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_skull : rhsusf_hgu56p_mask {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_mo : rhsusf_hgu56p_visor_mask {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_mo : rhsusf_hgu56p_mask {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_smiley : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_smiley : rhsusf_hgu56p_mask_smiley {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_black : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_black : rhsusf_hgu56p_black {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_black : rhsusf_hgu56p_black {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_black : rhsusf_hgu56p_black {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_black_skull : rhsusf_hgu56p_visor_mask_black {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_black_skull : rhsusf_hgu56p_visor_mask_black_skull {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_Empire_black : rhsusf_hgu56p_black {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_green : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_green : rhsusf_hgu56p_green {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_green : rhsusf_hgu56p_green {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_green : rhsusf_hgu56p_green {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_green_mo : rhsusf_hgu56p_mask_green {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_green_mo : rhsusf_hgu56p_visor_mask_green {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_tan : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_tan : rhsusf_hgu56p_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_tan : rhsusf_hgu56p_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_tan : rhsusf_hgu56p_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_pink : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_pink : rhsusf_hgu56p_pink {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_pink : rhsusf_hgu56p_pink {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_pink : rhsusf_hgu56p_pink {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_usa : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_usa : rhsusf_hgu56p_usa {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_saf : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_saf : rhsusf_hgu56p_saf {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_mask_saf : rhsusf_hgu56p_saf {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_mask_saf : rhsusf_hgu56p_visor_saf {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_white : rhsusf_hgu56p {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_hgu56p_visor_white : rhsusf_hgu56p_white {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd : H_HelmetB {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_headset : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_headset : rhsusf_mich_helmet_marpatwd_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_alt : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_alt_headset : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_alt : rhsusf_mich_helmet_marpatwd_alt {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_alt_headset : rhsusf_mich_helmet_marpatwd_alt_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_norotos : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_norotos_headset : rhsusf_mich_helmet_marpatwd_norotos {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_norotos : rhsusf_mich_helmet_marpatwd_norotos {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_norotos_headset : rhsusf_mich_helmet_marpatwd_norotos_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_norotos_arc : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatwd_norotos_arc_headset : rhsusf_mich_helmet_marpatwd_norotos_arc {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_norotos_arc : rhsusf_mich_helmet_marpatwd_norotos_arc {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_helmet_marpatd_norotos_arc_headset : rhsusf_mich_helmet_marpatwd_norotos_arc_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare : rhsusf_mich_helmet_marpatwd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_headset : rhsusf_mich_bare {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_alt : rhsusf_mich_bare {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos : rhsusf_mich_bare {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_headset : rhsusf_mich_bare_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_alt : rhsusf_mich_bare_norotos {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_alt_headset : rhsusf_mich_bare_norotos_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc : rhsusf_mich_bare {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_headset : rhsusf_mich_bare_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_alt : rhsusf_mich_bare_norotos_arc {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_alt_headset : rhsusf_mich_bare_norotos_arc_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_tan : rhsusf_mich_bare {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_tan_headset : rhsusf_mich_bare_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_alt_tan : rhsusf_mich_bare_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_tan : rhsusf_mich_bare_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_tan_headset : rhsusf_mich_bare_tan_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_alt_tan : rhsusf_mich_bare_norotos_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_alt_tan_headset : rhsusf_mich_bare_norotos_tan_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_tan : rhsusf_mich_bare_norotos_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_tan_headset : rhsusf_mich_bare_norotos_tan_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_alt_tan : rhsusf_mich_bare_norotos_arc_tan {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_alt_tan_headset : rhsusf_mich_bare_norotos_arc_tan_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_semi :rhsusf_mich_bare {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_semi_headset :rhsusf_mich_bare_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_alt_semi : rhsusf_mich_bare_semi {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_semi : rhsusf_mich_bare_semi {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_semi_headset : rhsusf_mich_bare_semi_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_alt_semi : rhsusf_mich_bare_norotos_semi {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_alt_semi_headset : rhsusf_mich_bare_norotos_semi_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_semi : rhsusf_mich_bare_norotos_alt_semi {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_semi_headset : rhsusf_mich_bare_norotos_semi_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_alt_semi : rhsusf_mich_bare_norotos_arc_semi {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_mich_bare_norotos_arc_alt_semi_headset : rhsusf_mich_bare_norotos_arc_semi_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatd : H_HelmetB {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatd_ess : rhsusf_lwh_helmet_marpatd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatd_headset : rhsusf_lwh_helmet_marpatd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatwd : rhsusf_lwh_helmet_marpatd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatwd_ess : rhsusf_lwh_helmet_marpatd_ess {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatwd_blk_ess : rhsusf_lwh_helmet_marpatd_ess {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatwd_headset : rhsusf_lwh_helmet_marpatd_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatwd_headset_blk : rhsusf_lwh_helmet_marpatd_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_marpatwd_headset_blk2 : rhsusf_lwh_helmet_marpatd_headset {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_lwh_helmet_M1942 : rhsusf_lwh_helmet_marpatd {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_Bowman: ItemCore {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_bowman_cap : rhsusf_Bowman {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_ihadss : rhsusf_opscore_01 {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_protech_helmet: H_HelmetB {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_protech_helmet_ess: rhsusf_protech_helmet {
		rgoc_canAcceptNVG = 0;
	};
	class rhsusf_protech_helmet_rhino: rhsusf_protech_helmet {
		rgoc_canAcceptNVG = 1;
	};
	class rhsusf_protech_helmet_rhino_ess: rhsusf_protech_helmet {
		rgoc_canAcceptNVG = 1;
	};
};