class VestItem;
class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
class V_PlateCarrier1_rgr;
class CUP_V_B_LBT_LBV_MCam;
class CUP_V_B_Armatus_BB_MCam;
class SOCOMD_SSO_Vest_light: CUP_V_B_Armatus_BB_MCam
	{
		scope=2;
		displayName="Russian Special Forces Vest";
		author="Monk";
		descriptionShort="Vest used by Russian SF";
		class ItemInfo: VestItem
		{
			containerClass="Supply150";
			mass=20;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_LBTPlate_Operator.p3d";
			hiddenSelections[] = {"camo","camo1","camo2","camo4","camo5","camo6","_ButtPouch"};
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
class SOCOMD_SSO_Vest: CUP_V_B_LBT_LBV_MCam
	{
		scope=2;
		displayName="Russian Special Forces Vest";
		author="Monk";
		descriptionShort="Vest used by Russian SF";
		class ItemInfo: VestItem
		{
			containerClass="Supply150";
			mass=20;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_LBTPlate.p3d";
			hiddenSelections[] = {"camo","camo2","insignia"};
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
class vss_06_MC: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};

class vss_06_RG: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_MC: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_RG: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_MC: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_RG: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_MC: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_RG: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_MC: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_RG: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_MC: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_RG: V_PlateCarrier1_rgr {
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_BF: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_BLK: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_M81: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_MCA: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_MCTP: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_01_WG: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_BF: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_BLK: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_M81: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_MCA: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_MCTP: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_02_WG: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_BF: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_BLK: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_M81: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_MCA: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_MCTP: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_03_WG: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_BF: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_BLK: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_M81: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_MCA: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_MCTP: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_04_WG: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_BF: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_BLK: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_M81: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_MCA: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_MCTP: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_05_WG: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_06_BF: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_06_BLK: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_06_M81: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_06_MCA: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_06_MCTP: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};
class vss_06_WG: V_PlateCarrier1_rgr{
	class ItemInfo:VestItem{
		mass = 2;
		containerClass = "Supply170";
		class HitpointsProtectionInfo{
			class Chest{
				HitpointName="HitChest";
				armor=0;
				passThrough=1;
			};
			class Diaphragm{
				HitpointName="HitDiaphragm";
				armor=0;
				passThrough=1;
			};
			class Abdomen{
				hitpointName="HitAbdomen";
				armor=0;
				passThrough=1;
			};
			class Body {
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		};
	};
};