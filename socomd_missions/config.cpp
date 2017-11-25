#define ADD(ID,BRIEF,DIR) class ID { briefingName = BRIEF; directory = socomd_missions\##DIR; };

class CfgPatches {
    class socomd_missions {
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
	ADD(MALDENFOB,SOCOMD Malden FOB (Kraken),fobs\Malden_Kraken_FOB.abel)
	ADD(NOGOVAFOB,SOCOMD Nogova FOB (Heathen),fobs\Nogova_Heathen_FOB.noe)
	ADD(EVERONFOB,SOCOMD Everon FOB (Karachi),fobs\Everon_Karachi_FOB.eden)
	ADD(TANOAFOB,SOCOMD Tanoa FOB (Tiki),fobs\Tanoa_Tiki_FOB.Tanoa)
	ADD(ALRAYAKFOB,SOCOMD Al-Rayak FOB (Freedom),fobs\Al-Rayak_Freedom_FOB.pja310)
	ADD(ALRAYAKLHD,SOCOMD Al-Rayak LHD (HMAS Canberra),fobs\Al-Rayak_LHD_HMAS_Canberra.pja310)
	ADD(ALIABADLHD,SOCOMD Aliabad Region LHD (HMAS Canberra),fobs\Aliabad_Freedom.MCN_Aliabad)
	ADD(FALLUJAHFOB,SOCOMD Fallujah FOB (Rattlesnake),fobs\Fallujah_Rattlesnake_FOB.fallujah)
	
///////////////////////////////////////////////////////////////////////////////////////////////////
//	Missions
	ADD(VRSHOWCASE,SOCOMD Showcase,missions\SOCOMD_Showcase.VR)

//	Training
	ADD(STRATISTRAIN,SOCOMD Training Stratis (Airfield),missions\SOCOMD_Training.Stratis)
	ADD(ZARGABADTRAIN,SOCOMD Section Level Training Zargabad (Yarum),missions\SOCOMD_Section_Level_Training.Zargabad)
	ADD(STRATISAUTO,SOCOMD Auto-Rotation Training Stratis,missions\SOCOMD_AutoRotation.Stratis)

//	Freeo
	ADD(EAGLEEYE,SOCOMD Operation Eagle Eye (Freeo),missions\Operation_Eagle_Eye.Altis)
	ADD(IRONSCALES2,SOCOMD Operation Iron Scales 2 (Freeo),missions\Operation_Iron_Scales_2.Altis)
	ADD(SCORPIONKING,SOCOMD Operation Scorpion King (Freeo),missions\Operation_Scorpion_King.Altis)
	ADD(WINGLESSBEETLE2,SOCOMD Operation Wingless Beetle 2 (Freeo),missions\Operation_Wingless_Beetle_2.Altis)

//	Sharkie
	ADD(PMC2,PMC Operation Dark Hammer - Part 2 (Sharkie),missions\Operation_Dark_Hammer_PMC2.eden)
	ADD(PMC3,PMC Operation Shadow Raider - Part 3 (Sharkie),missions\Operation_Shadow_Raider_PMC3.Panthera3)
	ADD(SME,2016 Christmas Special (Sharkie),missions\Sleigh_me.ThirskW)


	};
};
