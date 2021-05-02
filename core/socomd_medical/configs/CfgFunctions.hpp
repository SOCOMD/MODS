class CfgFunctions {
	class SOCOMD_Medical {
		class XEH {
			file="\socomd_medical\functions\xeh";
			class XEH_preInit {};
			class XEH_postInit {};
		};
		
		class Medication {
			file="\socomd_medical\functions\medication";
			class KetamineSuccess {};
			class KetamineLocal {};
			class KetamineEffect {};
			class naloxoneLocal {};
			class naloxoneSuccess {};
		};

		class Actions {
			file="\socomd_medical\functions\actions";
			class vpnMedicationCondition 	{};
			class vpnMedicationSuccess 		{};
			class revivalTimer				{};
		};
		class Statemachine {
			file="\socomd_medical\functions\statemachine";
			class handleStateCardiacArrest	{};
		};
	};
};