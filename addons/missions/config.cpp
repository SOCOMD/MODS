#define ADD(ID,BRIEF,DIR) class ID { briefingName = BRIEF; directory = socomd_missions\##DIR; };

class CfgPatches {
    class socomd_missions {
        //Internal Version
        version = "1.1.0";
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
//    Count = 3

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
    ADD(ESSENTIALSFOB,SOCOMD Essentials FOB (VR),fobs\FOB_SOCOMD_Essentials.VR)
    ADD(NOVUSKOOKABURRAALTISFOB,SOCOMD Altis FOB (Novus-Kookaburra),fobs\FOB_Novus-Kookaburra.Altis)
    //ADD(NOVUSKOOKABURRAROSCHEFOB,SOCOMD Rosche FOB (Novus-Kookaburra),fobs\FOB_Novus-Kookaburra.WL_Rosche)
    //ADD(NOVUSRUSSELMALDENFOB,SOCOMD Malden FOB (Novus-Russel),fobs\FOB_Novus-Russell.Malden)
    //ADD(NOVUSSOULTANOAFOB,SOCOMD Tanoa FOB (Novus-Soul),fobs\FOB_Soul.Tanoa)
    //ADD(NOVUSZANZIBARTAKISTANFOB,SOCOMD Takistan FOB (Novus-Zanzibar),fobs\FOB_Novus-Zanzibar.takistan)
    ADD(NOVUSRAGNAROKLYTHIUMFOB,SOCOMD Lythium FOB (Novus-Ragnarok),fobs\FOB_Novus-Ragnarok.lythium)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    CARRIERs
//    Count = 13

    ADD(ALTISLHD,SOCOMD Altis LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Altis)
    ADD(CHERNWINTERLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Chernarus_Winter)
    ADD(CHERNLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.cup_chernarus_A3)
    ADD(SAHRLHD,SOCOMD Sahrani LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.sara)
    ADD(SAHRUNITEDLHD,SOCOMD United Sahrani LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.sara_dbe1)
    // ADD(STRATLHD,SOCOMD Stratis LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Stratis)
    ADD(BOZLHD,SOCOMD Bozcaada LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Bozcaada)
    ADD(MALDEN2035LHD,SOCOMD Malden 2035 LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Malden)
    // ADD(FAPOVOLHD,SOCOMD Fapovo LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.fapovo)
    ADD(PULAULHD,SOCOMD Pulau LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pulau)
    // ADD(LAGHISOLALHD,SOCOMD Laghisola LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.egl_laghisola)
    ADD(VIROLAHTILHD,SOCOMD Virolahti LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.vt7)
    // ADD(NZWLHD,SOCOMD NZiwasogo LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pja305)
    ADD(SUURSAARIVLHD,SOCOMD Suursaariv LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.tem_suursaariv)
    ADD(COLOMBIALHD,SOCOMD Colombia LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.UMB_Colombia)
    ADD(ALRAYAKLHD,SOCOMD Al Rayak LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pja310)
    ADD(SCOTLANDLHD,SOCOMD Kintyre LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.rof_mok)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    Missions

//    Training
    // ADD(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)
    ADD(STRATISTRAIN,SOCOMD Training Altis,missions\SOCOMD_Training.Altis)

    };
};
