//////////////////////////////////////////////////////////////////////
// MISC

class CarHorn;
class Bicycle_Horn : CarHorn {
	cursor = "";
	cursorAim = "";
	scope = public;
	displayName = "Horn";
	reloadTime = 0;
	drySound[] = {"socomd_data\sounds\bicycle_horn",1,1,100};
	canLock = 0;
	optics = 0;
	enableAttack = 0;
};

class ACRE_BaseRadio;
class CBA_MiscItem_ItemInfo;
class ACRE_PRC117F: ACRE_BaseRadio {
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=120; // 120 Default
		allowedSlots[]={701,901}; // 701 = vest, 801 = uniform, 901 = backpack
	};
};