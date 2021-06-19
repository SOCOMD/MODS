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
			class pneumoLocal				{};
			class checkResponse				{};
		};
		class Statemachine {
			file="\socomd_medical\functions\statemachine";
			class handleStateCardiacArrest	{};
		};
		class zen {
			file="\socomd_medical\functions\zen_functions";
			class resetTimer	{};
		};
	};
};