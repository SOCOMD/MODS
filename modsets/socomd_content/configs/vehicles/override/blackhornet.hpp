class B_UAV_01_F;
class tut_R22: B_UAV_01_F
{
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Drones;
	faction = FACTION_STR;
	vehicleclass = "Drones";
	crew="B_UAV_AI";
	side=1;
	scope=2;
	author="Aran Anderson";
	authorUrl="http://arananderson.com";
	_generalMacro="B_UAV_01_F";
	camouflage = 0.0001;
	displayname="Black Hornet Nano UAV";
	model="\Black_Hornet_Nano_UAV\r22.p3d";
	mainRotorSpeed=-7;
	backRotorSpeed=7;
	minMainRotorDive=-7;
	maxMainRotorDive=70;
	neutralMainRotorDive=0;
	minBackRotorDive=0;
	maxBackRotorDive=0;
	neutralBackRotorDive=0;
	fuelCapacity=70;
	fuelConsumptionRate="0.50f";
	maxSpeed=70;
	liftForceCoef=1;
	backRotorForceCoef=5;
	cyclicAsideForceCoef=0.60000002;
	cyclicForwardForceCoef=0.30000001;
	enableGPS=1;
	extCameraPosition[]={0,0.25,-0.69999999};
	icon="\Black_Hornet_Nano_UAV\icon.paa";
	hiddenselectionstextures[]=
	{
		"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
	};
	class Library
	{
		libTextDesc="TODO";
	};
	class assembleInfo
	{
		primary=1;
		base="";
		assembleTo="";
		displayName="";
		dissasembleTo[]=
		{
			""
		};
	};
	class ACE_Actions {
		class ACE_Nano_UAV
		{
		displayName = "MicroUAV";
		icon="\Black_Hornet_Nano_UAV\icon.paa";
		distance = 2;
		selection = "mem01";
			class NanoUAV_Pickup {
			displayName = "Disassemble MicroUAV";
			condition = "true";
			exceptions[] = {};
			statement = "_storePos = getPosATL _target; deleteVehicle _target; [_storePos] call SOCOMD_fnc_UAV;";
			icon="\Black_Hornet_Nano_UAV\icon.paa";
			};
		};
	};
};

class Nano_UAV_ITEM_Ground: Item_Base_F
{
	scope=2;
	scopeCurator=2;
	displayName="Nano UAV";
	author="Monk1junk1";
	icon="\Black_Hornet_Nano_UAV\icon.paa";
	model="\Black_Hornet_Nano_UAV\r22.p3d";
	vehicleClass="Items";
	class TransportItems
	{
		class _xx_Nano_UAV_ITEM
		{
			name="Nano_UAV_ITEM";
			count=1;
		};
	};
};