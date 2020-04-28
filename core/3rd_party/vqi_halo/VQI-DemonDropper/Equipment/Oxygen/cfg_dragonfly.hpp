// Dragonfly Rebreather Rig
//

class VQI_Vest_Dragonfly_GAS : Vest_Camo_Base {
	displayName = "Dragonfly Rebreather Rig";
	descriptionShort = "HALO/UBA 2-1 Semi/Closed System<br/>2.66kg Divesorb Pro, 0-10m : 1h<br/>Integrated NITROX Bailout Regulator";
	author = "R. Von Quest";
	scope = 1;

	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
	model = "\A3\Characters_F\Common\equip_rebreather";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\rebreather_dragonfly.paa", "\A3\characters_f\data\visors_ca.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	hiddenUnderwaterSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\rebreather_dragonfly.paa", "\A3\characters_f\data\visors_ca.paa"};

	class ItemInfo: ItemInfo {
		uniformModel = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenSelections[] = {"camo"};
		vestType = "Rebreather";
		containerClass = "Supply20";
		mass = 100;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; 	// reference to the hit point class defined in the man base class
				armor			= 0; 			// addition to armor of referenced hitpoint
				passThrough		= 1; 			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 0;
				passThrough		= 1;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor			= 24; 
				passThrough		= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 24;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor			= 24;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough		= 0.1;
			};
		};
	};
};





class VQI_Vest_Dragonfly_OFF : Vest_Camo_Base {
	displayName = "Dragonfly Rebreather Rig";
	descriptionShort = "HALO/UBA 2-1 Semi/Closed System<br/>2.66kg Divesorb Pro, 0-10m : 1h<br/>Integrated NITROX Bailout Regulator";
	author = "R. Von Quest";
	scope = 1;

	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
	model = "\A3\Characters_F\Common\equip_rebreather";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\rebreather_dragonfly.paa", "\A3\characters_f\data\visors_ca.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	hiddenUnderwaterSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\rebreather_dragonfly.paa", "\A3\characters_f\data\visors_ca.paa"};

	class ItemInfo: ItemInfo {
		uniformModel = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenSelections[] = {"camo"};
		//vestType = "Rebreather";
		containerClass = "Supply20";
		mass = 100;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; 	// reference to the hit point class defined in the man base class
				armor			= 0; 			// addition to armor of referenced hitpoint
				passThrough		= 1; 			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 0;
				passThrough		= 1;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor			= 24; 
				passThrough		= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 24;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor			= 24;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough		= 0.1;
			};
		};
	};
};



class VQI_Vest_Dragonfly : Vest_Camo_Base {
	displayName = "Dragonfly Rebreather Rig";
	descriptionShort = "HALO/UBA 2-1 Semi/Closed System<br/>2.66kg Divesorb Pro, 0-10m : 1h<br/>Integrated NITROX Bailout Regulator";
	author = "R. Von Quest";
	scope = 2;

	picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
	model = "\A3\Characters_F\Common\equip_rebreather";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\rebreather_dragonfly.paa", "\A3\characters_f\data\visors_ca.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	hiddenUnderwaterSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\rebreather_dragonfly.paa", "\A3\characters_f\data\visors_ca.paa"};

	class ItemInfo: ItemInfo {
		uniformModel = "\A3\Characters_F\Common\equip_rebreather";
		//hiddenSelections[] = {"camo"};
		//vestType = "Rebreather";
		containerClass = "Supply20";
		mass = 100;
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; 	// reference to the hit point class defined in the man base class
				armor			= 0; 			// addition to armor of referenced hitpoint
				passThrough		= 1; 			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 0;
				passThrough		= 1;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor			= 24; 
				passThrough		= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 24;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor			= 24;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough		= 0.1;
			};
		};
	};
};


//////////////////
/* NOTES:



*/