
#include "\z\ace\addons\main\script_macros.hpp"

#define MISSION_MACRO(ID,BRIEF,DIR) class ID { briefingName = QUOTE(BRIEF); directory = QUOTE(z\socomd\addons\missions\##DIR); };

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
//    MISSION_MACRO(Unique_class_name,Mission screen name,Mission folder name)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    FOBs
//    Count = 17

    // MISSION_MACRO(BYSTFOB,SOCOMD Bystrica FOB (Lordsburg),fobs\Bystrica_Lordsburg_FOB.Woodland_ACR)
    // MISSION_MACRO(CHERNFOB,SOCOMD Chernarus FOB (Joint Fourth),fobs\Cherno_Joint_Fourth_FOB.Chernarus)
    // MISSION_MACRO(KUNFOB,SOCOMD Kunduz FOB (Cannon),fobs\Kunduz_Cannon_FOB.Kunduz)
    // MISSION_MACRO(SAHRFOB,SOCOMD Sahrani FOB (Lead Pole),fobs\Sahrani_Lead_Pole_FOB.Sara)
    // MISSION_MACRO(FATAFOB,SOCOMD FATA FOB (Nightstalker),fobs\FATA_Nightstalker_FOB.fata)
    // MISSION_MACRO(RUHAFOB,SOCOMD Ruha FOB ,fobs\Ruha_FOB.ruha)
    // MISSION_MACRO(ANIZAYFOB,SOCOMD Anizay FOB,fobs\Anizay_FOB.tem_anizay)
    // MISSION_MACRO(KURJARIFOB,SOCOMD Kurjari FOB,fobs\Kurjari_FOB.tem_kujari)
    // MISSION_MACRO(TRIAFOB,SOCOMD Tria FOB,fobs\Tria_FOB.jns_tria)

    //MISSION_MACRO(NOVUSKOOKABURRAROSCHEFOB,SOCOMD Rosche FOB (Novus-Kookaburra),fobs\FOB_Novus-Kookaburra.WL_Rosche)
    //MISSION_MACRO(NOVUSRUSSELMALDENFOB,SOCOMD Malden FOB (Novus-Russel),fobs\FOB_Novus-Russell.Malden)
    //MISSION_MACRO(NOVUSSOULTANOAFOB,SOCOMD Tanoa FOB (Novus-Soul),fobs\FOB_Soul.Tanoa)
    //MISSION_MACRO(NOVUSZANZIBARTAKISTANFOB,SOCOMD Takistan FOB (Novus-Zanzibar),fobs\FOB_Novus-Zanzibar.takistan)


    MISSION_MACRO(NOVUSRAGNAROKLYTHIUMFOB,SOCOMD Lythium FOB (Novus Ragnarok),fobs\FOB_Novus_Ragnarok.lythium)
    MISSION_MACRO(NOVUSKOOKABURRAALTISFOB,SOCOMD Altis FOB (Novus Kookaburra),fobs\FOB_Novus_Kookaburra.Altis)
    MISSION_MACRO(NOVUSCHERNOFOB,SOCOMD Chernarus FOB (Novus Cherno),fobs\FOB_Novus_Cherno.cup_chernarus_A3)
    MISSION_MACRO(BASECAMPFOB,SOCOMD Fapovo FOB (Base Camp),fobs\FOB_BaseCamp.fapovo)
    MISSION_MACRO(BRAUTIFOB,SOCOMD Vinjesvingen FOB (Brauti),fobs\FOB_Brauti.tem_vinjesvingenc)
    MISSION_MACRO(HEADFOB,SOCOMD Bozcaada FOB (Head),fobs\FOB_Head.bozcaada)
    MISSION_MACRO(HOLDOFFFOB,SOCOMD Anizay FOB (Hold Off),fobs\FOB_HoldOff.tem_anizay)
    MISSION_MACRO(ISHAQIFOB,SOCOMD Diyala FOB (Ishaqi),fobs\FOB_Ishaqi.DYA)
    MISSION_MACRO(LUNAFOB,SOCOMD Suursaariv FOB (Luna),fobs\FOB_Luna.tem_suursaariv)
    MISSION_MACRO(MEFUNVOFOB,SOCOMD NZiwasogo FOB (Mefunvo),fobs\FOB_Mefunvo.pja305)
    MISSION_MACRO(OMNELAFOB,SOCOMD Virolahti FOB (Omnela),fobs\FOB_Omnela.vt7)
    MISSION_MACRO(PUESTOFOB,SOCOMD Temp Lythium FOB (Puesto),fobs\FOB_Puesto.lythium)
    MISSION_MACRO(RADACZFOB,SOCOMD Livonia FOB (Radacz),fobs\FOB_Radacz.Enoch)
    MISSION_MACRO(RIVERFOB,SOCOMD Bozoum FOB (River),fobs\FOB_River.bozoum)
    MISSION_MACRO(RUNWAYFOB,SOCOMD Al Rayak FOB (Runway),fobs\FOB_Runway.pja310)
    MISSION_MACRO(VALLEYFOB,SOCOMD Zargabad FOB (Valley),fobs\FOB_Valley.zargabad)
    MISSION_MACRO(ESSENTIALSFOB,SOCOMD Essentials FOB (VR),fobs\03_03_2022_FOB_SOCOMD_Essentials.VR)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    CARRIERs
//    Count = 14

    MISSION_MACRO(ALTISCARRIER,SOCOMD Altis Light Carrier (HMAS Melbourne),fobs\AC_HMAS_Melbourne.Altis)
    MISSION_MACRO(ALTISLHD,SOCOMD Altis LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Altis)
    MISSION_MACRO(CHERNWINTERLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Chernarus_Winter)
    MISSION_MACRO(CHERNLHD,SOCOMD Chernarus LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.cup_chernarus_A3)
    MISSION_MACRO(SAHRLHD,SOCOMD Sahrani LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.sara)
    MISSION_MACRO(SAHRUNITEDLHD,SOCOMD United Sahrani LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.sara_dbe1)
    MISSION_MACRO(BOZLHD,SOCOMD Bozcaada LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Bozcaada)
    MISSION_MACRO(MALDEN2035LHD,SOCOMD Malden 2035 LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.Malden)
    MISSION_MACRO(PULAULHD,SOCOMD Pulau LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pulau)
    MISSION_MACRO(VIROLAHTILHD,SOCOMD Virolahti LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.vt7)
    MISSION_MACRO(SUURSAARIVLHD,SOCOMD Suursaariv LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.tem_suursaariv)
    MISSION_MACRO(COLOMBIALHD,SOCOMD Colombia LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.UMB_Colombia)
    MISSION_MACRO(ALRAYAKLHD,SOCOMD Al Rayak LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.pja310)
    MISSION_MACRO(SCOTLANDLHD,SOCOMD Kintyre LHD (HMAS Canberra),fobs\LHD_HMAS_Canberra.rof_mok)

///////////////////////////////////////////////////////////////////////////////////////////////////
//    Missions

//    Training
    // MISSION_MACRO(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)
    MISSION_MACRO(ALTISTRAIN,SOCOMD Training Altis Refurbished,missions\SOCOMD_Training.Altis)

    };
};
