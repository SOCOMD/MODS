
class ACE_atropine;
class ACE_morphine : ACE_ItemCore {
	scope=public;
	displayName="Morphine autoinjector 10mg/1mL";
	descriptionShort="Analgesic, used for moderate pain";
	descriptionUse="Analgesic, used for moderate pain";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 1;
	};
};

class ACE_epinephrine : ACE_ItemCore {
	scope=public;
	displayName="Adrenaline autoinjector 1mg/1mL";
	descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 1;
	};
};

////////////////////////////////////////////////////////////////////////////////

class SOCOMD_morphine : ACE_ItemCore {
	scope=public;
	displayName="Morphine 10mg/1mL Ampoule";
	picture="\socomd_medical\tex\morphine";
	descriptionShort="Analgesic, used for moderate pain";
	descriptionUse="Analgesic, used for moderate pain";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_epinephrine : ACE_ItemCore {
	scope=public;
	displayName="Adrenaline 1mg/1mL Ampoule";
	picture="\socomd_medical\tex\epi";
	descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};
class SOCOMD_naloxone : ACE_atropine {
	scope=public;
	displayName="Naloxone Hydrochloride Dihydrate 1.6mg/4mL Ampoule";
	picture="\socomd_medical\tex\naloxone";
	descriptionShort="Opiod antagonist, reverses negative effects of narcotics";
	descriptionUse="Opiod antagonist, reverses negative effects of narcotics";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_fentanyl : ACE_morphine {
	scope=public;
	displayName="Fentanyl 100mcg/2mL Ampoule";
	picture="\socomd_medical\tex\fentanyl";
	descriptionShort="Analgesic, used for severe pain";
	descriptionUse="Analgesic, used for severe pain";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_ketamine : ACE_morphine {
	scope=public;
	displayName="Ketamine Hydrochloride 200mg/2mL Ampoule";
	descriptionShort="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes mild hypertension and tachycardia.";
	descriptionUse="Dissociative analgesic/anestehtic used for severe pain, available in a 25mg or 200mg doses. Causes mild hypertension and tachycardia.";
	picture="\socomd_medical\tex\ket";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_tetra : ACE_morphine {
	scope=public;
	displayName="Tetracycline 250mg capsule";
	descriptionShort="Antibiotic capsule";
	descriptionUse="Antibiotic capsule";
	picture="\socomd_medical\tex\tetra";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.01;
	};
};

class SOCOMD_Apap : ACE_morphine {
	scope=public;
	author="Monk";
	displayName="Paracetemol 2x500mg Tablets";
	picture="\socomd_medical\tex\apap";
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
	picture="\socomd_medical\tex\VPN";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};