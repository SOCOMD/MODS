class I_C_Boat_Transport_02_F;
class SOCOMD_ASSAULT_BOAT : I_C_Boat_Transport_02_F
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD Unarmed RHIB";
	faction = "SOCOMD";
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class CUP_B_RHIB_USMC;
class SOCOMD_GUNBOAT : CUP_B_RHIB_USMC
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD Armed RHIB";
	faction = "SOCOMD";
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class SOCOMD_ASSAULT_BOAT_S : B_Boat_Transport_01_F
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = "SOCOMD Mod";
	displayname = "SOCOMD Small Assault Boat";
	faction = "SOCOMD";
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};