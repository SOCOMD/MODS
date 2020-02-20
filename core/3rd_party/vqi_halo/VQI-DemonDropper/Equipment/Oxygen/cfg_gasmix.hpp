//
//
class InventoryItem_Base_F;





// O2 DF Bottle
class VQI_BOTTLE_DF1_GAS : ItemCore
{
	displayName = "DF-1 Oxygen JumpBottle";
	descriptionShort = "Portable Oxygen Assembly<br/>100% O2, Jump/Pre-Breather<br/>Interface w/ Dragonfly";
	scope = 2;      
	scopeArsenal = 2;
	scopeCurator = 2;
	simulation = "ItemMineDetector";
	
	class ItemInfo : InventoryItem_Base_F
	{
		mass = 20;
		allowedSlots[] = {701};		// 7v/8u/9b
	}; 
	picture = "\vqi_halo\VQI-DemonDropper\Equipment\Oxygen\DF1\iconDF-1.paa";
	author = "Von Quest Industries";
};


///////////////////
/* NOTES: 



*/