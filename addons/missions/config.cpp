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

//    USAGE:
//    Place mission in this addons \missions folder (non-pbo)
//    ADD(Unique_class_name,Mission screen name,Mission folder name)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    FOBs
//    Count = 26

    // ADD(ALRAYAKFOB,SOCOMD Al-Rayak FOB (Freedom),fobs\Al-Rayak_Freedom_FOB.pja310)
    // ADD(BYSTFOB,SOCOMD Bystrica FOB (Lordsburg),fobs\Bystrica_Lordsburg_FOB.Woodland_ACR)
    // ADD(CHERNFOB,SOCOMD Chernarus FOB (Joint Fourth),fobs\Cherno_Joint_Fourth_FOB.Chernarus)
    // ADD(KUNFOB,SOCOMD Kunduz FOB (Cannon),fobs\Kunduz_Cannon_FOB.Kunduz)
    // ADD(SAHRFOB,SOCOMD Sahrani FOB (Lead Pole),fobs\Sahrani_Lead_Pole_FOB.Sara)
    // ADD(SHAPURFOB,SOCOMD Shapur FOB (Mailfoot),fobs\Shapur_Mailfoot_FOB.Shapur_BAF)
    // ADD(ZARGAFOB,SOCOMD Zargabad FOB (Fury),fobs\Zargabad_Fury_FOB.Zargabad)
    // ADD(ZARGAFOBE,SOCOMD Zargabad FOB (Exfil),fobs\Zargabad_Exfil_FOB.Zargabad)
    // ADD(FATAFOB,SOCOMD FATA FOB (Nightstalker),fobs\FATA_Nightstalker_FOB.fata)
    // ADD(RUHAFOB,SOCOMD Ruha FOB ,fobs\Ruha_FOB.ruha)
    // ADD(DIYALAFOB,SOCOMD Diyala FOB ,fobs\Diyala_FOB.DYA)
    // ADD(ANIZAYFOB,SOCOMD Anizay FOB,fobs\Anizay_FOB.tem_anizay)
    // ADD(KURJARIFOB,SOCOMD Kurjari FOB,fobs\Kurjari_FOB.tem_kujari)
    // ADD(VINJESVINGENFOB,SOCOMD Vinjesvingen FOB,fobs\Vinjesvingen_FOB.tem_vinjesvingenc)
    // ADD(LIVONIAFOB,SOCOMD Livonia FOB,fobs\Livonia_FOB.Enoch)
    // ADD(VIROLAHTIFOB,SOCOMD Virolahti FOB,fobs\Virolahti_FOB.vt7)
    // ADD(TRIAFOB,SOCOMD Tria FOB,fobs\Tria_FOB.jns_tria)
    // ADD(NZWFOB,SOCOMD NZiwasogo FOB,fobs\NZiwasogo_Trigger_FOB.pja305)
    // ADD(ESSENTIALSFOB,SOCOMD Essentials FOB (VR),fobs\FOB_SOCOMD_Essentials.VR)
    
    //ADD(KOOKABURRAALTISFOB,SOCOMD Altis FOB (Kookaburra),fobs\FOB_Kookaburra.Altis)
    //ADD(KOOKABURRAROSCHEFOB,SOCOMD Rosche FOB (Kookaburra),fobs\FOB_Kookaburra.WL_Rosche)
    //ADD(RUSSELMALDENFOB,SOCOMD Malden FOB (Russel),fobs\FOB_Russell.Malden)
    //ADD(SOULTANOAFOB,SOCOMD Tanoa FOB (Soul),fobs\FOB_Soul.Tanoa)
    //ADD(ZANZIBARTAKISTANFOB,SOCOMD Takistan FOB (Zanzibar),fobs\FOB_Zanzibar.takistan)
    //ADD(RAGNAROKLYTHIUMFOB,SOCOMD Lythium FOB (Ragnarok),fobs\FOB_Ragnarok.lythium)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    CARRIERs
//    Count = 14

    // ADD(ALRAYAKLHD,SOCOMD Al-Rayak LHD (HMAS Canberra),fobs\Al-Rayak_LHD_HMAS_Canberra.pja310)
    // ADD(ALTISLHD,SOCOMD Altis LHD (HMAS Canberra),fobs\Altis_LHD_HMAS_Canberra.Altis)
    // ADD(CHERNLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\Cherno_LHD_HMAS_Canberra.Chernarus)
    // ADD(PORTOLHD,SOCOMD Porto LHD (HMAS Canberra),fobs\Porto_LHD_HMAS_Canberra.Porto)
    // ADD(RAHMLHD,SOCOMD Rahmadi LHD (HMAS Canberra),fobs\Rahmadi_LHD_HMAS_Canberra.Intro)
    // ADD(SAHRLHD,SOCOMD Sahrani LHD (HMAS Canberra),fobs\Sahrani_LHD_HMAS_Canberra.Sara)
    // ADD(STRATLHD,SOCOMD Stratis LHD (HMAS Canberra),fobs\Stratis_LHD_HMAS_Canberra.Stratis)
    // ADD(BOZLHD,SOCOMD Bozcaada LHD (HMAS Canberra),fobs\Bozcaada_LHD_HMAS_Canberra.Bozcaada)
    // ADD(MALDEN2035LHD,SOCOMD Malden 2035 LHD (HMAS Canberra),fobs\Malden2035_LHD_HMAS_Canberra.Malden)
    // ADD(FAPOVOLHD,SOCOMD Fapovo LHD (HMAS Canberra),fobs\Fapovo_LHD_HMAS_Canberra.fapovo)
    // ADD(PULAULHD,SOCOMD Pulau LHD (HMAS Canberra),fobs\Pulau_LHD_HMAS_Canberra.pulau)
    // ADD(LAGHISOLALHD,SOCOMD Laghisola LHD (HMAS Canberra),fobs\Laghisola_LHD_HMAS_Canberra.egl_laghisola)
    // ADD(VIROLAHTILHD,SOCOMD Virolahti LHD (HMAS Canberra),fobs\Virolahti_LHD_HMAS_Canberra.vt7)
    // ADD(NZWLHD,SOCOMD NZiwasogo LHD (HMAS Canberra),fobs\NZiwasogo_LHD_HMAS_Canberra.pja305)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    Missions

//    Training
    // ADD(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)

    };
};
