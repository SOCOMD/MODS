
class SOCOMD_Defibrillator : ACE_ItemCore {
	scope = public;
	picture ="\socomd_data_core\icon\AED.paa";
	model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
	displayName = "Defibrillator";
	descriptionShort = "Restore heart rate";
	descriptionUse = "Restore heart rate";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 30;
	};
};