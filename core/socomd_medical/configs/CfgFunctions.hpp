class CfgFunctions {
	class SOCOMD_Medical {
		class XEH {
			file="\socomd_medical\functions\xeh";
			class XEH_postInit {};
		};
		
		class Medication {
			file="\socomd_medical\functions\medication";
			class Ketamine {};
			class KetamineLocal {};
			class KetamineEffect {};
		};

		class Actions {
			file="\socomd_medical\functions\actions";
			class DefibrillatorLocal {};
			class DefibrillatorStart {};
			class DefibrillatorSuccess {};
			class DefibrillatorFailure {};
		};
	};
};