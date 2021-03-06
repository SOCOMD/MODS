//
//

class VQI_Helmet_HALO : ItemCore {
	displayName = "Hawkers 3H Ballistic Helmet";
	descriptionShort = "HALO/HAHO Headgear System<br/>HALO/HAHO Class II<br/>Interface w/ AIROX-Q Receiver";
	author = "R. Von Quest";
	scope = public;
	weaponPoolAvailable = 1;
	picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
	model = "A3\Characters_F\Common\headgear_helmet_heli_shield";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_blk_co.paa"};

	class ItemInfo : HeadgearItem {
		mass = 30;
		uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		modelSides[] = {3, 1};
		armor = 20;
		passThrough = 0.5;
		hiddenSelections[] = {"camo"};
	};
};


class H_Helmet_Skate;
class VQI_Helmet_Jump : H_Helmet_Skate {
	
	displayName = "Hawkers Jump Helmet";
	descriptionShort = "aka The Bucket<br/>HALO/HAHO Class I";
	author = "R. Von Quest";
	model = "\A3\Characters_F\Civil\C_Helmet_Skate_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\C_Helmet_Skate_co.paa"};
	
	class ItemInfo : HeadgearItem {
		mass = 10;
		uniformModel = "\A3\Characters_F\Civil\C_Helmet_Skate_F.p3d";
		modelSides[] = {3, 1};
		armor = 10;
		passThrough = 0.5;
		hiddenSelections[] = {"camo"};
	};
};


///////////////////
/* NOTES:



*/