class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
	class socomd_defib_AED: ACE_ItemCore {
        scope = 2;
		author = "Katalam";
        displayName = "AED";
        picture = "\z\socomd\addons\data\icon\AED.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = "Automated external defibrillator";
        descriptionUse = "Automated external defibrillator";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
	};
};
