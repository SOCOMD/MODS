
class cfgVehicles
{
  class rhs_msv_emr_rifleman;
  class AGE_BZF_Multicam;
  class AGE_LV119_Backpouches_SL_MultiCam;
  class AGE_LV119_Backpouches_MultiCam;
  class AGE_Alpha_Sniper_T5000;
  class rhs_msv_emr_machinegunner;
  class rhs_msv_emr_combatcrew;
  class rhs_btr80a_msv;
  class rhs_tigr_sts_3camo_msv;
  class rhs_tigr_3camo_msv;
  class rhs_tigr_m_3camo_msv;

  class socomd_spetznaz_Operator: rhs_msv_emr_rifleman
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Operator";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_ak74m_zenitco01_b33_grip1_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_ak74m_zenitco01_b33_grip1_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","murshun_cigs_cigpack","murshun_cigs_lighter","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","murshun_cigs_cigpack","murshun_cigs_lighter","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_LSHZ_BlackMcam_C_H_A","AGE_WAS_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_LSHZ_BlackMcam_C_H_A","AGE_WAS_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    backpack="socomd_spetznaz_Operator_pack";
  };

  class socomd_spetznaz_Point_Man: rhs_msv_emr_rifleman
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Point Man";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_ak105_zenitco01_b33_grip1_rhs_acc_dtk3rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_ffg2","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_ak105_zenitco01_b33_grip1_rhs_acc_dtk3rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_ffg2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84","AMP_Breaching_Charge_Mag","AMP_Breaching_Charge_Mag","ACE_CTS9","ACE_CTS9","ACE_CTS9","ACE_CTS9"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84","AMP_Breaching_Charge_Mag","AMP_Breaching_Charge_Mag","ACE_CTS9","ACE_CTS9","ACE_CTS9","ACE_CTS9"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_Fast_Black_C_P","AGE_WAS_Heavy_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_Fast_Black_C_P","AGE_WAS_Heavy_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    backpack="socomd_spetznaz_Point_Man_pack";
  };

  class socomd_spetznaz_Team_Leader: rhs_msv_emr_rifleman
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Team Leader";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_ak74mr_gp25_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotech","socomd_spetznaz_rhs_weap_pya","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_ak74mr_gp25_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotech","socomd_spetznaz_rhs_weap_pya","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VG40OP_white","rhs_VG40OP_white","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_zarya2","SmokeShellPurple","SmokeShellPurple"};
    respawnMagazines[]={"rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25P","rhs_VOG25P","rhs_VOG25P","rhs_VG40OP_white","rhs_VG40OP_white","rhs_mag_9x19_17","rhs_mag_9x19_17","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_zarya2","rhs_mag_zarya2","SmokeShellPurple","SmokeShellPurple"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_Fast_Black_C_H_A_L","AGE_LV119_AK_Holster_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_Fast_Black_C_H_A_L","AGE_LV119_AK_Holster_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    backpack="socomd_spetznaz_Team_Leader_pack";
  };

  class socomd_spetznaz_Sniper: AGE_Alpha_Sniper_T5000
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Sniper";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_t5000_rhs_acc_dh520x56rhs_acc_harris_swivel","socomd_spetznaz_AGE_Glock17_SDBasic_acc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_t5000_rhs_acc_dh520x56rhs_acc_harris_swivel","socomd_spetznaz_AGE_Glock17_SDBasic_acc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","AGE_ComTacs_Facemask","AGE_LV119_Pouches_MultiCam","AGE_Balaclava_MCam"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","AGE_ComTacs_Facemask","AGE_LV119_Pouches_MultiCam","AGE_Balaclava_MCam"};
    backpack="";
  };

  class socomd_spetznaz_Machine_Gunner: rhs_msv_emr_machinegunner
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Machine Gunner";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_pkp_rhs_acc_1p78","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_pkp_rhs_acc_1p78","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs"};
    magazines[]={"rhs_mag_rgn","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7N26"};
    respawnMagazines[]={"rhs_mag_rgn","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7N26"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","AGE_LSHZ_Black_C_H_A","AGE_WAS_Medium_AK_MultiCam","UK3CB_G_Balaclava2_BLK"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","AGE_LSHZ_Black_C_H_A","AGE_WAS_Medium_AK_MultiCam","UK3CB_G_Balaclava2_BLK"};
    backpack="socomd_spetznaz_Machine_Gunner_pack";
  };

  class socomd_spetznaz_Light_AT: rhs_msv_emr_rifleman
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Light AT";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_ak74m_zenitco01_b33_grip1_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","socomd_spetznaz_rhs_weap_rpg26","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_ak74m_zenitco01_b33_grip1_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","socomd_spetznaz_rhs_weap_rpg26","Put","Throw"};
    items[]={"FirstAidKit","ACE_EarPlugs"};
    respawnItems[]={"FirstAidKit","ACE_EarPlugs"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_LSHZ_BlackMcam_C_H_A","AGE_WAS_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_LSHZ_BlackMcam_C_H_A","AGE_WAS_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    backpack="socomd_spetznaz_Light_AT_pack";
  };


  class socomd_spetznaz_Vehicle_Crew: rhs_msv_emr_rifleman
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = EdSubcat_Personnel;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Vehicle Crew";
    uniformClass="USP_G3C_MX_MC_RUS";
    weapons[]={"socomd_spetznaz_rhs_weap_ak105_zenitco01_b33_grip1_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","Put","Throw"};
    respawnWeapons[]={"socomd_spetznaz_rhs_weap_ak105_zenitco01_b33_grip1_rhs_acc_dtk1rhs_acc_2dpZenit_risacwp_eotechrhs_acc_grip_rk6","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgn","rhs_mag_rgn","ACE_M84","ACE_M84","ACE_M84","ACE_M84"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_Fast_Black_C","AGE_TV110_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138","AGE_Fast_Black_C","AGE_TV110_AK_MultiCam","UK3CB_G_Balaclava2_DES","rhs_1PN138"};
    backpack="";
  };

  class socomd_spetznaz_BTR_80A: rhs_btr80a_msv
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Base;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="BTR-80A";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","","","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\1_ca.paa","","","","","","","","","","",""};
    crew="rhs_msv_emr_combatcrew";
    typicalCargo[]={"rhs_msv_emr_combatcrew"};
  };

  class socomd_spetznaz_Tigr_Armed: rhs_tigr_sts_3camo_msv
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Base;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Tigr Armed";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="socomd_spetznaz_Vehicle_Crew";
    typicalCargo[]={"socomd_spetznaz_Vehicle_Crew"};
  };

  class socomd_spetznaz_Tigr: rhs_tigr_3camo_msv
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Base;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Tigr";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="socomd_spetznaz_Vehicle_Crew";
    typicalCargo[]={"socomd_spetznaz_Vehicle_Crew"};
  };

  class socomd_spetznaz_Tigr_Open: rhs_tigr_m_3camo_msv
  {
    editorCategory = SOCOMD_EdCat_Spetznaz;
    editorSubcategory = SOCOMD_EdSubcat_Vehicle_Base;
    faction="socomd_spetznaz_faction";
    side=0;
    skill=1.0;
    displayName="Tigr Open";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="socomd_spetznaz_Vehicle_Crew";
    typicalCargo[]={"socomd_spetznaz_Vehicle_Crew"};
  };


  class socomd_spetznaz_Operator_pack: AGE_BZF_Multicam
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class socomd_spetznaz_Point_Man_pack: AGE_LV119_Backpouches_SL_MultiCam
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_AMP_Breaching_Charge_Mag {count=2;magazine="AMP_Breaching_Charge_Mag";};
     class _xx_ACE_CTS9 {count=4;magazine="ACE_CTS9";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class socomd_spetznaz_Team_Leader_pack: AGE_LV119_Backpouches_MultiCam
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_zarya2 {count=4;magazine="rhs_mag_zarya2";};
     class _xx_SmokeShellPurple {count=2;magazine="SmokeShellPurple";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class socomd_spetznaz_Machine_Gunner_pack: AGE_BZF_Multicam
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_100Rnd_762x54mmR_7N26 {count=2;magazine="rhs_100Rnd_762x54mmR_7N26";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class socomd_spetznaz_Light_AT_pack: AGE_BZF_Multicam
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };

};
