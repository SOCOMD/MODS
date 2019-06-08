class CfgLoadoutVests {
	class lbt_comms {
		loadoutWhitelist[] = {
			"SOCOND_Commander",
			"SOCOND_Leader",
			"SOCOND_2IC"
		};
	};

	class lbt_comms_coy : lbt_comms { };
	class lbt_comms_mc : lbt_comms { };

	class lbt_tl {
		loadoutWhitelist[] = {
			"SOCOND_Rifleman",
			"SOCOND_Sniper",
			"SOCOMD_Marksman"
			"SOCOND_Sapper",
			"SOCOND_Recon",
			"SOCOND_AT"
		};
	};

	class lbt_tl_coy : lbt_tl { };
	class lbt_tl_mc : lbt_tl { };

	class lbt_weapons {
		loadoutWhitelist[] = {
			"SOCOND_Leader"
		};
	};

	class lbt_weapons_coy : lbt_weapons { };
	class lbt_weapons_mc : lbt_weapons { };

	class lbt_medical {
		loadoutWhitelist[] = {
			"SOCOND_Medic"
		};
	};

	class lbt_medical_coy : lbt_medical { };
	class lbt_medical_mc : lbt_medical { };
};