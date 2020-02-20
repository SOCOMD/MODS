// Long-Range Support Radio (10km range?)
//
class InventoryItem_Base_F;
class ItemCore;




// Gypsy Radio
class VQI_Radio_LRSR_Gypsy : ItemCore
{
	displayName = "Gypsy9.11 LRSR";
	descriptionShort = "Long Range Support Radio<br/>- Class IV Encyption, Wideband<br/>- Multi-Channel Manpack<br/>- RF-911H TIER 1 Crypto<br/>- Harris Gypsy SOCOM Series";
	scope = 2;      
	scopeArsenal = 2;
	scopeCurator = 2;
	simulation = "ItemMineDetector";
	
	class ItemInfo : InventoryItem_Base_F
	{
		mass = 70;	// Heavy, Bulky
		allowedSlots[] = {901};		// 7v/8u/9b
	}; 
	picture = "\vqi_core\VQI-StartingOptions\Support\SupportRadio\iconGYPSY.paa";
	author = "Von Quest Industries";
};





///////////////////////////////////////////////
// temp - test
class ItemGPS;

class VQI_CombatTablet : ItemGPS	// ItemCore
{
	displayName = "XSlate 10'' Combat Tablet";
	descriptionShort = "10-inch XI10 B.M.S<br/>SATTAB/RF DataLinks v2.0<br/>3hr Battery Life, Waterproof<br/>NATO Crypto-Q Certified";
	scope = 2;      
	scopeArsenal = 2;
	scopeCurator = 2;
	//simulation = "ItemMineDetector";
	//subItems[] = {"ItemRadio"};
	
	class ItemInfo //: InventoryItem_Base_F
		{
			mass = 5;
			allowedSlots[] = {901};		// 7v/8u/9b
		}; 
	//editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_Tablet_02_black_F.jpg";
	picture = "\vqi_core\VQI-StartingOptions\Support\SupportRadio\iconTABLET.paa";
	model = "\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
	author = "Von Quest Industries";
};

///////////////////
/* NOTES:


	class ItemMap;			// SLOT-1:	Docs, Paper, KeyCards, etc							[map]					ie: Logbook, Codebook,
	class ItemGPS;			// SLOT-2:	Equipment, Electronics, etc							[terminal]				ie: IMS, Tablet,
	class ItemRadio;		// SLOT-3:	COMs, Radios, Signals, etc							[communicaiton]			ie: Data Cable,
	class ItemCompass;		// SLOT-4:	Gear, Gadgets, Tools, etc	(quick key; compass)	[navigation]			ie: Questrel, EW,
	class ItemWatch;		// SLOT-5:	Wearables, Altimeters, etc	(quick key; watch)		[watch]					ie: Dive Watch, Altimeter,
*/