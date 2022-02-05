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
//    Count = 17

    // ADD(BYSTFOB,SOCOMD Bystrica FOB (Lordsburg),fobs\Bystrica_Lordsburg_FOB.Woodland_ACR)
    // ADD(CHERNFOB,SOCOMD Chernarus FOB (Joint Fourth),fobs\Cherno_Joint_Fourth_FOB.Chernarus)
    // ADD(KUNFOB,SOCOMD Kunduz FOB (Cannon),fobs\Kunduz_Cannon_FOB.Kunduz)
    // ADD(SAHRFOB,SOCOMD Sahrani FOB (Lead Pole),fobs\Sahrani_Lead_Pole_FOB.Sara)
    // ADD(FATAFOB,SOCOMD FATA FOB (Nightstalker),fobs\FATA_Nightstalker_FOB.fata)
    // ADD(RUHAFOB,SOCOMD Ruha FOB ,fobs\Ruha_FOB.ruha)
    // ADD(ANIZAYFOB,SOCOMD Anizay FOB,fobs\Anizay_FOB.tem_anizay)
    // ADD(KURJARIFOB,SOCOMD Kurjari FOB,fobs\Kurjari_FOB.tem_kujari)
    // ADD(TRIAFOB,SOCOMD Tria FOB,fobs\Tria_FOB.jns_tria)

    //ADD(NOVUSKOOKABURRAROSCHEFOB,SOCOMD Rosche FOB (Novus-Kookaburra),fobs\FOB_Novus-Kookaburra.WL_Rosche)
    //ADD(NOVUSRUSSELMALDENFOB,SOCOMD Malden FOB (Novus-Russel),fobs\FOB_Novus-Russell.Malden)
    //ADD(NOVUSSOULTANOAFOB,SOCOMD Tanoa FOB (Novus-Soul),fobs\FOB_Soul.Tanoa)
    //ADD(NOVUSZANZIBARTAKISTANFOB,SOCOMD Takistan FOB (Novus-Zanzibar),fobs\FOB_Novus-Zanzibar.takistan)
    ADD(NOVUSRAGNAROKLYTHIUMFOB,SOCOMD Lythium FOB (Novus Ragnarok),fobs\FOB_Novus_Ragnarok.lythium)
    ADD(NOVUSKOOKABURRAALTISFOB,SOCOMD Altis FOB (Novus Kookaburra),fobs\FOB_Novus_Kookaburra.Altis)
    ADD(NOVUSCHERNOFOB,SOCOMD Chernarus FOB (Novus Cherno),fobs\FOB_Novus_Cherno.cup_chernarus_A3)
    ADD(BASECAMPFOB,SOCOMD Fapovo FOB (Base Camp),fobs\FOB_BaseCamp.fapovo)
    ADD(BRAUTIFOB,SOCOMD Vinjesvingen FOB (Brauti),fobs\FOB_Brauti.tem_vinjesvingenc)
    ADD(HEADFOB,SOCOMD Bozcaada FOB (Head),fobs\FOB_Head.bozcaada)
    ADD(HOLDOFFFOB,SOCOMD Anizay FOB (Hold Off),fobs\FOB_HoldOff.tem_anizay)
    ADD(ISHAQIFOB,SOCOMD Diyala FOB (Ishaqi),fobs\FOB_Ishaqi.DYA)
    ADD(LUNAFOB,SOCOMD Suursaariv FOB (Luna),fobs\FOB_Luna.tem_suursaariv)
    ADD(MEFUNVOFOB,SOCOMD NZiwasogo FOB (Mefunvo),fobs\FOB_Mefunvo.pja305)
    ADD(OMNELAFOB,SOCOMD Virolahti FOB (Omnela),fobs\FOB_Omnela.vt7)
    ADD(PUESTOFOB,SOCOMD Temp Lythium FOB (Puesto),fobs\FOB_Puesto.lythium)
    ADD(RADACZFOB,SOCOMD Livonia FOB (Radacz),fobs\FOB_Radacz.Enoch)
    ADD(RIVERFOB,SOCOMD Bozoum FOB (River),fobs\FOB_River.bozoum)
    ADD(RUNWAYFOB,SOCOMD Al Rayak FOB (Runway),fobs\FOB_Runway.pja310)
    ADD(VALLEYFOB,SOCOMD Zargabad FOB (Valley),fobs\FOB_Valley.zargabad)
    ADD(ESSENTIALSFOB,SOCOMD Essentials FOB (VR),fobs\05_02_2022_FOB_SOCOMD_Essentials.VR)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    CARRIERs
//    Count = 13

    ADD(ALTISLHD,SOCOMD Altis LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Altis)
    ADD(CHERNWINTERLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Chernarus_Winter)
    ADD(CHERNLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.cup_chernarus_A3)
    ADD(SAHRLHD,SOCOMD Sahrani LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.sara)
    ADD(SAHRUNITEDLHD,SOCOMD United Sahrani LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.sara_dbe1)
    ADD(BOZLHD,SOCOMD Bozcaada LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Bozcaada)
    ADD(MALDEN2035LHD,SOCOMD Malden 2035 LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Malden)
    ADD(PULAULHD,SOCOMD Pulau LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pulau)
    ADD(VIROLAHTILHD,SOCOMD Virolahti LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.vt7)
    ADD(SUURSAARIVLHD,SOCOMD Suursaariv LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.tem_suursaariv)
    ADD(COLOMBIALHD,SOCOMD Colombia LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.UMB_Colombia)
    ADD(ALRAYAKLHD,SOCOMD Al Rayak LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pja310)
    ADD(SCOTLANDLHD,SOCOMD Kintyre LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.rof_mok)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    Missions

//    Training
    // ADD(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)
    ADD(ALTISTRAIN,SOCOMD Training Altis Refurbished,missions\SOCOMD_Training.Altis)

    };
};
