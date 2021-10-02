#include "script_component.hpp"
#define CREATE_MISSION(ID,BRIEF,DIR) class ID { briefingName = BRIEF; directory = z\socomd\addons\missions\##DIR; };

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_main"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};


class CfgMissions {
    class MPMissions {

//    USAGE:
//    Place mission in this addons \missions folder (non-pbo)
//    CREATE_MISSION(Unique_class_name,Mission screen name,Mission folder name)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    FOBs

    CREATE_MISSION(ALTISFOB,SOCOMD Altis FOB (Thelos Bay),fobs\Altis_Thelos_Bay_FOB.Altis)
    CREATE_MISSION(ALTISLHD,SOCOMD Altis LHD (HMAS Canberra),fobs\Altis_LHD_HMAS_Canberra.Altis)
    CREATE_MISSION(BEKETOVARNLD,SOCOMD Beketov FOB (ARNOLD),fobs\Beketov_FOB_Arnold.Beketov)
    CREATE_MISSION(BEKETOVGIBSN,SOCOMD Beketov FOB (GIBSON),fobs\Beketov_FOB_Gibson.Beketov)
    CREATE_MISSION(BYSTFOB,SOCOMD Bystrica FOB (Lordsburg),fobs\Bystrica_Lordsburg_FOB.Woodland_ACR)
    CREATE_MISSION(CHERNFOB,SOCOMD Chernarus FOB (Joint Fourth),fobs\Cherno_Joint_Fourth_FOB.Chernarus)
    CREATE_MISSION(CHERNLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\Cherno_LHD_HMAS_Canberra.Chernarus)
    CREATE_MISSION(KUNFOB,SOCOMD Kunduz FOB (Cannon),fobs\Kunduz_Cannon_FOB.Kunduz)
    CREATE_MISSION(PANTHLHD,SOCOMD Panthera LHD (HMAS Canberra),fobs\Panthera_LHD_HMAS_Canberra.Panthera3)
    CREATE_MISSION(PANTHFOB,SOCOMD Panthera FOB (Yuma),fobs\Panthera_Yuma_FOB.Panthera3)
    CREATE_MISSION(PORTOLHD,SOCOMD Porto LHD (HMAS Canberra),fobs\Porto_LHD_HMAS_Canberra.Porto)
    CREATE_MISSION(RAHMLHD,SOCOMD Rahmadi LHD (HMAS Canberra),fobs\Rahmadi_LHD_HMAS_Canberra.Intro)
    CREATE_MISSION(SAHRFOB,SOCOMD Sahrani FOB (Lead Pole),fobs\Sahrani_Lead_Pole_FOB.Sara)
    CREATE_MISSION(SAHRLHD,SOCOMD Sahrani LHD (HMAS Canberra),fobs\Sahrani_LHD_HMAS_Canberra.Sara)
    CREATE_MISSION(SARUGLHD,SOCOMD Sarugao LHD (HMAS Canberra),fobs\Sarugao_LHD_HMAS_Canberra.saru)
    CREATE_MISSION(SARUGFOB,SOCOMD Sarugao FOB (Swamp),fobs\Sarugao_Swamp_FOB.saru)
    CREATE_MISSION(SHAPURFOB,SOCOMD Shapur FOB (Mailfoot),fobs\Shapur_Mailfoot_FOB.Shapur_BAF)
    CREATE_MISSION(STRATLHD,SOCOMD Stratis LHD (HMAS Canberra),fobs\Stratis_LHD_HMAS_Canberra.Stratis)
    CREATE_MISSION(TAKIFOB,SOCOMD Takistan FOB (Dawn Fire),fobs\Takistan_Dawn_Fire_FOB.Takistan)
    CREATE_MISSION(THIRSKFOB,SOCOMD Thirsk FOB (Blue Wake),fobs\Thirsk_Blue_Wake_FOB.Thirsk)
    CREATE_MISSION(THIRSKLHD,SOCOMD Thirsk LHD (HMAS Canberra),fobs\Thirsk_LHD_HMAS_Canberra.Thirsk)
    CREATE_MISSION(THIRSKWFOB,SOCOMD Thirsk Winter FOB (Blue Wake),fobs\ThirskW_Blue_Wake_FOB.ThirskW)
    CREATE_MISSION(THIRSKWLHD,SOCOMD Thirsk Winter LHD (HMAS Canberra),fobs\ThirskW_LHD_HMAS_Canberra.ThirskW)
    CREATE_MISSION(ZARGAFOB,SOCOMD Zargabad FOB (Fury),fobs\Zargabad_Fury_FOB.Zargabad)
    CREATE_MISSION(ZARGAFOBE,SOCOMD Zargabad FOB (Exfil),fobs\Zargabad_Exfil_FOB.Zargabad)
    CREATE_MISSION(ISLADUALALHD,SOCOMD Isla Duala LHD (HMAS Canberra),fobs\Isla_Duala_LHD_HMAS_Canberra.IslaDuala3)
    CREATE_MISSION(ISLADUALAFOB,SOCOMD Isla Duala FOB (Saloon),fobs\Isla_Duala_Saloon_FOB.IslaDuala3)
    CREATE_MISSION(FATAFOB,SOCOMD FATA FOB (Nightstalker),fobs\FATA_Nightstalker_FOB.fata)
    CREATE_MISSION(AFGHANFOB,SOCOMD Afghan Village FOB (Spartan),fobs\Afghan_Village_Spartan_FOB.praa_av)
    CREATE_MISSION(BOZLHD,SOCOMD Bozcaada LHD (HMAS Canberra),fobs\Bozcaada_LHD_HMAS_Canberra.Bozcaada)
    CREATE_MISSION(KOLGUJEVFOB,SOCOMD Kolgujev FOB (Chase),fobs\Kolgujev_Chase_FOB.cain)
    CREATE_MISSION(KOLGUJEVLHD,SOCOMD Kolgujev LHD (HMAS Canberra),fobs\Kolgujev_LHD_HMAS_Canberra.cain)
    CREATE_MISSION(NOGOVAFOB,SOCOMD Nogova FOB (Heathen),fobs\Nogova_Heathen_FOB.noe)
    CREATE_MISSION(EVERONFOB,SOCOMD Everon FOB (Karachi),fobs\Everon_Karachi_FOB.eden)
    CREATE_MISSION(TANOAFOB,SOCOMD Tanoa FOB (Tiki),fobs\Tanoa_Tiki_FOB.Tanoa)
    CREATE_MISSION(ALRAYAKFOB,SOCOMD Al-Rayak FOB (Freedom),fobs\Al-Rayak_Freedom_FOB.pja310)
    CREATE_MISSION(ALRAYAKLHD,SOCOMD Al-Rayak LHD (HMAS Canberra),fobs\Al-Rayak_LHD_HMAS_Canberra.pja310)
    CREATE_MISSION(ALIABADLHD,SOCOMD Aliabad LHD (HMAS Canberra),fobs\Aliabad_LHD_HMAS_Canberra.MCN_Aliabad)
    CREATE_MISSION(FALLUJAHFOB,SOCOMD Fallujah FOB,fobs\Fallujah_FOB.fallujah)
    CREATE_MISSION(MALDEN2035LHD,SOCOMD Malden 2035 LHD (HMAS Canberra),fobs\Malden2035_LHD_HMAS_Canberra.Malden)
    CREATE_MISSION(CLAFGHANFOB,SOCOMD Clafghan FOB (Restrepo) ,fobs\Clafghan_FOB.clafghan)
    CREATE_MISSION(RUHAFOB,SOCOMD Ruha FOB ,fobs\Ruha_FOB.ruha)
    CREATE_MISSION(HAZARKOTFOB,SOCOMD Hazar-Kot FOB ,fobs\Hazar_Kot_FOB.MCN_HazarKot)
    CREATE_MISSION(DIYALAFOB,SOCOMD Diyala FOB ,fobs\Diyala_FOB.DYA)
    CREATE_MISSION(IHANTALAFOB,SOCOMD Ihantala FOB ,fobs\Ihantala_FOB.tem_ihantala)
    CREATE_MISSION(PULAUFOB,SOCOMD Pulau LHD (HMAS Canberra),fobs\Pulau_LHD_HMAS_Canberra.pulau)
    CREATE_MISSION(ANIZAYFOB,SOCOMD Anizay FOB,fobs\Anizay_FOB.tem_anizay)
    CREATE_MISSION(CELLEFOB,SOCOMD Celle FOB,fobs\Celle_FOB.mbg_celle2)
    CREATE_MISSION(ROSCHEFOB,SOCOMD Rosche FOB,fobs\Rosche_FOB.WL_Rosche)
    CREATE_MISSION(KURJARIFOB,SOCOMD Kurjari FOB,fobs\Kurjari_FOB.tem_kujari)
    CREATE_MISSION(SUURSAARIVLHD,SOCOMD Suursaariv FOB,fobs\Suursaariv_LHS_HMAS_Canberra.tem_suursaariv)
    CREATE_MISSION(VINJESVINGENFOB,SOCOMD Vinjesvingen FOB,fobs\Vinjesvingen_FOB.tem_vinjesvingenc)
    CREATE_MISSION(LIVONIAFOB,SOCOMD Livonia FOB,fobs\Livonia_FOB.Enoch)
    CREATE_MISSION(VIROLAHTIFOB,SOCOMD Virolahti FOB,fobs\Virolahti_FOB.vt7)
    CREATE_MISSION(MOZARTFOB,SOCOMD Lythium FOB (MozartDeath),fobs\lythium_FOB_Mozart.lythium)
    CREATE_MISSION(TRIAFOB,SOCOMD Tria FOB,fobs\Tria_FOB.jns_tria)
    CREATE_MISSION(FAPAVOFOB,SOCOMD Fapavo FOB,fobs\Fapavo_Demise_FOB.fapovo)
    CREATE_MISSION(FAPAVOLHD,SOCOMD Fapavo LHD (HMAS Canberra),fobs\Fapavo_Demise_FOB.fapovo)
    CREATE_MISSION(NZWFOB,SOCOMD NZiwasogo FOB,fobs\NZiwasogo_Trigger_FOB.pja305)
    CREATE_MISSION(LAGHISOLAFOB,SOCOMD Laghisola LHD (HMAS Canberra),fobs\Laghisola_LHD_HMAS_Canberara.egl_laghisola)
    CREATE_MISSION(SBTFOB,SOCOMD Song Bin Tanh FOB,fobs\SBT_FOB.pja312)
    CREATE_MISSION(DENILANDFOB,SOCOMD Deniland FOB,fobs\Deniland_FOB_Krusty.Deniland)
    CREATE_MISSION(KOOKABURRAALTISFOB,SOCOMD Altis FOB (Kookaburra),fobs\FOB_Kookaburra.Altis)
    CREATE_MISSION(KOOKABURRADUALAFOB,SOCOMD Duala FOB (Kookaburra),fobs\FOB_Kookaburra.isladuala3)
    CREATE_MISSION(KOOKABURRAROSCHEFOB,SOCOMD Rosche FOB (Kookaburra),fobs\FOB_Kookaburra.WL_Rosche)
    CREATE_MISSION(RUSSELMALDENFOB,SOCOMD Malden FOB (Russel),fobs\FOB_Russell.Malden)
    CREATE_MISSION(SOULTANOAFOB,SOCOMD Tanoa FOB (Soul),fobs\FOB_Soul.Tanoa)
    CREATE_MISSION(ZANZIBARTAKISTANFOB,SOCOMD Takistan FOB (Zanzibar),fobs\FOB_Zanzibar.takistan)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    Missions

//    Training
    CREATE_MISSION(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    FOBs (Hardcore)

    // CREATE_MISSION(ALTISFOB_HC,SOCOMD [HC] Altis FOB (Thelos Bay),fobs_hc\Altis_Thelos_Bay_FOB.Altis)
    // CREATE_MISSION(ALTISLHD_HC,SOCOMD [HC] Altis LHD (HMAS Canberra),fobs_hc\Altis_LHD_HMAS_Canberra.Altis)
    // CREATE_MISSION(BYSTFOB_HC,SOCOMD [HC] Bystrica FOB (Lordsburg),fobs_hc\Bystrica_Lordsburg_FOB.Woodland_ACR)
    // CREATE_MISSION(BEKETOVARNLD_HC,SOCOMD [HC] Beketov FOB (ARNOLD),fobs_hc\Beketov_FOB_Arnold.Beketov)
    // CREATE_MISSION(BEKETOVGIBSN_HC,SOCOMD [HC] Beketov FOB (GIBSON),fobs_hc\Beketov_FOB_Gibson.Beketov)
    // CREATE_MISSION(CHERNFOB_HC,SOCOMD [HC] Chernarus FOB (Joint Fourth),fobs_hc\Cherno_Joint_Fourth_FOB.Chernarus)
    // CREATE_MISSION(CHERNLHD_HC,SOCOMD [HC] Chernarus LHD (HMAS Canberra),fobs_hc\Cherno_LHD_HMAS_Canberra.Chernarus)
    // CREATE_MISSION(KUNFOB_HC,SOCOMD [HC] Kunduz FOB (Cannon),fobs_hc\Kunduz_Cannon_FOB.Kunduz)
    // CREATE_MISSION(PANTHLHD_HC,SOCOMD [HC] Panthera LHD (HMAS Canberra),fobs_hc\Panthera_LHD_HMAS_Canberra.Panthera3)
    // CREATE_MISSION(PANTHFOB_HC,SOCOMD [HC] Panthera FOB (Yuma),fobs_hc\Panthera_Yuma_FOB.Panthera3)
    // CREATE_MISSION(PORTOLHD_HC,SOCOMD [HC] Porto LHD (HMAS Canberra),fobs_hc\Porto_LHD_HMAS_Canberra.Porto)
    // CREATE_MISSION(RAHMLHD_HC,SOCOMD [HC] Rahmadi LHD (HMAS Canberra),fobs_hc\Rahmadi_LHD_HMAS_Canberra.Intro)
    // CREATE_MISSION(SAHRFOB_HC,SOCOMD [HC] Sahrani FOB (Lead Pole),fobs_hc\Sahrani_Lead_Pole_FOB.Sara)
    // CREATE_MISSION(SAHRLHD_HC,SOCOMD [HC] Sahrani LHD (HMAS Canberra),fobs_hc\Sahrani_LHD_HMAS_Canberra.Sara)
    // CREATE_MISSION(SARUGLHD_HC,SOCOMD [HC] Sarugao LHD (HMAS Canberra),fobs_hc\Sarugao_LHD_HMAS_Canberra.saru)
    // CREATE_MISSION(SARUGFOB_HC,SOCOMD [HC] Sarugao FOB (Swamp),fobs_hc\Sarugao_Swamp_FOB.saru)
    // CREATE_MISSION(SHAPURFOB_HC,SOCOMD [HC] Shapur FOB (Mailfoot),fobs_hc\Shapur_Mailfoot_FOB.Shapur_BAF)
    // CREATE_MISSION(STRATLHD_HC,SOCOMD [HC] Stratis LHD (HMAS Canberra),fobs_hc\Stratis_LHD_HMAS_Canberra.Stratis)
    // CREATE_MISSION(TAKIFOB_HC,SOCOMD [HC] Takistan FOB (Dawn Fire),fobs_hc\Takistan_Dawn_Fire_FOB.Takistan)
    // CREATE_MISSION(THIRSKFOB_HC,SOCOMD [HC] Thirsk FOB (Blue Wake),fobs_hc\Thirsk_Blue_Wake_FOB.Thirsk)
    // CREATE_MISSION(THIRSKLHD_HC,SOCOMD [HC] Thirsk LHD (HMAS Canberra),fobs_hc\Thirsk_LHD_HMAS_Canberra.Thirsk)
    // CREATE_MISSION(THIRSKWFOB_HC,SOCOMD [HC] Thirsk Winter FOB (Blue Wake),fobs_hc\ThirskW_Blue_Wake_FOB.ThirskW)
    // CREATE_MISSION(THIRSKWLHD_HC,SOCOMD [HC] Thirsk Winter LHD (HMAS Canberra),fobs_hc\ThirskW_LHD_HMAS_Canberra.ThirskW)
    // CREATE_MISSION(ZARGAFOB_HC,SOCOMD [HC] Zargabad FOB (Fury),fobs_hc\Zargabad_Fury_FOB.Zargabad)
    // CREATE_MISSION(ISLADUALALHD_HC,SOCOMD [HC] Isla Duala LHD (HMAS Canberra),fobs_hc\Isla_Duala_LHD_HMAS_Canberra.IslaDuala3)
    // CREATE_MISSION(ISLADUALAFOB_HC,SOCOMD [HC] Isla Duala FOB (Saloon),fobs_hc\Isla_Duala_Saloon_FOB.IslaDuala3)
    // CREATE_MISSION(FATAFOB_HC,SOCOMD [HC] FATA FOB (Nightstalker),fobs_hc\FATA_Nightstalker_FOB.fata)
    // CREATE_MISSION(AFGHANFOB_HC,SOCOMD [HC] Afghan Village FOB (Spartan),fobs_hc\Afghan_Village_Spartan_FOB.praa_av)
    // CREATE_MISSION(BOZLHD_HC,SOCOMD [HC] Bozcaada LHD (HMAS Canberra),fobs_hc\Bozcaada_LHD_HMAS_Canberra.Bozcaada)
    // CREATE_MISSION(KOLGUJEVFOB_HC,SOCOMD [HC] Kolgujev FOB (Chase),fobs_hc\Kolgujev_Chase_FOB.cain)
    // CREATE_MISSION(KOLGUJEVLHD_HC,SOCOMD [HC] Kolgujev LHD (HMAS Canberra),fobs_hc\Kolgujev_LHD_HMAS_Canberra.cain)
    // CREATE_MISSION(NOGOVAFOB_HC,SOCOMD [HC] Nogova FOB (Heathen),fobs_hc\Nogova_Heathen_FOB.noe)
    // CREATE_MISSION(EVERONFOB_HC,SOCOMD [HC] Everon FOB (Karachi),fobs_hc\Everon_Karachi_FOB.eden)
    // CREATE_MISSION(TANOAFOB_HC,SOCOMD [HC] Tanoa FOB (Tiki),fobs_hc\Tanoa_Tiki_FOB.Tanoa)
    // CREATE_MISSION(ALRAYAKFOB_HC,SOCOMD [HC] Al-Rayak FOB (Freedom),fobs_hc\Al-Rayak_Freedom_FOB.pja310)
    // CREATE_MISSION(ALRAYAKLHD_HC,SOCOMD [HC] Al-Rayak LHD (HMAS Canberra),fobs_hc\Al-Rayak_LHD_HMAS_Canberra.pja310)
    // CREATE_MISSION(ALIABADLHD_HC,SOCOMD [HC] Aliabad LHD (HMAS Canberra),fobs_hc\Aliabad_LHD_HMAS_Canberra.MCN_Aliabad)
    // CREATE_MISSION(FALLUJAHFOB_HC,SOCOMD [HC] Fallujah FOB,fobs_hc\Fallujah_FOB.fallujah)
    // CREATE_MISSION(MALDEN2035LHD_HC,SOCOMD [HC] Malden 2035 LHD (HMAS Canberra),fobs_hc\Malden2035_LHD_HMAS_Canberra.Malden)
    // CREATE_MISSION(CLAFGHANFOB_HC,SOCOMD [HC] Clafghan FOB (Restrepo) ,fobs_hc\Clafghan_FOB.clafghan)
    // CREATE_MISSION(RUHAFOB_HC,SOCOMD [HC] Ruha FOB ,fobs_hc\Ruha_FOB.ruha)
    // CREATE_MISSION(HAZARKOTFOB_HC,SOCOMD [HC] Hazar-Kot FOB ,fobs_hc\Hazar_Kot_FOB.MCN_HazarKot)
    // CREATE_MISSION(DIYALAFOB_HC,SOCOMD [HC] Diyala FOB ,fobs_hc\Diyala_FOB.DYA)
    // CREATE_MISSION(IHANTALAFOB_HC,SOCOMD [HC] Ihantala FOB ,fobs_hc\Ihantala_FOB.tem_ihantala)
    // CREATE_MISSION(PULAUFOB_HC,SOCOMD [HC] Pulau LHD (HMAS Canberrs),fobs_hc\Pulau_LHD_HMAS_Canberra.pulau)
    // CREATE_MISSION(ANIZAYFOB_HC,SOCOMD [HC] Anizay FOB,fobs_hc\Anizay_FOB.tem_anizay)
    // CREATE_MISSION(CELLEFOB_HC,SOCOMD [HC] Celle FOB,fobs_hc\Celle_FOB.mbg_celle2)
    // CREATE_MISSION(ROSCHEFOB_HC,SOCOMD [HC] Rosche FOB,fobs_hc\Rosche_FOB.WL_Rosche)
    // CREATE_MISSION(KURJARIFOB_HC,SOCOMD [HC] Kurjari FOB,fobs_hc\Kurjari_FOB.tem_kujari)
    // CREATE_MISSION(SUURSAARIVLHD_HC,SOCOMD [HC] Suursaariv FOB,fobs_hc\Suursaariv_LHS_HMAS_Canberra.tem_suursaariv)
    // CREATE_MISSION(VINJESVINGENFOB_HC,SOCOMD [HC] Vinjesvingen FOB,fobs_hc\Vinjesvingen_FOB.tem_vinjesvingenc)
    // CREATE_MISSION(LIVONIAFOB_HC,SOCOMD [HC] Livonia FOB,fobs_hc\Livonia_FOB.Enoch)
    // CREATE_MISSION(VIROLAHTIFOB_HC,SOCOMD [HC] Virolahti FOB,fobs_hc\Virolahti_FOB.vt7)
    // CREATE_MISSION(MOZARTFOB_HC,SOCOMD [HC] Lythium FOB (MozartDeath),fobs\lythium_FOB_Mozart.lythium)
    // CREATE_MISSION(TRIAFOB_HC,SOCOMD [HC] Tria FOB,fobs_hc\Tria_FOB.jns_tria)
    // CREATE_MISSION(FAPAVOFOB_HC,SOCOMD [HC] Fapavo FOB,fobs_hc\Fapavo_Demise_FOB.fapovo)
    // CREATE_MISSION(FAPAVOLHD_HC,SOCOMD [HC] Fapavo LHD (HMAS Canberra),fobs_hc\Fapavo_Demise_FOB.fapovo)
    // CREATE_MISSION(NZWFOB_HC,SOCOMD [HC] NZiwasogo FOB,fobs_hc\NZiwasogo_Trigger_FOB.pja305)
    // CREATE_MISSION(LAGHISOLAFOB_HC,SOCOMD [HC] Laghisola LHD (HMAS Canberra),fobs_hc\Laghisola_LHD_HMAS_Canberara.egl_laghisola)
    // CREATE_MISSION(SBTFOB_HC,SOCOMD [HC] Song Bin Tanh FOB,fobs_hc\SBT_FOB.pja312)
    // CREATE_MISSION(DENILANDFOB_HC,SOCOMD [HC] Deniland FOB,fobs\Deniland_FOB_Krusty.Deniland)

    };
};
