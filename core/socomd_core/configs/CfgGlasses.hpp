#define HEARING_PROTECTION_PELTOR ace_hearing_lowerVolume = 0.0;\
ace_hearing_protection = 0.4;\
advanced_peltors_protection = 1;


class CfgGlasses {
	class EWK_Shemag_LULZ {
		author = AUTHOR_STR;
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		scope = 1;
	};
	//Add Overlay to Gasmasks
	class Mask_M40 {
		ACE_Overlay = "socomd_data_core\CTgear\GasMask.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\GasMaskCracked.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
		scope = 2;
	};
	class Mask_M40_OD {
		ACE_Overlay = "socomd_data_core\CTgear\GasMask.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\GasMaskCracked.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
		scope = 2;
	};
	class Mask_M50 {
		ACE_Overlay = "socomd_data_core\CTgear\GasMask.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\GasMaskCracked.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
		scope = 2;
	};
	class G_AirPurifyingRespirator_01_base_F {
		ACE_Overlay = "socomd_data_core\CTgear\GasMask.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\GasMaskCracked.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
	};
	class G_AirPurifyingRespirator_02_base_F {
		ACE_Overlay = "socomd_data_core\CTgear\GasMask.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\GasMaskCracked.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
	};
	
	class G_RegulatorMask_base_F {
		ACE_Overlay = "socomd_data_core\CTgear\GasMask.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\GasMaskCracked.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
	};
	//Add Blinding to Blindfold
	class G_Blindfold_01_base_F {
		ACE_Overlay = "socomd_data_core\CTgear\blindfold.paa";
		ACE_OverlayCracked = "socomd_data_core\CTgear\blindfold.paa";
		ACE_Protection = 1;
		ACE_Resistance = 2;
	};

	// Peltors for Facewear
	//  balaclava 
	class VSM_Balaclava_black_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_OD_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_tan_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_black_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_OD_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_tan_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_black_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_OD_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava_tan_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	//  balaclava 2
	class VSM_Balaclava2_black_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_OD_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_tan_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_black_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_OD_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_tan_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_black_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_OD_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Balaclava2_tan_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	// face mask 
	class VSM_FaceMask_black_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_OD_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_tan_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_black_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_OD_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_tan_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_black_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_OD_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_FaceMask_tan_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	//  balaclava + Shemagh
	class VSM_Shemagh_Balaclava_OD_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava_tan_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava_OD_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava_tan_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava_OD_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava_tan_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	//  balaclava 2 + Shemagh
	class VSM_Shemagh_Balaclava2_OD_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava2_tan_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava2_OD_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava2_tan_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava2_OD_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_Balaclava2_tan_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	// face mask + Shemagh
	class VSM_Shemagh_FaceMask_OD_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_FaceMask_tan_Peltor{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_FaceMask_OD_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_FaceMask_tan_Peltor_glasses{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_FaceMask_OD_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	class VSM_Shemagh_FaceMask_tan_Peltor_Goggles{
		HEARING_PROTECTION_PELTOR
	}
	// peltors by themselves
	class VSM_Peltor_AOR1_glasses {
		HEARING_PROTECTION_PELTOR		
	}
	class VSM_Peltor_coyote_glasses {
		HEARING_PROTECTION_PELTOR		
	}
	class VSM_Peltor_m81_glasses {
		HEARING_PROTECTION_PELTOR		
	}
	class VSM_Peltor_OCP_glasses {
		HEARING_PROTECTION_PELTOR		
	}
	class VSM_Peltor_OD_glasses {
		HEARING_PROTECTION_PELTOR		
	}


};