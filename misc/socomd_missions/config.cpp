#define ADD(ID,BRIEF,DIR) class ID { briefingName = BRIEF; directory = socomd_missions\##DIR; };

class CfgPatches {
	class socomd_missions {
		//Internal Version
		version = 1.1.0;
		versionStr = "1.1.0";
		versionAr[] = {1,1,0};

		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMissions {
	class MPMissions {

//	USAGE:
//	Place mission in this addons \missions folder (non-pbo)
//	ADD(Unique_class_name,Mission screen name,Mission folder name)

///////////////////////////////////////////////////////////////////////////////////////////////////
//	FOBs

	ADD(ALTISFOB,SOCOMD Altis FOB (Thelos Bay),fobs\Altis_Thelos_Bay_FOB.Altis)
	ADD(ALTISLHD,SOCOMD Altis LHD (HMAS Canberra),fobs\Altis_LHD_HMAS_Canberra.Altis)
	ADD(BEKETOVARNLD,SOCOMD Beketov FOB (ARNOLD),fobs\Beketov_FOB_Arnold.Beketov)
	ADD(BEKETOVGIBSN,SOCOMD Beketov FOB (GIBSON),fobs\Beketov_FOB_Gibson.Beketov)
	ADD(BYSTFOB,SOCOMD Bystrica FOB (Lordsburg),fobs\Bystrica_Lordsburg_FOB.Woodland_ACR)
	ADD(CHERNFOB,SOCOMD Chernarus FOB (Joint Fourth),fobs\Cherno_Joint_Fourth_FOB.Chernarus)
	ADD(CHERNLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\Cherno_LHD_HMAS_Canberra.Chernarus)
	ADD(KUNFOB,SOCOMD Kunduz FOB (Cannon),fobs\Kunduz_Cannon_FOB.Kunduz)
	ADD(PANTHLHD,SOCOMD Panthera LHD (HMAS Canberra),fobs\Panthera_LHD_HMAS_Canberra.Panthera3)
	ADD(PANTHFOB,SOCOMD Panthera FOB (Yuma),fobs\Panthera_Yuma_FOB.Panthera3)
	ADD(PORTOLHD,SOCOMD Porto LHD (HMAS Canberra),fobs\Porto_LHD_HMAS_Canberra.Porto)
	ADD(RAHMLHD,SOCOMD Rahmadi LHD (HMAS Canberra),fobs\Rahmadi_LHD_HMAS_Canberra.Intro)
	ADD(SAHRFOB,SOCOMD Sahrani FOB (Lead Pole),fobs\Sahrani_Lead_Pole_FOB.Sara)
	ADD(SAHRLHD,SOCOMD Sahrani LHD (HMAS Canberra),fobs\Sahrani_LHD_HMAS_Canberra.Sara)
	ADD(SARUGLHD,SOCOMD Sarugao LHD (HMAS Canberra),fobs\Sarugao_LHD_HMAS_Canberra.saru)
	ADD(SARUGFOB,SOCOMD Sarugao FOB (Swamp),fobs\Sarugao_Swamp_FOB.saru)
	ADD(SHAPURFOB,SOCOMD Shapur FOB (Mailfoot),fobs\Shapur_Mailfoot_FOB.Shapur_BAF)
	ADD(STRATLHD,SOCOMD Stratis LHD (HMAS Canberra),fobs\Stratis_LHD_HMAS_Canberra.Stratis)
	ADD(TAKIFOB,SOCOMD Takistan FOB (Dawn Fire),fobs\Takistan_Dawn_Fire_FOB.Takistan)
	ADD(THIRSKFOB,SOCOMD Thirsk FOB (Blue Wake),fobs\Thirsk_Blue_Wake_FOB.Thirsk)
	ADD(THIRSKLHD,SOCOMD Thirsk LHD (HMAS Canberra),fobs\Thirsk_LHD_HMAS_Canberra.Thirsk)
	ADD(THIRSKWFOB,SOCOMD Thirsk Winter FOB (Blue Wake),fobs\ThirskW_Blue_Wake_FOB.ThirskW)
	ADD(THIRSKWLHD,SOCOMD Thirsk Winter LHD (HMAS Canberra),fobs\ThirskW_LHD_HMAS_Canberra.ThirskW)
	ADD(ZARGAFOB,SOCOMD Zargabad FOB (Fury),fobs\Zargabad_Fury_FOB.Zargabad)
	ADD(ISLADUALALHD,SOCOMD Isla Duala LHD (HMAS Canberra),fobs\Isla_Duala_LHD_HMAS_Canberra.IslaDuala3)
	ADD(ISLADUALAFOB,SOCOMD Isla Duala FOB (Saloon),fobs\Isla_Duala_Saloon_FOB.IslaDuala3)
	ADD(FATAFOB,SOCOMD FATA FOB (Nightstalker),fobs\FATA_Nightstalker_FOB.fata)
	ADD(AFGHANFOB,SOCOMD Afghan Village FOB (Spartan),fobs\Afghan_Village_Spartan_FOB.praa_av)
	ADD(BOZLHD,SOCOMD Bozcaada LHD (HMAS Canberra),fobs\Bozcaada_LHD_HMAS_Canberra.Bozcaada)
	ADD(KOLGUJEVFOB,SOCOMD Kolgujev FOB (Chase),fobs\Kolgujev_Chase_FOB.cain)
	ADD(KOLGUJEVLHD,SOCOMD Kolgujev LHD (HMAS Canberra),fobs\Kolgujev_LHD_HMAS_Canberra.cain)
	ADD(NOGOVAFOB,SOCOMD Nogova FOB (Heathen),fobs\Nogova_Heathen_FOB.noe)
	ADD(EVERONFOB,SOCOMD Everon FOB (Karachi),fobs\Everon_Karachi_FOB.eden)
	ADD(TANOAFOB,SOCOMD Tanoa FOB (Tiki),fobs\Tanoa_Tiki_FOB.Tanoa)
	ADD(ALRAYAKFOB,SOCOMD Al-Rayak FOB (Freedom),fobs\Al-Rayak_Freedom_FOB.pja310)
	ADD(ALRAYAKLHD,SOCOMD Al-Rayak LHD (HMAS Canberra),fobs\Al-Rayak_LHD_HMAS_Canberra.pja310)
	ADD(ALIABADLHD,SOCOMD Aliabad LHD (HMAS Canberra),fobs\Aliabad_LHD_HMAS_Canberra.MCN_Aliabad)
	ADD(FALLUJAHFOB,SOCOMD Fallujah FOB,fobs\Fallujah_FOB.fallujah)
	ADD(MALDEN2035LHD,SOCOMD Malden 2035 LHD (HMAS Canberra),fobs\Malden2035_LHD_HMAS_Canberra.Malden)
	ADD(CLAFGHANFOB,SOCOMD Clafghan FOB (Restrepo) ,fobs\Clafghan_FOB.clafghan)
	ADD(RUHAFOB,SOCOMD Ruha FOB ,fobs\Ruha_FOB.ruha)
	ADD(HAZARKOTFOB,SOCOMD Hazar-Kot FOB ,fobs\Hazar_Kot_FOB.MCN_HazarKot)
	ADD(DIYALAFOB,SOCOMD Diyala FOB ,fobs\Diyala_FOB.DYA)
	ADD(IHANTALAFOB,SOCOMD Ihantala FOB ,fobs\Ihantala_FOB.tem_ihantala)
	ADD(PULAUFOB,SOCOMD Pulau LHD (HMAS Canberra),fobs\Pulau_LHD_HMAS_Canberra.pulau)
	ADD(ANIZAYFOB,SOCOMD Anizay FOB,fobs\Anizay_FOB.tem_anizay)
	ADD(CELLEFOB,SOCOMD Celle FOB,fobs\Celle_FOB.mbg_celle2)
	ADD(ROSCHEFOB,SOCOMD Rosche FOB,fobs\Rosche_FOB.WL_Rosche)
	ADD(KURJARIFOB,SOCOMD Kurjari FOB,fobs\Kurjari_FOB.tem_kujari)
	ADD(SUURSAARIVLHD,SOCOMD Suursaariv FOB,fobs\Suursaariv_LHS_HMAS_Canberra.tem_suursaariv)
	ADD(VINJESVINGENFOB,SOCOMD Vinjesvingen FOB,fobs\Vinjesvingen_FOB.tem_vinjesvingenc)
	ADD(LIVONIAFOB,SOCOMD Livonia FOB,fobs\Livonia_FOB.Enoch)
	ADD(VIROLAHTIFOB,SOCOMD Virolahti FOB,fobs\Virolahti_FOB.vt7)
	ADD(MOZARTFOB,SOCOMD Lythium FOB (MozartDeath),fobs\lythium_FOB_Mozart.lythium)
	ADD(TRIAFOB,SOCOMD Tria FOB,fobs\Tria_FOB.jns_tria)
	ADD(FAPAVOFOB,SOCOMD Fapavo FOB,fobs\Fapavo_Demise_FOB.fapovo)
	ADD(FAPAVOLHD,SOCOMD Fapavo LHD (HMAS Canberra),fobs\Fapavo_Demise_FOB.fapovo)
	ADD(NZWFOB,SOCOMD NZiwasogo FOB,fobs\NZiwasogo_Trigger_FOB.pja305)
	ADD(LAGHISOLAFOB,SOCOMD Laghisola LHD (HMAS Canberra),fobs\Laghisola_LHD_HMAS_Canberara.egl_laghisola)
	ADD(SBTFOB,SOCOMD Song Bin Tanh FOB,fobs\SBT_FOB.pja312)
	ADD(DENILANDFOB,SOCOMD Deniland FOB,fobs\Deniland_FOB_Krusty.Deniland)

///////////////////////////////////////////////////////////////////////////////////////////////////
//	Missions

//	Training
	ADD(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)

///////////////////////////////////////////////////////////////////////////////////////////////////
//	FOBs (Hardcore)

	ADD(ALTISFOB_HC,SOCOMD [HC] Altis FOB (Thelos Bay),fobs_hc\Altis_Thelos_Bay_FOB.Altis)
	ADD(ALTISLHD_HC,SOCOMD [HC] Altis LHD (HMAS Canberra),fobs_hc\Altis_LHD_HMAS_Canberra.Altis)
	ADD(BYSTFOB_HC,SOCOMD [HC] Bystrica FOB (Lordsburg),fobs_hc\Bystrica_Lordsburg_FOB.Woodland_ACR)
	ADD(BEKETOVARNLD_HC,SOCOMD [HC] Beketov FOB (ARNOLD),fobs_hc\Beketov_FOB_Arnold.Beketov)
	ADD(BEKETOVGIBSN_HC,SOCOMD [HC] Beketov FOB (GIBSON),fobs_hc\Beketov_FOB_Gibson.Beketov)
	ADD(CHERNFOB_HC,SOCOMD [HC] Chernarus FOB (Joint Fourth),fobs_hc\Cherno_Joint_Fourth_FOB.Chernarus)
	ADD(CHERNLHD_HC,SOCOMD [HC] Chernarus LHD (HMAS Canberra),fobs_hc\Cherno_LHD_HMAS_Canberra.Chernarus)
	ADD(KUNFOB_HC,SOCOMD [HC] Kunduz FOB (Cannon),fobs_hc\Kunduz_Cannon_FOB.Kunduz)
	ADD(PANTHLHD_HC,SOCOMD [HC] Panthera LHD (HMAS Canberra),fobs_hc\Panthera_LHD_HMAS_Canberra.Panthera3)
	ADD(PANTHFOB_HC,SOCOMD [HC] Panthera FOB (Yuma),fobs_hc\Panthera_Yuma_FOB.Panthera3)
	ADD(PORTOLHD_HC,SOCOMD [HC] Porto LHD (HMAS Canberra),fobs_hc\Porto_LHD_HMAS_Canberra.Porto)
	ADD(RAHMLHD_HC,SOCOMD [HC] Rahmadi LHD (HMAS Canberra),fobs_hc\Rahmadi_LHD_HMAS_Canberra.Intro)
	ADD(SAHRFOB_HC,SOCOMD [HC] Sahrani FOB (Lead Pole),fobs_hc\Sahrani_Lead_Pole_FOB.Sara)
	ADD(SAHRLHD_HC,SOCOMD [HC] Sahrani LHD (HMAS Canberra),fobs_hc\Sahrani_LHD_HMAS_Canberra.Sara)
	ADD(SARUGLHD_HC,SOCOMD [HC] Sarugao LHD (HMAS Canberra),fobs_hc\Sarugao_LHD_HMAS_Canberra.saru)
	ADD(SARUGFOB_HC,SOCOMD [HC] Sarugao FOB (Swamp),fobs_hc\Sarugao_Swamp_FOB.saru)
	ADD(SHAPURFOB_HC,SOCOMD [HC] Shapur FOB (Mailfoot),fobs_hc\Shapur_Mailfoot_FOB.Shapur_BAF)
	ADD(STRATLHD_HC,SOCOMD [HC] Stratis LHD (HMAS Canberra),fobs_hc\Stratis_LHD_HMAS_Canberra.Stratis)
	ADD(TAKIFOB_HC,SOCOMD [HC] Takistan FOB (Dawn Fire),fobs_hc\Takistan_Dawn_Fire_FOB.Takistan)
	ADD(THIRSKFOB_HC,SOCOMD [HC] Thirsk FOB (Blue Wake),fobs_hc\Thirsk_Blue_Wake_FOB.Thirsk)
	ADD(THIRSKLHD_HC,SOCOMD [HC] Thirsk LHD (HMAS Canberra),fobs_hc\Thirsk_LHD_HMAS_Canberra.Thirsk)
	ADD(THIRSKWFOB_HC,SOCOMD [HC] Thirsk Winter FOB (Blue Wake),fobs_hc\ThirskW_Blue_Wake_FOB.ThirskW)
	ADD(THIRSKWLHD_HC,SOCOMD [HC] Thirsk Winter LHD (HMAS Canberra),fobs_hc\ThirskW_LHD_HMAS_Canberra.ThirskW)
	ADD(ZARGAFOB_HC,SOCOMD [HC] Zargabad FOB (Fury),fobs_hc\Zargabad_Fury_FOB.Zargabad)
	ADD(ISLADUALALHD_HC,SOCOMD [HC] Isla Duala LHD (HMAS Canberra),fobs_hc\Isla_Duala_LHD_HMAS_Canberra.IslaDuala3)
	ADD(ISLADUALAFOB_HC,SOCOMD [HC] Isla Duala FOB (Saloon),fobs_hc\Isla_Duala_Saloon_FOB.IslaDuala3)
	ADD(FATAFOB_HC,SOCOMD [HC] FATA FOB (Nightstalker),fobs_hc\FATA_Nightstalker_FOB.fata)
	ADD(AFGHANFOB_HC,SOCOMD [HC] Afghan Village FOB (Spartan),fobs_hc\Afghan_Village_Spartan_FOB.praa_av)
	ADD(BOZLHD_HC,SOCOMD [HC] Bozcaada LHD (HMAS Canberra),fobs_hc\Bozcaada_LHD_HMAS_Canberra.Bozcaada)
	ADD(KOLGUJEVFOB_HC,SOCOMD [HC] Kolgujev FOB (Chase),fobs_hc\Kolgujev_Chase_FOB.cain)
	ADD(KOLGUJEVLHD_HC,SOCOMD [HC] Kolgujev LHD (HMAS Canberra),fobs_hc\Kolgujev_LHD_HMAS_Canberra.cain)
	ADD(NOGOVAFOB_HC,SOCOMD [HC] Nogova FOB (Heathen),fobs_hc\Nogova_Heathen_FOB.noe)
	ADD(EVERONFOB_HC,SOCOMD [HC] Everon FOB (Karachi),fobs_hc\Everon_Karachi_FOB.eden)
	ADD(TANOAFOB_HC,SOCOMD [HC] Tanoa FOB (Tiki),fobs_hc\Tanoa_Tiki_FOB.Tanoa)
	ADD(ALRAYAKFOB_HC,SOCOMD [HC] Al-Rayak FOB (Freedom),fobs_hc\Al-Rayak_Freedom_FOB.pja310)
	ADD(ALRAYAKLHD_HC,SOCOMD [HC] Al-Rayak LHD (HMAS Canberra),fobs_hc\Al-Rayak_LHD_HMAS_Canberra.pja310)
	ADD(ALIABADLHD_HC,SOCOMD [HC] Aliabad LHD (HMAS Canberra),fobs_hc\Aliabad_LHD_HMAS_Canberra.MCN_Aliabad)
	ADD(FALLUJAHFOB_HC,SOCOMD [HC] Fallujah FOB,fobs_hc\Fallujah_FOB.fallujah)
	ADD(MALDEN2035LHD_HC,SOCOMD [HC] Malden 2035 LHD (HMAS Canberra),fobs_hc\Malden2035_LHD_HMAS_Canberra.Malden)
	ADD(CLAFGHANFOB_HC,SOCOMD [HC] Clafghan FOB (Restrepo) ,fobs_hc\Clafghan_FOB.clafghan)
	ADD(RUHAFOB_HC,SOCOMD [HC] Ruha FOB ,fobs_hc\Ruha_FOB.ruha)
	ADD(HAZARKOTFOB_HC,SOCOMD [HC] Hazar-Kot FOB ,fobs_hc\Hazar_Kot_FOB.MCN_HazarKot)
	ADD(DIYALAFOB_HC,SOCOMD [HC] Diyala FOB ,fobs_hc\Diyala_FOB.DYA)
	ADD(IHANTALAFOB_HC,SOCOMD [HC] Ihantala FOB ,fobs_hc\Ihantala_FOB.tem_ihantala)
	ADD(PULAUFOB_HC,SOCOMD [HC] Pulau LHD (HMAS Canberrs),fobs_hc\Pulau_LHD_HMAS_Canberra.pulau)
	ADD(ANIZAYFOB_HC,SOCOMD [HC] Anizay FOB,fobs_hc\Anizay_FOB.tem_anizay)
	ADD(CELLEFOB_HC,SOCOMD [HC] Celle FOB,fobs_hc\Celle_FOB.mbg_celle2)
	ADD(ROSCHEFOB_HC,SOCOMD [HC] Rosche FOB,fobs_hc\Rosche_FOB.WL_Rosche)
	ADD(KURJARIFOB_HC,SOCOMD [HC] Kurjari FOB,fobs_hc\Kurjari_FOB.tem_kujari)
	ADD(SUURSAARIVLHD_HC,SOCOMD [HC] Suursaariv FOB,fobs_hc\Suursaariv_LHS_HMAS_Canberra.tem_suursaariv)
	ADD(VINJESVINGENFOB_HC,SOCOMD [HC] Vinjesvingen FOB,fobs_hc\Vinjesvingen_FOB.tem_vinjesvingenc)
	ADD(LIVONIAFOB_HC,SOCOMD [HC] Livonia FOB,fobs_hc\Livonia_FOB.Enoch)
	ADD(VIROLAHTIFOB_HC,SOCOMD [HC] Virolahti FOB,fobs_hc\Virolahti_FOB.vt7)
	ADD(MOZARTFOB_HC,SOCOMD [HC] Lythium FOB (MozartDeath),fobs\lythium_FOB_Mozart.lythium)
	ADD(TRIAFOB_HC,SOCOMD [HC] Tria FOB,fobs_hc\Tria_FOB.jns_tria)
	ADD(FAPAVOFOB_HC,SOCOMD [HC] Fapavo FOB,fobs_hc\Fapavo_Demise_FOB.fapovo)
	ADD(FAPAVOLHD_HC,SOCOMD [HC] Fapavo LHD (HMAS Canberra),fobs_hc\Fapavo_Demise_FOB.fapovo)
	ADD(NZWFOB_HC,SOCOMD [HC] NZiwasogo FOB,fobs_hc\NZiwasogo_Trigger_FOB.pja305)
	ADD(LAGHISOLAFOB_HC,SOCOMD [HC] Laghisola LHD (HMAS Canberra),fobs_hc\Laghisola_LHD_HMAS_Canberara.egl_laghisola)
	ADD(SBTFOB_HC,SOCOMD [HC] Song Bin Tanh FOB,fobs_hc\SBT_FOB.pja312)
	ADD(DENILANDFOB_HC,SOCOMD [HC] Deniland FOB,fobs\Deniland_FOB_Krusty.Deniland)

	};
};
