class CfgLoadoutBackpacks
{
    class Backpack_Leader
    {
        loadoutWhitelist[] = { 
                "SASR_TroopLeader",
                "SASR_PatrolLeader",
				"SASR_Grenadier"
            };

    };
    
	class SOG_BAG_recon_MC : Backpack_Leader { };
    class SOG_BAG_recon_Tan : Backpack_Leader { };
	class Kit_Bag_R_MC : Backpack_Leader { };
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
				"SASR_Grenadier"
            };
    };
	
	class SOG_BAG_MC : Backpack_Operator { };
    class SOG_BAG_Tan : Backpack_Operator { };
	class Kit_Bag_MC : Backpack_Operator { };
	class Kit_Bag_Tan : Backpack_Operator { };
    

	class Backpack_Sapper
    {
        loadoutWhitelist[] = { 
                "SASR_Sapper"
            };

    };
    
	class Kit_Bag_pince_TAN : Backpack_Sapper { };
    class SOG_BAG_BREACHER_tan : Backpack_Sapper { };
	class Kit_Bag_pince_mc : Backpack_Sapper { };
    class SOG_BAG_BREACHER_MC : Backpack_Sapper { };
	
	
	class Backpack_Medic
    {
        loadoutWhitelist[] = { 
                "SASR_Medic"
            };

    };
    
	class SOG_BAG_med_tan : Backpack_Medic { };
    class SOG_BAG_med_MC : Backpack_Medic { };

};
