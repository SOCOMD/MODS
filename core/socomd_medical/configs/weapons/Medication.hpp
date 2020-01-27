
class ACE_Atropine;
class ACE_Morphine : ACE_ItemCore {
	scope=public;
	displayName="Morphine 10mg/1mL";
	picture="\socomd_data_core\icon\morphine.paa";
	descriptionShort="Analgesic, used for moderate pain";
	descriptionUse="Analgesic, used for moderate pain";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class ACE_Epinephrine : ACE_ItemCore {
	scope=public;
	displayName="Epinephrine 1mg/1mL Ampoule";
	picture="\socomd_data_core\icon\epi.paa";
	descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_Naloxone : ACE_Atropine {
	scope=public;
	displayName="Naloxone 1.6mg/4mL Ampoule";
	picture="\socomd_data_core\icon\naloxone.paa";
	descriptionShort="Opiod antagonist, reverses negative effects of narcotics";
	descriptionUse="Opiod antagonist, reverses negative effects of narcotics";
};

class SOCOMD_Fentanyl : ACE_Morphine {
	scope=public;
	displayName="Fentanyl 100mcg/2mL Ampoule";
	picture="\socomd_data_core\icon\fentanyl.paa";
	descriptionShort="Analgesic, used for severe pain";
	descriptionUse="Analgesic, used for severe pain";
};

class SOCOMD_Ketamine_6mg : ACE_Morphine {
	scope=public;
	displayName="Ketamine 6mg/2mL Ampoule";
	descriptionShort="Analgesic used for severe pain";
	descriptionUse="Analgesic used for severe pain";
	picture="\socomd_data_core\icon\ket.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_Ketamine_200mg : ACE_Morphine {
	scope=2;
	displayName="Ketamine 200mg/2mL Ampoule";
	descriptionShort="Analgesic used for severe pain and sedation";
	descriptionUse="Analgesic used for severe pain and sedation";
	picture="\socomd_data_core\icon\ket.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_Tetra : ACE_Morphine {
	scope=public;
	displayName="Tetracycline 250mg capsule";
	descriptionShort="Antibiotic capsule";
	descriptionUse="Antibiotic capsule";
	picture="\socomd_data_core\icon\tetra.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_Apap : ACE_Morphine {
	scope=public;
	displayName="Paracetemol 1g Tablets";
	picture="\socomd_data_core\icon\apap.paa";
	model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
	descriptionShort="Analgesic/Antipyretic, used for light pain and fever";
	descriptionUse="Analgesic/Antipyretic, used for light pain and fever";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.5;
	};
};

class SOCOMD_VPN : ACE_ItemCore {
	scope=public;
	displayName="3mL Drug Syringe";
	descriptionShort="For administering drugs";
	descriptionUse="For administering drugs";
	picture="\socomd_data_core\icon\VPN.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};