class VestItem;
class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
class Russian_SSO_Vest: Vest_Camo_Base
	{
		scope=2;
		displayName="Russian SSO Vest";
		author="Monk";
		model="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		descriptionShort="Vest used by Russian SF";
		hiddenSelections[]=
		{
			"Camo",
			"Insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\Russian\RUS_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass="Supply150";
			mass=20;
			hiddenSelections[]=
			{
				"Camo",
				"Insignia"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=40;
					PassThrough=0.1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=40;
					PassThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
