class CfgLoadoutBackpacks
{
    class Backpack_Leader
    {
        loadoutWhitelist[] = { 
                "SASR_TroopLeader",
                "SASR_PatrolLeader",
				"SASR_Grenadier",
				"SASR_TroopLeader_Old",
                "SASR_PatrolLeader_Old",
				"SASR_Grenadier_Old",
				"SASR_TroopLeader_Jngl",
                "SASR_PatrolLeader_Jngl",
				"SASR_Grenadier_Jngl"
            };

    };
    
	class SOG_BAG_recon_MC : Backpack_Leader { };
    class SOG_BAG_recon_Tan : Backpack_Leader { };
	class Kit_Bag_R_MC : Backpack_Leader { };
	class SOG_BAG_recon_od : Backpack_Leader { };
	class Kit_Bag_R_od : Backpack_Leader { };
	class Kit_Bag_R_Tan : Backpack_Leader { };
	
	class Backpack_Operator
    {
        loadoutWhitelist[] = { 
                "SASR_LAT",
                "SASR_MAT",
                "SASR_HAT",
				"SASR_Marksman",
				"SASR_Sniper",
				"SASR_Rifleman",
				"SASR_MachineGunner",
				"SASR_Medic",
				"SASR_TroopLeader",
                "SASR_PatrolLeader",
				"SASR_Grenadier",
				"SASR_LAT_Old",
                "SASR_MAT_Old",
                "SASR_HAT_Old",
				"SASR_Marksman_Old",
				"SASR_Sniper_Old",
				"SASR_Rifleman_Old",
				"SASR_MachineGunner_Old",
				"SASR_Medic_Old",
				"SASR_TroopLeader_Old",
                "SASR_PatrolLeader_Old",
				"SASR_Grenadier_Old",
				"SASR_LAT_Jngl",
                "SASR_MAT_Jngl",
                "SASR_HAT_Jngl",
				"SASR_Marksman_Jngl",
				"SASR_Sniper_Jngl",
				"SASR_Rifleman_Jngl",
				"SASR_MachineGunner_Jngl",
				"SASR_Medic_Jngl",
				"SASR_TroopLeader_Jngl",
                "SASR_PatrolLeader_Jngl",
				"SASR_Grenadier_Jngl"
            };
    };
	
	class SOG_BAG_MC : Backpack_Operator { };
    class SOG_BAG_Tan : Backpack_Operator { };
	class Kit_Bag_MC : Backpack_Operator { };
	class Kit_Bag_Tan : Backpack_Operator { };
	class SOG_BAG_od : Backpack_Operator { };
	class Kit_Bag_od : Backpack_Operator { };
    

	class Backpack_Sapper
    {
        loadoutWhitelist[] = { 
                "SASR_Sapper",
				"SASR_Sapper_Jngl",
				"SASR_Sapper_Old"
            };

    };
    
	class Kit_Bag_pince_TAN : Backpack_Sapper { };
    class SOG_BAG_BREACHER_tan : Backpack_Sapper { };
	class Kit_Bag_pince_mc : Backpack_Sapper { };
    class SOG_BAG_BREACHER_MC : Backpack_Sapper { };
	class Kit_Bag_pince_od : Backpack_Sapper { };
    class SOG_BAG_BREACHER_od : Backpack_Sapper { };
	
	
	class Backpack_Medic
    {
        loadoutWhitelist[] = { 
                "SASR_Medic",
				"SASR_Medic_Jngl",
				"SASR_Medic_Old"
            };

    };
    
	class SOG_BAG_med_tan : Backpack_Medic { };
    class SOG_BAG_med_MC : Backpack_Medic { };
	class SOG_BAG_med_od : Backpack_Medic { };

};
