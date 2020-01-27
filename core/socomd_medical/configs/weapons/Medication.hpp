class ACE_Morphine : ACE_ItemCore {
	scope=public;
	displayName="Morphine 10mg/1mL";
	picture="\socomd_data_core\icon\morphine.paa";
	descriptionShort="Analgesic, used for moderate pain";
	descriptionUse="Analgesic, used for moderate pain";
};

class ACE_Epinephrine : ACE_ItemCore {
	scope=public;
	displayName="Epinephrine 1mg/1mL Ampoule";
	picture="\socomd_data_core\icon\epi.paa";
	descriptionShort="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
	descriptionUse="Sympathomimetic, increases HR, bronchodilation and vasoconstriction";
};

class SOCOMD_Ketamine_6mg: ACE_morphine {
	scope=public;
	displayName="Ketamine 6mg/2mL Ampoule";
	descriptionShort="Analgesic used for severe pain";
	descriptionUse="Analgesic used for severe pain";
	picture="\socomd_data_core\icon\ket.paa";
};

class SOCOMD_Ketamine_200mg: ACE_morphine {
	scope=2;
	displayName="Ketamine 200mg/2mL Ampoule";
	descriptionShort="Analgesic used for severe pain and sedation";
	descriptionUse="Analgesic used for severe pain and sedation";
	picture="\socomd_data_core\icon\ket.paa";
};
