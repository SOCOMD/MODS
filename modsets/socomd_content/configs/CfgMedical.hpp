class ACE_Head
{
	class fieldDressing;
	class Apap: fieldDressing
	{
		displayName="Give Paracetamol 1g";
		condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\apap.paa";
	};
	class intubating
		{
			class Larynxtubus
			{
				displayName="Insert LMA";
				distance=2;
				condition="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
				exceptions[]=
				{
					""
				};
				showDisabled=0;
				icon="\socomd_data_core\icon\LMA.paa";
			};
			class Guedeltubus: Larynxtubus
			{
				displayName="Insert NPA";
				condition="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
				exceptions[]=
				{
					""
				};
				icon="\socomd_data_core\icon\NPA.paa";
			};
			class Overstretch: Larynxtubus
			{
				displayName="Triple Airway Maneuvre";
				condition="[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_treatment";
				exceptions[]=
				{
					""
				};
				icon="";
			};
		};
};
class ACE_ArmLeft
{
	class Morphine;
	class Fentanyl: Morphine
	{
		displayName="Inject Fentanyl 100mcg/2mL (IM)";
		condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Naloxone: Morphine
	{
		displayName="Inject Naloxone 1.6mg/4mL (IM)";
		condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_ArmRight
{
	class Morphine;
	class Fentanyl: Morphine
	{
		displayName="Inject Fentanyl 100mcg/2mL (IM)";
		condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Naloxone: Morphine
	{
		displayName="Inject Naloxone 1.6mg/4mL (IM)";
		condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_LegLeft
{
	class Morphine;
	class Fentanyl: Morphine
	{
		displayName="Inject Fentanyl 100mcg/2mL (IM)";
		condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Naloxone: Morphine
	{
		displayName="Inject Naloxone 1.6mg/4mL (IM)";
		condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_LegRight
{
	class Morphine;
	class Fentanyl: Morphine
	{
		displayName="Inject Fentanyl 100mcg/2mL (IM)";
		condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Naloxone: Morphine
	{
		displayName="Inject Naloxone 1.6mg/4mL (IM)";
		condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_Medical_Advanced
{
	class Treatment
	{
		class Bandaging
		{
			class Bandage
			{
				effectiveness=10;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class FieldDressing
			{
				effectiveness=1;
				reopeningChance=0.1;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
				class Abrasion
				{
					effectiveness=10;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1800;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=10;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=8;
					reopeningChance=0.15000001;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.2;
				};
				class Avulsions: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.40000001;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=4;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=3;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=2;
				};
				class Contusion: Abrasion
				{
					effectiveness=4;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
				};
				class ContusionMedium: Contusion
				{
				};
				class ContusionLarge: Contusion
				{
				};
				class CrushWound: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.2;
					reopeningMinDelay=200;
					reopeningMaxDelay=1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=4;
					reopeningChance=0.2;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=3;
					reopeningChance=0.25;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=2;
					reopeningChance=0.30000001;
				};
				class Cut: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1800;
				};
				class CutMinor: Cut
				{
					effectiveness=10;
					reopeningChance=0.1;
				};
				class CutMedium: Cut
				{
					effectiveness=9;
					reopeningChance=0.2;
				};
				class CutLarge: Cut
				{
					effectiveness=8;
					reopeningChance=0.30000001;
				};
				class Laceration: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.2;
					reopeningMinDelay=600;
					reopeningMaxDelay=1800;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=10;
					reopeningChance=0.2;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=9;
					reopeningChance=0.30000001;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=8;
					reopeningChance=0.40000001;
				};
				class velocityWound: Abrasion
				{
					effectiveness=6;
					reopeningChance=0.60000002;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=6;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=5;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=4;
				};
				class punctureWound: Abrasion
				{
					effectiveness=6;
					reopeningChance=0.40000001;
					reopeningMinDelay=360;
					reopeningMaxDelay=900;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=6;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=5;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=4;
				};
			};
			class PackingBandage: FieldDressing
			{
				class Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=3;
					reopeningChance=0.60000002;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=2;
					reopeningChance=0.69999999;
				};
				class Avulsions: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=1000;
					reopeningMaxDelay=1600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=4;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=3;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=2;
				};
				class Contusion: Abrasion
				{
					effectiveness=4;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
				};
				class ContusionMedium: Contusion
				{
				};
				class ContusionLarge: Contusion
				{
				};
				class CrushWound: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.40000001;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=4;
					reopeningChance=0.40000001;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=3;
					reopeningChance=0.5;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=2;
					reopeningChance=0.60000002;
				};
				class Cut: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.40000001;
					reopeningMinDelay=700;
					reopeningMaxDelay=1000;
				};
				class CutMinor: Cut
				{
					effectiveness=4;
					reopeningChance=0.40000001;
				};
				class CutMedium: Cut
				{
					effectiveness=3;
					reopeningChance=0.5;
				};
				class CutLarge: Cut
				{
					effectiveness=2;
					reopeningChance=0.60000002;
				};
				class Laceration: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.60000002;
					reopeningMinDelay=500;
					reopeningMaxDelay=2000;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=4;
					reopeningChance=0.69999999;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=3;
					reopeningChance=0.80000001;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=2;
					reopeningChance=0.89999998;
				};
				class velocityWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.30000001;
					reopeningMinDelay=1000;
					reopeningMaxDelay=2000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=10;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=9;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=8;
				};
				class punctureWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.30000001;
					reopeningMinDelay=1000;
					reopeningMaxDelay=3000;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=10;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=9;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=8;
				};
			};
			class ElasticBandage: FieldDressing
			{
				class Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=3;
					reopeningChance=0.60000002;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=2;
					reopeningChance=0.69999999;
				};
				class Avulsions: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.1;
					reopeningMinDelay=1000;
					reopeningMaxDelay=1600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=10;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=9;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=8;
				};
				class Contusion: Abrasion
				{
					effectiveness=10;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
				};
				class ContusionMedium: Contusion
				{
				};
				class ContusionLarge: Contusion
				{
				};
				class CrushWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=10;
					reopeningChance=0.1;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=9;
					reopeningChance=0.15000001;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=8;
					reopeningChance=0.2;
				};
				class Cut: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=70;
					reopeningMaxDelay=100;
				};
				class CutMinor: Cut
				{
					effectiveness=4;
					reopeningChance=0.5;
				};
				class CutMedium: Cut
				{
					effectiveness=3;
					reopeningChance=0.60000002;
				};
				class CutLarge: Cut
				{
					effectiveness=2;
					reopeningChance=0.69999999;
				};
				class Laceration: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.60000002;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=4;
					reopeningChance=0.60000002;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=3;
					reopeningChance=0.69999999;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=2;
					reopeningChance=0.80000001;
				};
				class velocityWound: Abrasion
				{
					effectiveness=6;
					reopeningChance=0.60000002;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=6;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=5;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=4;
				};
				class punctureWound: Abrasion
				{
					effectiveness=6;
					reopeningChance=0.40000001;
					reopeningMinDelay=360;
					reopeningMaxDelay=900;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=6;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=5;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=4;
				};
			};
			class QuikClot: FieldDressing
			{
				class Abrasion
				{
					effectiveness=4;
					reopeningChance=0.30000001;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=3;
					reopeningChance=0.40000001;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=2;
					reopeningChance=0.5;
				};
				class Avulsions: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.2;
					reopeningMinDelay=1000;
					reopeningMaxDelay=1600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=4;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=3;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=2;
				};
				class Contusion: Abrasion
				{
					effectiveness=4;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
				};
				class ContusionMedium: Contusion
				{
				};
				class ContusionLarge: Contusion
				{
				};
				class CrushWound: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=4;
					reopeningChance=0.30000001;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=3;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=2;
				};
				class Cut: Abrasion
				{
					effectiveness=2;
					reopeningChance=0.2;
					reopeningMinDelay=700;
					reopeningMaxDelay=1000;
				};
				class CutMinor: Cut
				{
					effectiveness=2;
					reopeningChance=0.30000001;
				};
				class CutMedium: Cut
				{
					effectiveness=1;
				};
				class CutLarge: Cut
				{
					effectiveness=0.60000002;
				};
				class Laceration: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.40000001;
					reopeningMinDelay=500;
					reopeningMaxDelay=2000;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=4;
					reopeningChance=0.40000001;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=3;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=2;
				};
				class velocityWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.1;
					reopeningMinDelay=1000;
					reopeningMaxDelay=2000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=10;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=9;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=8;
				};
				class punctureWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.1;
					reopeningMinDelay=1000;
					reopeningMaxDelay=3000;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=10;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=9;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=8;
				};
			};
		};
		class Medication
		{
			painReduce=0;
			hrIncreaseLow[]={0,0,0};
			hrIncreaseNormal[]={0,0,0};
			hrIncreaseHigh[]={0,0,0};
			hrCallback="";
			timeInSystem=120;
			maxDose=4;
			onOverDose="";
			viscosityChange=0;
			class Morphine
			{
				painReduce=50;
				hrIncreaseLow[]={-10,-20,35};
				hrIncreaseNormal[]={-10,-30,35};
				hrIncreaseHigh[]={-10,-35,50};
				timeInSystem=3600;
				maxDose=4;
				inCompatableMedication[]={};
				viscosityChange=-10;
			};
			class Fentanyl
			{
				painReduce=5000;
				hrIncreaseLow[]={-10,-20,35};
				hrIncreaseNormal[]={-10,-30,35};
				hrIncreaseHigh[]={-10,-35,50};
				timeInSystem=1800;
				maxDose=2;
				inCompatableMedication[]={};
				viscosityChange=-5;
			};
			class Epinephrine;
			class Adenosine;
			class Atropine
			{
				painReduce=0;
				hrIncreaseLow[]={7,10,15};
				hrIncreaseNormal[]={15,25,20};
				hrIncreaseHigh[]={15,30,10};
				timeInSystem=120;
				maxDose=6;
				inCompatableMedication[]={};
				viscosityChange=-10;
			};
			class Naloxone
			{
				painReduce=0;
				hrIncreaseLow[]={30,60,100};
				hrIncreaseNormal[]={30,90,100};
				hrIncreaseHigh[]={30,90,120};
				timeInSystem=120;
				maxDose=6;
				inCompatableMedication[]={};
			};
			class PainKillers
			{
				painReduce=0.69999999;
				timeInSystem=120;
				maxDose=10;
				inCompatableMedication[]={};
				viscosityChange=5;
			};
			class Apap: PainKillers
			{
				painReduce=5;
				timeInSystem=300;
				maxDose=10;
				inCompatableMedication[]={};
				viscosityChange=5;
			};
		};
		class IV {
            // volume is in millileters
            volume = 3000;
            ratio[] = {};
            type = "Blood";
            class BloodIV {
                volume = 3000;
                ratio[] = {"Plasma", 1};
            };
            class BloodIV_500: BloodIV {
                volume = 1500;
            };
            class BloodIV_250: BloodIV {
                volume = 750;
            };
            class PlasmaIV: BloodIV {
                volume = 3000;
                ratio[] = {"Blood", 1};
                type = "Plasma";
            };
            class PlasmaIV_500: PlasmaIV {
                volume = 1500;
            };
            class PlasmaIV_250: PlasmaIV {
                volume = 750;
            };
            class SalineIV: BloodIV {
                volume = 3000;
                type = "Saline";
                ratio[] = {};
            };
            class SalineIV_500: SalineIV {
                volume = 1500;
            };
            class SalineIV_250: SalineIV {
                volume = 750;
            };
        };
	};
};
class ACE_Medical_Actions
{
	class Advanced
	{
		class Larynxtubus
		{
			displayName="Insert LMA";
			displayNameProgress="Placing LMA";
		};
		class Guedeltubus: Larynxtubus
		{
			displayName="Insert NPA";
			displayNameProgress="Placing NPA";
			treatmentTime=2;
			requiredMedic=0;
			items[]=
			{
				"KAT_guedel"
			};
			callbackSuccess="[_player, _target, 'Guedeltubus'] call kat_aceAirway_fnc_treatmentAdvanced_airway";
		};
		class Overstretch: Larynxtubus
		{
			displayName="Triple Airway Maneuvre";
			displayNameProgress="Adjusting Head";
			treatmentTime=2;
			requiredMedic=0;
			items[]={};
			condition="!([_target] call ace_common_fnc_isAwake) && !(_target getVariable ['kat_aceAirway_overstretch', false]) && (missionNamespace getVariable ['kat_aceAirway_enable',true])";
			callbackSuccess="[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_overstretchHead";
		};
		class TurnAround: Larynxtubus
		{
			displayNameProgress="Adjusting Head";
			treatmentTime=5;
			requiredMedic=0;
			items[]={};
			callbackSuccess="[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_turnaroundHead";
		};
		class Accuvac: Larynxtubus
		{
			displayName="Suction the Airway";
			displayNameProgress="Clearing Obstruction";
			treatmentTime=8;
			items[]=
			{
				"KAT_accuvac"
			};
			itemConsumed=0;
			callbackSuccess="[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_accuvac";
			callbackProgress="_this call kat_aceAirway_fnc_accuvacSound";
		};
		class FieldDressing
		{
			treatmentTime=5.5;
		};
		class Tourniquet: FieldDressing
		{
			treatmentTime=0.5;
		};
		class Morphine;
		class Apap: Morphine
		{
			allowedSelections[]=
			{
				"head"
			};
			displayName="Give Paracetemol 1g";
			displayNameProgress="Giving Paracetemol 1g";
			items[]=
			{
				"ACE_apap"
			};
			treatmentTime=1;
			litter[]=
			{
				
				{
					"All",
					"",
					
					{
						"ACE_MedicalLitter_apap"
					}
				}
			};
		};
		class Fentanyl: Morphine
		{
			displayName="Inject Fentanyl 100mcg/2mL (IM)";
			displayNameProgress="Injecting Fentanyl";
			items[]=
			{
				"ACE_fentanyl"
			};
		};
		class Atropine;
		class Naloxone: Atropine
		{
			displayName="Inject Naloxone 1.6mg/4mL (IM)";
			displayNameProgress="Injecting Naloxone";
			items[]=
			{
				"ACE_naloxone"
			};
		};
		class BloodIV: FieldDressing
		{
			treatmentTime=5;
		};
		class RemoveTourniquet: Tourniquet
		{
			treatmentTime=0.5;
		};
		class CPR: FieldDressing
		{
			treatmentTime=10;
		};
		class BodyBag: FieldDressing
		{
			treatmentTime=10;
		};
		class CheckPulse;
		class CheckAirway: CheckPulse
		{
			treatmentTime=3;
		};
	};
};