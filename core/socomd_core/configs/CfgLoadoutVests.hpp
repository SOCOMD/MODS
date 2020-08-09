class CfgLoadoutVests {
	class lbt_comms {
		loadoutWhitelist[] = {
			"SOCOMD_Commander",
			"SOCOMD_Leader",
			"SOCOMD_MachineGunner",
			"SOCOMD_2IC"
		};
	};

	class lbt_comms_coy : lbt_comms { };
	class lbt_comms_mc : lbt_comms { };
	class lbt_comms_amcu : lbt_comms { };

	class lbt_tl {
		loadoutWhitelist[] = {
			"SOCOMD_Rifleman",
			"SOCOMD_Breacher",
			"SOCOMD_Marksman",
			"SOCOMD_Sapper",
			"SOCOMD_Recon",
			"SOCOMD_Recon_Assistant",
			"SOCOMD_AT",
			"SOCOMD_AT_Assistant",
			"SOCOMD_Pilot",
			"SOCOMD_Crewman",
			"SOCOMD_Logistician"
		};
	};

	class lbt_tl_coy : lbt_tl { };
	class lbt_tl_mc : lbt_tl { };
	class lbt_tl_amcu : lbt_tl { };

	class lbt_weapons {
		loadoutWhitelist[] = {
			"SOCOMD_Leader"
		};
	};

	class lbt_weapons_coy : lbt_weapons { };
	class lbt_weapons_mc : lbt_weapons { };
	class lbt_weapons_amcu : lbt_weapons { };

	class lbt_medical {
		loadoutWhitelist[] = {
			"SOCOMD_Medic"
		};
	};

	class lbt_medical_coy : lbt_medical { };
	class lbt_medical_mc : lbt_medical { };
	class lbt_medical_amcu : lbt_medical { };
};