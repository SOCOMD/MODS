
class VestItem;

#define VEST_ARMOR_LIGHT \
class ItemInfo : VestItem { \
	hitpointName = "HitBody"; \
	containerClass = "Supply170"; \
	armor = 6; \
	passThrough = 0.1; \
	mass = 60; \
	class HitpointsProtectionInfo { \
		class Neck { \
			hitpointName = "HitNeck"; \
			armor = 2; \
			passThrough	= 0.5; \
		}; \
		class Arms { \
			hitpointName = "HitArms"; \
			armor = 2; \
			passThrough	= 0.5; \
		}; \
		class Chest { \
			hitpointName = "HitChest"; \
			armor = 6; \
			passThrough	= 0.1; \
		}; \
		class Diaphragm { \
			hitpointName = "HitDiaphragm"; \
			armor = 6; \
			passThrough	= 0.1; \
		}; \
		class Abdomen { \
			hitpointName = "HitAbdomen"; \
			armor = 6; \
			passThrough	= 0.1; \
		}; \
		class Body { \
			hitpointName = "HitBody"; \
			passThrough	= 0.1; \
		}; \
	}; \
};


#define VEST_ARMOR_HEAVY \
class ItemInfo : VestItem { \
	hitpointName = "HitBody"; \
	containerClass = "Supply170"; \
	armor = 12; \
	passThrough = 0.1; \
	mass = 60; \
	class HitpointsProtectionInfo { \
		class Neck { \
			hitpointName = "HitNeck"; \
			armor = 4; \
			passThrough	= 0.5; \
		}; \
		class Arms { \
			hitpointName = "HitArms"; \
			armor = 4; \
			passThrough	= 0.5; \
		}; \
		class Chest { \
			hitpointName = "HitChest"; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Diaphragm { \
			hitpointName = "HitDiaphragm"; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Abdomen { \
			hitpointName = "HitAbdomen"; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Body { \
			hitpointName = "HitBody"; \
			passThrough	= 0.1; \
		}; \
	}; \
};

class Vest_Camo_Base : ItemCore {
	
};

////////////////////////////////////////////////////////////////////////////////

// LBT COMMS
class lbt_comms_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// LBT LIGHT
class lbt_light_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// LBT MEDICAL
class lbt_medical_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_blk : lbt_medical_coy {
	scope = public;
	displayName = "[S4] LBT BLK (Medical)";
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

// LBT OPERATOR
class lbt_operator_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_blk : lbt_operator_coy {
	scope = public;
	displayName = "[S4] LBT BLK (Operator)";
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

// LBT POUCHLESS
class lbt_pouchless_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// LBT TL
class lbt_tl_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_blk : lbt_tl_coy {
	scope = public;
	displayName = "[S4] LBT BLK (Team Leader)";
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

// LBT WEAPONS
class lbt_weapons_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// Rebreather
class V_RebreatherB : Vest_Camo_Base {
	class ItemInfo : VestItem {
		hitpointName = "HitBody";
		containerClass = "Supply400";
		armor = 12;
		passThrough = 0.1;
		mass = 240;
		vestType = "Rebreather";
		class HitpointsProtectionInfo {
			class Neck {
				hitpointName = "HitNeck";
				armor = 4;
				passThrough	= 0.5;
			};
			class Arms {
				hitpointName = "HitArms";
				armor = 4;
				passThrough	= 0.5;
			};
			class Chest {
				hitpointName = "HitChest";
				armor = 12;
				passThrough	= 0.1;
			};
			class Diaphragm {
				hitpointName = "HitDiaphragm";
				armor = 12;
				passThrough	= 0.1;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 12;
				passThrough	= 0.1;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};