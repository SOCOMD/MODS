class B_Kitbag_mcamo;

////////////////////////////////////////////////////////////////////////////////
// RADIO BACKPACKS
	
// class SOCOMD_LongRange_Radio: tf_rt1523g_big_bwmod
// {
// 	scope = public;
// 	displayName = "SOCOMD Long Range Radio";
// 	model = "\socomd_data\models\clf_nicecomm2";
// 	hiddenSelectionsTextures[] = {"socomd_data\models\data\radio_paas\clf_nicecomm2_co.paa"};
// 	maximumLoad = 400;
// 	mass = 20;

// 	tf_range = 200000;
// };

class SOCOMD_LongRange_Radio : B_Kitbag_mcamo
{
	scope = public;
	displayName = "SOCOMD PRC117F Radio Backpack";
	maximumLoad = 400;
	mass = 10;

	class TransportItems 
	{
		TRANSPORT_ITEM(ACRE_PRC117F, 1)
	};
};
	
////////////////////////////////////////////////////////////////////////////////
// BASE BACKPACKS

class SOCOMD_Backpack_Empty: B_Kitbag_mcamo
{
	scope = public;
	displayName = "SOCOMD Kitbag";
	maximumLoad = 400;
	mass = 10;
};

class SOCOMD_Backpack: B_Kitbag_mcamo
{
	scope = 1;
	displayName = "SOCOMD Kitbag";
	maximumLoad = 400;
	mass = 10;

	class TransportItems
	{
		TI_DefaultCommon
		TI_DefaultMeds
	};
};

class SOCOMD_Backpack_Black: B_Kitbag_mcamo
{
	scope = 1;
	displayName = "SOCOMD Kitbag Black";
	maximumLoad = 400;
	mass = 10;
};

////////////////////////////////////////////////////////////////////////////////
// SECTION BACKPACKS

/*class SOCOMD_Gunner_Backpack: B_Kitbag_mcamo
{
	scope = private;
	displayName = "SOCOMD Kitbag";
	maximumLoad = 400;
	mass = 20;

	class TransportMagazines
	{
		TM_GunnerAmmo
	};
};*/

/*class SOCOMD_Medic_Backpack: B_Kitbag_mcamo
{
	scope = public;
	displayName = "SOCOMD Medic Kitbag";
	maximumLoad = 400;
	mass = 20;

	class TransportItems
	{
		TI_DefaultCommon
		TI_MedicMeds
	};
};*/

class SOCOMD_Sapper_Backpack: B_Kitbag_mcamo
{
	scope = protected;
	displayName = "SOCOMD Sapper Kitbag";
	maximumLoad = 400;
	mass = 10;

	class TransportItems
	{
		TI_SapperItems
	};
};

////////////////////////////////////////////////////////////////////////////////
// ATTACHMENT BACKPACKS
	
class SOCOMD_Sniper_Backpack: B_Kitbag_mcamo
{
	scope = protected;
	displayName = "SOCOMD Sniper Kitbag";
	maximumLoad = 400;
	mass = 10;

	class TransportMagazines
	{
		TM_SniperAmmo
	};
};

class SOCOMD_Weapons_Backpack: B_Kitbag_mcamo
{
	scope = protected;
	displayName = "SOCOMD Weapons Team Kitbag";
	maximumLoad = 400;
	mass = 10;

	class TransportItems
	{
		TRANSPORT_ITEM(ACE_personalAidKit, 1)	
	};
};



