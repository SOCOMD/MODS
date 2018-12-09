
#define SOCOMD_VEST(VEST) \
class ##VEST; \
class SOCOMD_OVERRIDE_##VEST : ##VEST { \
	scope = private; \
	author = AUTHOR_STR; \
	class ItemInfo; \
}; \
class SOCOMD_OVERRIDE_A_##VEST : SOCOMD_OVERRIDE_##VEST { \
	scope = private; \
	author = AUTHOR_STR; \
	class ItemInfo; \
}; \
class SOCOMD_##VEST : SOCOMD_OVERRIDE_A_##VEST { \
	scope = public; \
	author = AUTHOR_STR; \
	class ItemInfo : ItemInfo { \
		containerClass = "Supply400"; \
		mass = 20; \
		class HitpointsProtectionInfo { \
			class Chest { \
				hitpointName = "HitChest"; \
				armor = 40; \
				passThrough = 0.1; \
			}; \
			class Diaphragm { \
				hitpointName = "HitDiaphragm"; \
				armor = 40; \
				passThrough = 0.1; \
			}; \
			class Abdomen { \
				hitpointName = "HitAbdomen"; \
				armor = 40; \
				passThrough = 0.1; \
			}; \
			class Body { \
				hitpointName = "HitBody"; \
				passThrough = 0.1; \
			}; \
		}; \
	}; \
};

SOCOMD_VEST(V_RebreatherB)

SOCOMD_VEST(lbt_comms_coy)
SOCOMD_VEST(lbt_comms_mc)
SOCOMD_VEST(lbt_tl_coy)
SOCOMD_VEST(lbt_tl_mc)
SOCOMD_VEST(lbt_medical_coy)
SOCOMD_VEST(lbt_medical_mc)
SOCOMD_VEST(lbt_weapons_coy)
SOCOMD_VEST(lbt_weapons_mc)

SOCOMD_VEST(SOG_BAG_MC)
SOCOMD_VEST(SOG_BAG_Tan)
SOCOMD_VEST(SOG_BAG_od)
SOCOMD_VEST(SOG_BAG_recon_MC)
SOCOMD_VEST(SOG_BAG_recon_Tan)
SOCOMD_VEST(SOG_BAG_recon_od)
SOCOMD_VEST(SOG_BAG_BREACHER_tan)
SOCOMD_VEST(SOG_BAG_BREACHER_MC)
SOCOMD_VEST(SOG_BAG_BREACHER_od)
SOCOMD_VEST(SOG_BAG_med_tan)
SOCOMD_VEST(SOG_BAG_med_MC)
SOCOMD_VEST(SOG_BAG_med_od)

SOCOMD_VEST(Kit_Bag_MC)
SOCOMD_VEST(Kit_Bag_Tan)
SOCOMD_VEST(Kit_Bag_od)
SOCOMD_VEST(Kit_Bag_R_MC)
SOCOMD_VEST(Kit_Bag_R_od)
SOCOMD_VEST(Kit_Bag_R_Tan)
SOCOMD_VEST(Kit_Bag_pince_TAN)
SOCOMD_VEST(Kit_Bag_pince_mc)
SOCOMD_VEST(Kit_Bag_pince_od)

////////////////////////////////////////////////////////////////////////////////
// Working



////////////////////////////////////////////////////////////////////////////////
// COUNTER TERRORISM ITEMS

class SOCOMD_lbt_comms_mc_BLK : lbt_comms_coy {
	scope = public;
	displayName = "SOCOMD Leader Vest Black";
	hiddenSelections[]= {
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\lbt_blk.paa",
		"socomd_data_core\CTgear\gear_blk.paa",
		"socomd_data_core\CTgear\radio_blk.paa",
		"socomd_data_core\CTgear\grenade_blk.paa",
		"socomd_data_core\CTgear\pouch_blk.paa"
	};
};

class SOCOMD_Medic_Vest_BLK : lbt_medical_coy {
	scope = public;
	displayName = "SOCOMD Medic Vest Black";
	hiddenSelections[]= {
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\lbt_blk.paa",
		"socomd_data_core\CTgear\gear_blk.paa",
		"socomd_data_core\CTgear\radio_blk.paa",
		"socomd_data_core\CTgear\shears_co.paa",
		"socomd_data_core\CTgear\pouch_blk.paa"
	};
};

class SOCOMD_lbt_tl_mc_BLK : lbt_tl_coy {
	scope = public;
	displayName = "SOCOMD Operator Vest Black";
	hiddenSelections[]= {
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\lbt_blk.paa",
		"socomd_data_core\CTgear\gear_blk.paa",
		"socomd_data_core\CTgear\radio_blk.paa",
		"socomd_data_core\CTgear\grenade_blk.paa",
		"socomd_data_core\CTgear\pouch_blk.paa"
	};
};
