class CfgLoadoutVests {
	class SOCOMD_lbt_comms {
		loadoutWhitelist[] = {
			"SOCOMD_Commander",
			"SOCOMD_Leader"
		};
	};

	class SOCOMD_lbt_comms_coy : SOCOMD_lbt_comms { };
	class SOCOMD_lbt_comms_mc : SOCOMD_lbt_comms { };

	class SOCOMD_lbt_tl {
		loadoutWhitelist[] = {
			"SOCOMD_Grenadier",
			"SOCOMD_Rifleman",
			"SOCOMD_Marksman",
			"SOCOMD_Sapper",
			"SOCOMD_Sniper",
			"SOCOMD_LAT",
			"SOCOMD_MAT",
			"SOCOMD_HAT"
		};
	};

	class SOCOMD_lbt_tl_coy : SOCOMD_lbt_tl { };
	class SOCOMD_lbt_tl_mc : SOCOMD_lbt_tl { };

	class SOCOMD_lbt_weapons {
		loadoutWhitelist[] = {
			"SOCOMD_Grenadier"
		};
	};

	class SOCOMD_lbt_weapons_coy : SOCOMD_lbt_weapons { };
	class SOCOMD_lbt_weapons_mc : SOCOMD_lbt_weapons { };

	class SOCOMD_lbt_medical {
		loadoutWhitelist[] = {
			"SOCOMD_Medic"
		};
	};

	class SOCOMD_lbt_medical_coy : SOCOMD_lbt_medical { };
	class SOCOMD_lbt_medical_mc : SOCOMD_lbt_medical { };
};