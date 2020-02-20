class CfgPatches 
{
	class VQI_HALO_Gear
	{
		units[] = {"VQI_HALO_Gear"};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};


class CfgVehicleClasses {
	class Von_Quest_Industries {
		displayname = "VQI Crates";
	};
};



class CfgVehicles
{
	class B_supplyCrate_F;
	class VQI_HALO_Crate: B_supplyCrate_F
	{
		scope = 2;
		vehicleClass = "Von_Quest_Industries";
		displayName = "ParaJump Equipment";
		//model = "\A3\weapons_F\AmmoBoxes\SupplyDrop";
		icon = "iconCrateWpns";
		class TransportMagazines{};
		class TransportWeapons{};
		
		class TransportItems
		{
			class _xx_VQI_JumpBuddy_1
			{
				name = "VQI_JumpBuddy_1";
				count = 4;
			};
			class _xx_VQI_Vest_Dragonfly
			{
				name = "VQI_Vest_Dragonfly";
				count = 4;
			};
			class _xx_VQI_Helmet_HALO
			{
				name = "VQI_Helmet_HALO";
				count = 4;
			};
			class _xx_VQI_Jumpsuit_Icarus
			{
				name = "VQI_Jumpsuit_Icarus";
				count = 4;
			};
			class _xx_U_B_Wetsuit
			{
				name = "U_B_Wetsuit";
				count = 4;
			};
			class _xx_G_Diving
			{
				name = "G_Diving";
				count = 4;
			};
			class _xx_G_Balaclava_blk
			{
				name = "G_Balaclava_blk";
				count = 4;
			};
			
			class _xx_VQI_AR3
			{
				name = "VQI_AR3";
				count = 4;
			};
			class _xx_VQI_ASTRA
			{
				name = "VQI_ASTRA";
				count = 4;
			};
			class _xx_VQI_BOTTLE_DF1_GAS
			{
				name = "VQI_BOTTLE_DF1_GAS";
				count = 4;
			};
			class _xx_VQI_ReserveChute
			{
				name = "VQI_ReserveChute";
				count = 4;
			};
			class _xx_VQI_Sentinel
			{
				name = "VQI_Sentinel";
				count = 4;
			};		
			
		};
		
		class TransportBackpacks 
		{
			class _xx_B_Carryall_mcamo {
				backpack = "B_Carryall_khk";
				count = 4;
			};
		};
	};
};

//