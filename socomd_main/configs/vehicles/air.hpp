////////////////////////////////////////////////////////////////////////////////
// WARRIOR

class CUP_B_UH60M_US;
class SOCOMD_BLACKHAWK : CUP_B_UH60M_US
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD S-70 Armed Warrior";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	driverCanSee = CanSeeAll;
	hiddenSelectionsTextures[] = {"socomd_data\blackhawk\uh60m_fuselage_co.paa","socomd_data\blackhawk\uh60m_engine_co.paa","socomd_data\blackhawk\default_co.paa"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;
	
	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 16)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
	
};

class CUP_B_UH60M_FFV_US;
class SOCOMD_BLACKHAWK_FFV : CUP_B_UH60M_FFV_US
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD S-70 Armed FFV Warrior";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	driverCanSee = CanSeeAll;
	hiddenSelectionsTextures[] = {"socomd_data\blackhawk\uh60m_fuselage_co.paa","socomd_data\blackhawk\uh60m_engine_co.paa","socomd_data\blackhawk\default_co.paa"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;

	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 16)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
	
};

class CUP_Uh60_Unarmed_FFV_Base;
class CUP_B_UH60M_Unarmed_FFV_MEV_US : CUP_Uh60_Unarmed_FFV_Base
{
	class HitFuel;
	class HitHull;
	class HitEngine;
	class HitAvionics;
	class HitVRotor;
	class HitHRotor;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
};

class SOCOMD_BLACKHAWK_MEV : CUP_B_UH60M_Unarmed_FFV_MEV_US
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD S-70 Unarmed MEV Warrior";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	driverCanSee = CanSeeAll;
	hiddenSelectionsTextures[] = {"socomd_data\blackhawk\uh60mev_fuselage_co.paa","socomd_data\blackhawk\uh60mev_engine_co.paa","socomd_data\blackhawk\default_co.paa"};
	armor = 150;
	armorstructural = 180;

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;

	class HitFuel: HitFuel
	{
		visual = "";
		radius = 0.125;
		minimalhit = 0.2;
		explosionShielding = 0.5;
		passThrough = 0;
	};

	class HitHull: HitHull
	{
		armor = 25;
		visual = "zbytek";
		radius = 0.05;
	};

	class HitEngine: HitEngine
	{
		armor = 15;
		visual = "";
		radius = 0.15;
		explosionShielding = 0.5;
		minimalhit = 0.05;
		passThrough = 0.3;
	};

	class HitAvionics: HitAvionics
	{
		armor = 7;
		visual = "";
		radius = 0.05;
		explosionShielding = 0.5;
	};

	class HitVRotor: HitVRotor
	{
		visual = "tail rotor static";
		armor = 18;
		radius = 0.05;
		explosionShielding = 0.5;
	};

	class HitHRotor: HitHRotor
	{
		visual = "main rotor static";
		armor = 18;
		radius = 0.2;
		explosionShielding = 0.5;
	};

	class HitGlass1: HitGlass1
	{
		armor = 5;
		radius = 0.15;
		explosionShielding = 2;
	};

	class HitGlass2: HitGlass2
	{
		armor = 5;
		radius = 0.15;
		explosionShielding = 2;
	};

	class HitGlass3: HitGlass3
	{
		armor = 5;
		radius = 0.15;
		explosionShielding = 2;
	};

	class HitGlass4: HitGlass4
	{
		armor = 5;
		radius = 0.15;
		explosionShielding = 2;
	};

	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 16)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
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
	author = AUTHOR_STR;
	displayname = "SOCOMD CH-47 Nomad";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	hiddenSelectionsTextures[] = {"socomd_data\chinook\ch47_ext_1_co.paa","socomd_data\chinook\ch47_ext_2_co.paa","socomd_data\chinook\ch47f_nalepky_ca.paa"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;

	//INVENTORY		
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 30)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
	
};

class CUP_B_CH47F_VIV_USA;
class SOCOMD_CHINOOK_VIV : CUP_B_CH47F_VIV_USA
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD CH-47 Nomad VIV";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};
	hiddenSelectionsTextures[] = {"socomd_data\chinook\ch47_ext_1_co.paa","socomd_data\chinook\ch47_ext_2_co.paa","socomd_data\chinook\ch47f_nalepky_ca.paa"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;

	//INVENTORY		
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 30)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
	
};

////////////////////////////////////////////////////////////////////////////////
// HURRICANE

class SOCOMD_HURRICANE_AA : ffaa_famet_tigre_aa
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD ARH-Tiger Hurricane (AA)";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;
	
	//INVENTORY
	AirLoadout

	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
};


class SOCOMD_HURRICANE_AT : ffaa_famet_tigre_at //Ref from fixes.hpp
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD ARH-Tiger Hurricane (AT)";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;
	
	//INVENTORY
	AirLoadout

	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
};

class SOCOMD_HURRICANE_CAS : ffaa_famet_tigre_cas //Ref from fixes.hpp
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD ARH-Tiger Hurricane (CAS)";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;
	
	//INVENTORY
	AirLoadout

	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	}; 
};

////////////////////////////////////////////////////////////////////////////////
// FIREFLY

class SOCOMD_FIREFLY : MELB_MH6M
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD MH-6 Firefly";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;
	
	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 8)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

////////////////////////////////////////////////////////////////////////////////
// DRAGONFLY

class SOCOMD_DRAGONFLY_127 : MELB_AH6M_M
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD AH-6 Dragonfly (12.7mm)";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;

	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 2)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

class SOCOMD_DRAGONFLY_762 : MELB_AH6M_L
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD AH-6 Dragonfly (7.62mm)";
	faction = "SOCOMD_CMD";
	vehicleclass = "Air";
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.6;
	tf_range = 40000;
	
	//INVENTORY
	AirLoadout
	
	class TransportBackpacks 
	{
		TRANSPORT_BACKPACK(B_Parachute, 2)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};