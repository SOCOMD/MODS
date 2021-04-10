
class ACE_atropine;
class ACE_morphine : ACE_ItemCore {
	scope=public;
	displayName="Morphine 10mg/1mL";
	picture="\socomd_data_core\icon\morphine.paa";
	descriptionShort="Analgesic, used for moderate pain";
	descriptionUse="Analgesic, used for moderate pain";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class ACE_epinephrine : ACE_ItemCore {
	scope=public;
	displayName="Adrenaline 1mg/1mL Ampoule";
	picture="\socomd_data_core\icon\epi.paa";
	descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_naloxone : ACE_atropine {
	scope=public;
	displayName="Naloxone Hydrochloride Dihydrate 1.6mg/4mL Ampoule";
	picture="\socomd_data_core\icon\naloxone.paa";
	descriptionShort="Opiod antagonist, reverses negative effects of narcotics";
	descriptionUse="Opiod antagonist, reverses negative effects of narcotics";
};

class SOCOMD_fentanyl : ACE_morphine {
	scope=public;
	displayName="Fentanyl 100mcg/2mL Ampoule";
	picture="\socomd_data_core\icon\fentanyl.paa";
	descriptionShort="Analgesic, used for severe pain";
	descriptionUse="Analgesic, used for severe pain";
};

class SOCOMD_ketamine_6mg : ACE_morphine {
	scope=public;
	displayName="Ketamine Hydrochloride 200mg/2mL Ampoule";
	descriptionShort="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes hypertension and tachtcardia.";
	descriptionUse="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes hypertension and tachtcardia.";
	picture="\socomd_data_core\icon\ket.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_tetra : ACE_morphine {
	scope=public;
	displayName="Tetracycline 250mg capsule";
	descriptionShort="Antibiotic capsule";
	descriptionUse="Antibiotic capsule";
	picture="\socomd_data_core\icon\tetra.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_paracetamol: ACE_morphine {
	author="Monk";
	displayName="Paracetemol 2x500mg Tablets";
	picture="\socomd_data_core\icon\apap.paa";
	model="\A3\Structures_F_EPA\Items\Medical\PainKillers_F.p3d";
	descriptionShort="Analgesic/Antipyretic, used for light pain and fever";
	descriptionUse="Analgesic/Antipyretic, used for light pain and fever";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.5;
	};
};

