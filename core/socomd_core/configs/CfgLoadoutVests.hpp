class CfgLoadoutVests {
	class lbt_comms {
		loadoutWhitelist[] = {
			"Commander",
			"Leader"
		};
	};

	class lbt_comms_coy : lbt_comms { };
	class lbt_comms_mc : lbt_comms { };

	class lbt_tl {
		loadoutWhitelist[] = {
			"Rifleman",
			"Sniper",
			"Sapper",
			"Recon",
			"AT"
		};
	};

	class lbt_tl_coy : lbt_tl { };
	class lbt_tl_mc : lbt_tl { };

	class lbt_weapons {
		loadoutWhitelist[] = {
			"Leader"
		};
	};

	class lbt_weapons_coy : lbt_weapons { };
	class lbt_weapons_mc : lbt_weapons { };

	class lbt_medical {
		loadoutWhitelist[] = {
			"Medic"
		};
	};

	class lbt_medical_coy : lbt_medical { };
	class lbt_medical_mc : lbt_medical { };
};