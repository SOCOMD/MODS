/*
class ACE_Head{
	class fieldDressing;
	class Apap: fieldDressing{
		displayName="Paracetemol 1g";
		condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\apap.paa";
	};
	class Tetra: Apap{
		displayName="Tetracyclin 250mg";
		condition="[_player, _target, 'head', 'Tetra'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'head', 'Tetra'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\apap.paa";
	};
	class intubating{
			class Larynxtubus{
				displayName="Insert SGA";
				distance=2;
				condition="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
				exceptions[]={
					""
				};
				showDisabled=0;
				icon="\socomd_data_core\icon\LMA.paa";
			};
			class Guedeltubus: Larynxtubus{
				displayName="Insert NPA";
				condition="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
				exceptions[]={
					""
				};
				icon="\socomd_data_core\icon\NPA.paa";
			};
			class Overstretch: Larynxtubus{
				displayName="Head Tilt";
				condition="[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_treatment";
				exceptions[]={
					""
				};
				icon="";
			};
		};
};
class ACE_ArmLeft{
	class Fentanyl: Morphine{
		displayName="Fentanyl 100mcg/2m";
		condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ket: Fentanyl{
		displayName="Ket 6mcg/2mL";
		condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Ket_S: Fentanyl{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'hand_l', 'Ket_S'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Ket_S'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine{
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};


class ACE_Medical_Actions{
	class Advanced{
		class Larynxtubus{
			displayName="Insert Advanced Airway";
			displayNameProgress="Placing SGA";
		};
		class Guedeltubus: Larynxtubus{
			displayName="Insert Basic Airway";
			displayNameProgress="Placing NPA";
			treatmentTime=1;
			requiredMedic=0;
			items[]={
				"KAT_guedel"
			};
			callbackSuccess="[_player, _target, 'Guedeltubus'] call kat_aceAirway_fnc_treatmentAdvanced_airway";
		};
		class Overstretch: Larynxtubus{
			displayName="Head Tilt";
			displayNameProgress="Adjusting Head";
			treatmentTime=4;
			requiredMedic=0;
			items[]={};
			condition=false;
			callbackSuccess="[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_overstretchHead";
		};
		class TurnAround: Larynxtubus{
			displayName="Manually clear airway debris";
			displayNameProgress="Adjusting Head";
			treatmentTime=5;
			requiredMedic=0;
			items[]={};
			callbackSuccess="[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_turnaroundHead";
		};
		class Accuvac: Larynxtubus{
			displayName="Suction the Airway";
			displayNameProgress="Clearing Obstruction";
			treatmentTime=8;
			items[]={
				"KAT_accuvac"
			};
			itemConsumed=0;
			callbackSuccess="[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_accuvac";
			callbackProgress="_this call kat_aceAirway_fnc_accuvacSound";
		};

		class Apap: Morphine{
			allowedSelections[]={
				"head"
			};
			displayName="Paracetemol 1g";
			displayNameProgress="Giving Paracetemol 1g";
			items[]={
				"ACE_apap"
			};
			treatmentTime=1;
			litter[]={
				{
					"All",
					"",
					{
						"ACE_MedicalLitter_apap"
					}
				}
			};
		};
		class Fentanyl: Morphine{
			displayName="Fentanyl 100mcg/2mL";
			displayNameProgress="Injecting Fentanyl";
			items[]={
				"ACE_fentanyl",
				"SOCOMD_VPN"
			};
		};
		
		class Tetra: Morphine {
			allowedSelections[]={
				"head"
			};
			displayName="Tetracycline 250mg";
			displayNameProgress="Giving Tetracycline";
			items[]={
				"SOCOMD_Tetra"
			};
		};
		class Atropine;
		class Naloxone: Atropine{
			displayName="Naloxone 1.6mg/4mL";
			displayNameProgress="Injecting Naloxone";
			items[]={
				"ACE_naloxone",
				"SOCOMD_VPN"
			};
		};

		class Defibrillator: CPR {
			displayName = "Defibrillator";
		};

		class Pulseoximeter{
			displayName="$STR_kat_aceBreathing_Pulseoximeter_Display";
			displayNameProgress="$STR_kat_aceBreathing_placing";
			category="examine";
			treatmentLocations[]={
				"All"
			};
			allowedSelections[]={
				"hand_l",
				"hand_r"
			};
			allowSelfTreatment=1;
			requiredMedic=1;
			treatmentTime=2;
			items[]={
				"KAT_Pulseoximeter"
			};
			condition="missionNamespace getVariable 'kat_aceBreathing_enable'";
			patientStateCondition=0;
			callbackSuccess="[_player, _target] call kat_aceBreathing_fnc_treatmentAdvanced_pulseoximeter";
			callbackFailure="";
			callbackProgress="";
			itemConsumed=1;
			animationPatient="";
			animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
			animationPatientUnconsciousExcludeOn[]={
				"ainjppnemstpsnonwrfldnon"
			};
			animationCaller="AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne="AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf="AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne="AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[]={};
		};
		class RemovePulseoximeter{
			displayName="$STR_kat_aceBreathing_Pulseoximeter_Display_Remove";
			displayNameProgress="$STR_kat_aceBreathing_remove";
			category="examine";
			treatmentLocations[]={
				"All"
			};
			allowedSelections[]={
				"hand_l",
				"hand_r"
			};
			allowSelfTreatment=1;
			requiredMedic=1;
			treatmentTime=2;
			items[]={};
			condition="_target getVariable ['kat_aceBreathing_pulseoximeter', false]";
			patientStateCondition=0;
			callbackSuccess="[_player, _target] call kat_aceBreathing_fnc_treatmentAdvanced_removePulseoximeter";
			callbackFailure="";
			callbackProgress="";
			itemConsumed=0;
			animationPatient="";
			animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
			animationPatientUnconsciousExcludeOn[]={
				"ainjppnemstpsnonwrfldnon"
			};
			animationCaller="AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne="AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf="AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne="AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[]={};
		};
		class CheckPulse;
		class CheckAirway: CheckPulse{
			treatmentTime=2;
		};
		class ChestSeal{
			displayName="Treat Pneumothorax";
			displayNameProgress="$STR_kat_aceBreathing_treating";
			category="advanced";
			treatmentLocations[]={
				"All"
			};
			allowedSelections[]={
				"body"
			};
			allowSelfTreatment=0;
			requiredMedic=2;
			treatmentTime=7;
			items[]={
				"KAT_ChestSeal",
				"SOCOMD_NDC"
				
			};
			condition="_target getVariable ['ace_medical_airwayCollapsed', false]";
			patientStateCondition=0;
			callbackSuccess="[_player, _target] call kat_aceBreathing_fnc_treatmentAdvanced_chestSeal";
			callbackFailure="";
			callbackProgress="";
			itemConsumed=1;
			animationPatient="";
			animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
			animationPatientUnconsciousExcludeOn[]={
				"ainjppnemstpsnonwrfldnon"
			};
			animationCaller="AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne="AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf="AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne="AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[]={};
		};
	};
};
*/