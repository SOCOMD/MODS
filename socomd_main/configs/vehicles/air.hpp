////////////////////////////////////////////////////////////////////////////////
// WARRIOR

class CUP_B_UH60M_US;
class SOCOMD_BLACKHAWK : CUP_B_UH60M_US
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD S-70 Armed Warrior";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	driverCanSee = CanSeeAll;
	hiddenSelectionsTextures[] = {"socomd_data\blackhawk\uh60m_fuselage_co.paa","socomd_data\blackhawk\uh60m_engine_co.paa","socomd_data\blackhawk\default_co.paa"};

	//INVENTORY
	AirLoadout;
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 16);
	}; 
	
};

class CUP_B_UH60M_FFV_US;
class SOCOMD_BLACKHAWK_FFV : CUP_B_UH60M_FFV_US
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD S-70 Armed FFV Warrior";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	driverCanSee = CanSeeAll;
	hiddenSelectionsTextures[] = {"socomd_data\blackhawk\uh60m_fuselage_co.paa","socomd_data\blackhawk\uh60m_engine_co.paa","socomd_data\blackhawk\default_co.paa"};

	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 16);
	}; 
	
};

class CUP_B_UH60M_Unarmed_FFV_MEV_US;
class SOCOMD_BLACKHAWK_MEV : CUP_B_UH60M_Unarmed_FFV_MEV_US
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD S-70 Unarmed MEV Warrior";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	driverCanSee = CanSeeAll;
	hiddenSelectionsTextures[] = {"socomd_data\blackhawk\uh60mev_fuselage_co.paa","socomd_data\blackhawk\uh60mev_engine_co.paa","socomd_data\blackhawk\default_co.paa"};

	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 16);
	}; 
	
};

////////////////////////////////////////////////////////////////////////////////
// NOMAD

class CUP_B_CH47F_USA;
class SOCOMD_CHINOOK : CUP_B_CH47F_USA
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD CH-47 Nomad";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	hiddenSelectionsTextures[] = {"socomd_data\chinook\ch47_ext_1_co.paa","socomd_data\chinook\ch47_ext_2_co.paa","socomd_data\chinook\ch47f_nalepky_ca.paa"};

	//INVENTORY		
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 30);
	}; 
	
};

class CUP_B_CH47F_VIV_USA;
class SOCOMD_CHINOOK_VIV : CUP_B_CH47F_VIV_USA
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD CH-47 Nomad VIV";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	hiddenSelectionsTextures[] = {"socomd_data\chinook\ch47_ext_1_co.paa","socomd_data\chinook\ch47_ext_2_co.paa","socomd_data\chinook\ch47f_nalepky_ca.paa"};

	//INVENTORY		
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 30);
	}; 
	
};

////////////////////////////////////////////////////////////////////////////////
// HURRICANE

class SOCOMD_HURRICANE_AA : ffaa_famet_tigre_aa
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD ARH-Tiger Hurricane (AA)";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	
	//INVENTORY
	AirLoadout;
};


class SOCOMD_HURRICANE_AT : ffaa_famet_tigre_at //Ref from fixes.hpp
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD ARH-Tiger Hurricane (AT)";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	
	//INVENTORY
	AirLoadout;
};

class SOCOMD_HURRICANE_CAS : ffaa_famet_tigre_cas //Ref from fixes.hpp
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD ARH-Tiger Hurricane (CAS)";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	
	//INVENTORY
	AirLoadout;
};

////////////////////////////////////////////////////////////////////////////////
// FIREFLY

class SOCOMD_FIREFLY : MELB_MH6M
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD MH-6 Firefly";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	
	//INVENTORY
	AirLoadout;
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 8);
	};
};

////////////////////////////////////////////////////////////////////////////////
// DRAGONFLY

class SOCOMD_DRAGONFLY_127 : MELB_AH6M_M
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD AH-6 Dragonfly (12.7mm)";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	//INVENTORY
	AirLoadout;
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 2);
	};
};

class SOCOMD_DRAGONFLY_762 : MELB_AH6M_L
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD AH-6 Dragonfly (7.62mm)";
	faction = "SOCOMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	
	//INVENTORY
	AirLoadout;
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 2);
	};
};