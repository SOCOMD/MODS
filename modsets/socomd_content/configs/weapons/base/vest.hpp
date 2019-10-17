class VestItem;
class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
class CUP_V_B_LBT_LBV_MCam;
class SOCOMD_RUS_Vest: CUP_V_B_LBT_LBV_MCam
	{
		scope=2;
		displayName="Russian Special Forces Vest";
		author="Monk";
		descriptionShort="Vest used by Russian SF";
		class ItemInfo: VestItem
		{
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
