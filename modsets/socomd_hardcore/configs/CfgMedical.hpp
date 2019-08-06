class ACE_Head
{
	class fieldDressing;
	class Apap: fieldDressing
	{
		displayName="Paracetemol 1g";
		condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\apap.paa";
	};
	class intubating
		{
			class Larynxtubus
			{
				displayName="Insert SGA";
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
				displayName="Head Tilt";
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
	class Morphine_Medic: Morphine
	{
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine
	{
		displayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine
	{
		displayName="Fentanyl 100mcg/2m";
		condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ket: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Ket_S: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'hand_l', 'Ket_S'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Ket_S'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine
	{
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ondansetron: Morphine
	{
		displayName="Ondansetron 8mg/4mL"
		condition="[_player, _target, 'hand_l', 'Ondansetron] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Ondansetron'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_ArmRight
{
	class Morphine;
	class Morphine_Medic: Morphine
	{
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine
	{
		displayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine
	{
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ket: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Ket_S: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'hand_r', 'Ket_S'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Ket_S'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine
	{
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ondansetron: Morphine
	{
		displayName="Ondansetron 8mg/4mL"
		condition="[_player, _target, 'hand_r', 'Ondansetron] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Ondansetron'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_LegLeft
{
	class Morphine;
	class Morphine_Medic: Morphine
	{
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine
	{
		displayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine
	{
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ket: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Ket_S: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'leg_l', 'Ket_S'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Ket_S'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine
	{
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ondansetron: Morphine
	{
		displayName="Ondansetron 8mg/4mL"
		condition="[_player, _target, 'leg_l', 'Ondansetron] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Ondansetron'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
};
class ACE_LegRight
{
	class Morphine;
	class Morphine_Medic: Morphine
	{
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine
	{
		displayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine
	{
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ket: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Ket_S: Fentanyl
	{
		displayName="Ket 100mcg/2mL";
		condition="[_player, _target, 'leg_r', 'Ket_S'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Ket_S'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine
	{
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Ondansetron: Morphine
	{
		displayName="Ondansetron 8mg/4mL"
		condition="[_player, _target, 'leg_r', 'Ondansetron] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Ondansetron'] call ace_medical_fnc_treatment";
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
				effectiveness=20;
				reopeningChance=0.1;
				reopeningMinDelay=120;
				reopeningMaxDelay=200;
				class Abrasion
				{
					effectiveness=20;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1800;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=20;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.15000001;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.2;
				};
				class Avulsions: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.40000001;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=20;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=20;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=20;
				};
				class Contusion: Abrasion
				{
					effectiveness=20;
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
					effectiveness=20;
					reopeningChance=0.2;
					reopeningMinDelay=200;
					reopeningMaxDelay=1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=20;
					reopeningChance=0.2;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=20;
					reopeningChance=0.25;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=20;
					reopeningChance=0.30000001;
				};
				class Cut: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1800;
				};
				class CutMinor: Cut
				{
					effectiveness=20;
					reopeningChance=0.1;
				};
				class CutMedium: Cut
				{
					effectiveness=20;
					reopeningChance=0.2;
				};
				class CutLarge: Cut
				{
					effectiveness=20;
					reopeningChance=0.30000001;
				};
				class Laceration: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.2;
					reopeningMinDelay=600;
					reopeningMaxDelay=1800;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=20;
					reopeningChance=0.2;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=20;
					reopeningChance=0.30000001;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=20;
					reopeningChance=0.40000001;
				};
				class velocityWound: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.60000002;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=20;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=20;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=20;
				};
				class punctureWound: Abrasion
				{
					effectiveness=20;
					reopeningChance=0.40000001;
					reopeningMinDelay=360;
					reopeningMaxDelay=900;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=20;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=20;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=20;
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
					effectiveness=0.2;
					reopeningChance=0.5;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=4.4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=2.4;
					reopeningChance=0.60000002;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.69999999;
				};
				class Avulsions: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.1;
					reopeningMinDelay=1000;
					reopeningMaxDelay=1600;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=4.4;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=2.4;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=0.2;
				};
				class Contusion: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
					effectiveness=4.4;
				};
				class ContusionMedium: Contusion
				{
					effectiveness=2.4;
				};
				class ContusionLarge: Contusion
				{
				};
				class CrushWound: Abrasion
				{
					effectiveness=4.4;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=4.4;
					reopeningChance=0.1;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=4.4;
					reopeningChance=0.15000001;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=4.4;
					reopeningChance=0.2;
				};
				class Cut: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.5;
					reopeningMinDelay=70;
					reopeningMaxDelay=100;
				};
				class CutMinor: Cut
				{
					effectiveness=4.4;
					reopeningChance=0.5;
				};
				class CutMedium: Cut
				{
					effectiveness=2.4;
					reopeningChance=0.60000002;
				};
				class CutLarge: Cut
				{
					effectiveness=0.2;
					reopeningChance=0.69999999;
				};
				class Laceration: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.60000002;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=4.4;
					reopeningChance=0.60000002;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=2.4;
					reopeningChance=0.69999999;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=0.2;
					reopeningChance=0.80000001;
				};
				class velocityWound: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.60000002;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=4.4;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=2.4;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=0.2;
				};
				class punctureWound: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.40000001;
					reopeningMinDelay=360;
					reopeningMaxDelay=900;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=4.4;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=2.4;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=0.2;
				};
			};
			class QuikClot: FieldDressing
			{
				class Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=7;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=7;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=7;
				};
				class Avulsions: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AvulsionsMinor: Avulsions
				{
					effectiveness=7;
				};
				class AvulsionsMedium: Avulsions
				{
					effectiveness=7;
				};
				class AvulsionsLarge: Avulsions
				{
					effectiveness=7;
				};
				class Contusion: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class ContusionMinor: Contusion
				{
					effectiveness=7;
				};
				class ContusionMedium: Contusion
				{
					effectiveness=7;
				};
				class ContusionLarge: Contusion
				{
					effectiveness=7;
				};
				class CrushWound: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class CrushWoundMinor: CrushWound
				{
					effectiveness=7;
					reopeningChance=0.30000001;
				};
				class CrushWoundMedium: CrushWound
				{
					effectiveness=7;
				};
				class CrushWoundLarge: CrushWound
				{
					effectiveness=7;
				};
				class Cut: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class CutMinor: Cut
				{
					effectiveness=7;
				};
				class CutMedium: Cut
				{
					effectiveness=7;
				};
				class CutLarge: Cut
				{
					effectiveness=7;
				};
				class Laceration: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=7;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=7;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=7;
				};
				class velocityWound: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=7;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=7;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=7;
				};
				class punctureWound: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=7;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=7;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=7;
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
				painReduce=0.5;
				hrIncreaseLow[]={-10,-20,35};
				hrIncreaseNormal[]={-10,-30,35};
				hrIncreaseHigh[]={-10,-35,35};
				timeInSystem=3600;
				maxDose=4;
				inCompatableMedication[]={};
				viscosityChange=-10;
			};
			class Morphine_Medic: Morphine {
				painReduce=0.5;
				hrIncreaseLow[]={-10,-20,35};
				hrIncreaseNormal[]={-10,-30,35};
				hrIncreaseHigh[]={-10,-35,35};
				timeInSystem=3600;
				maxDose=4;
				inCompatableMedication[]={};
				viscosityChange=-10;
			};
			class Fentanyl
			{
				painReduce=5;
				hrIncreaseLow[]={-15,-25,35};
				hrIncreaseNormal[]={-15,-35,35};
				hrIncreaseHigh[]={-15,-35,35};
				timeInSystem=1800;
				maxDose=4;
				inCompatableMedication[]={};
				viscosityChange=-15;
			};
			class Ket
			{
				painReduce=50;
				hrIncreaseLow[]={15,25,35};
				hrIncreaseNormal[]={15,35,35};
				hrIncreaseHigh[]={15,45,35};
				timeInSystem=1800;
				maxDose=12;
				inCompatableMedication[]={};
			};
			class Ket_S
			{
				painReduce=50;
				hrIncreaseLow[]={15,25,35};
				hrIncreaseNormal[]={15,35,35};
				hrIncreaseHigh[]={15,45,50};
				timeInSystem=1800;
				maxDose=12;
				inCompatableMedication[]={};
			};
			class Epinephrine;
			class Epinephrine_Medic: Epinephrine {
				painReduce=0;
                hrIncreaseLow[]={30,50,15};
                hrIncreaseNormal[]={35,50,15};
                hrIncreaseHigh[]={30,50,15};
                timeInSystem=240;
                maxDose=6;
                inCompatableMedication[]={};
                viscosityChange=15;
			};
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
				hrIncreaseLow[]={40,80,10};
				hrIncreaseNormal[]={20,60,10};
				hrIncreaseHigh[]={15,30,12};
				timeInSystem=120;
				maxDose=4;
				onOverDose = "[_target, true, 60, true] call ace_medical_fnc_setUnconscious";
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
			class Ondansetron: PainKillers
			{
				painReduce=0;
				hrIncreaseLow[]={0,0,1};
				hrIncreaseNormal[]={0,0,1};
				hrIncreaseHigh[]={0,0,1};
				hrCallback="_target setVariable ['ace_medical_airwayOccluded', false, true]";
				timeInSystem=5000;
				viscosityChange=0;
			};
			class Apap: PainKillers
			{
				painReduce=0.2;
				timeInSystem=600;
				maxDose=3;
				inCompatableMedication[]={};
				viscosityChange=0;
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
			displayName="Insert SGA";
			displayNameProgress="Placing SGA";
		};
		class Guedeltubus: Larynxtubus
		{
			displayName="Insert NPA";
			displayNameProgress="Placing NPA";
			treatmentTime=1;
			requiredMedic=0;
			items[]=
			{
				"KAT_guedel"
			};
			callbackSuccess="[_player, _target, 'Guedeltubus'] call kat_aceAirway_fnc_treatmentAdvanced_airway";
		};
		class Overstretch: Larynxtubus
		{
			displayName="Head Tilt";
			displayNameProgress="Adjusting Head";
			treatmentTime=4;
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
			displayName="Israeli Bandage";
			treatmentTime=15;
		};
		class QuikClot: FieldDressing
		{
			treatmentTime=4.5;
		};
		class ElasticBandage: FieldDressing
		{
			treatmentTime=1;
		};
		class Tourniquet: FieldDressing
		{
			treatmentTime=0.5;
		};
		class Epinephrine;
		class Epinephrine_Medic: Epinephrine{
			displayName= "Epinephrine 1mg/1mL"
			displayNameProgress="Injecting Epinephrine";
			items[]=
			{
				"ACE_epinephrine_Medic",
				"SOCOMD_VPN"

			};
		};
		class Morphine;
		class Morphine_Medic: Morphine {
			displayName= "Morphine 10mg/1mL"
			displayNameProgress="Injecting Morphine";
			items[]=
			{
				"ACE_morphine_Medic",
				"SOCOMD_VPN"
			};
		};
		class Apap: Morphine
		{
			allowedSelections[]=
			{
				"head"
			};
			displayName="Paracetemol 1g";
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
			displayName="Fentanyl 100mcg/2mL";
			displayNameProgress="Injecting Fentanyl";
			items[]=
			{
				"ACE_fentanyl",
				"SOCOMD_VPN"
			};
		};
		class Ket: Morphine {
			displayName="Ketamine 30mg/2mL";
			displayNameProgress="Injecting Ketamine 30mg/2mL";
			items[]=
			{
				"SOCOMD_Ket",
				"SOCOMD_VPN"
			};
			callbackSuccess=armaforces_ace_medical_fnc_ketamine;
		};
		class Ket_S: Ket {
			displayName="Ketamine 200mg/2mL";
			displayNameProgress="Injecting Ketamine 200mg/2mL";
			items[]=
			{
				"SOCOMD_Ket_S",
				"SOCOMD_VPN"
			};
			callbackSuccess=armaforces_ace_medical_fnc_ketamine_sedation;
		};
		class Ondansetron: Morphine {
			displayName="Ondansetron 8mg/4mL";
			displayNameProgress="Injecting Ondansetron";
			items[]=
			{
				"SOCOMD_Ondans"
			};
		};
		class Atropine;
		class Naloxone: Atropine
		{
			displayName="Naloxone 1.6mg/4mL";
			displayNameProgress="Injecting Naloxone";
			items[]=
			{
				"ACE_naloxone",
				"SOCOMD_VPN"
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
		class Pulseoximeter
		{
			displayName="$STR_kat_aceBreathing_Pulseoximeter_Display";
			displayNameProgress="$STR_kat_aceBreathing_placing";
			category="examine";
			treatmentLocations[]=
			{
				"All"
			};
			allowedSelections[]=
			{
				"hand_l",
				"hand_r"
			};
			allowSelfTreatment=1;
			requiredMedic=1;
			treatmentTime=2;
			items[]=
			{
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
			animationPatientUnconsciousExcludeOn[]=
			{
				"ainjppnemstpsnonwrfldnon"
			};
			animationCaller="AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne="AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf="AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne="AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[]={};
		};
		class RemovePulseoximeter
		{
			displayName="$STR_kat_aceBreathing_Pulseoximeter_Display_Remove";
			displayNameProgress="$STR_kat_aceBreathing_remove";
			category="examine";
			treatmentLocations[]=
			{
				"All"
			};
			allowedSelections[]=
			{
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
			animationPatientUnconsciousExcludeOn[]=
			{
				"ainjppnemstpsnonwrfldnon"
			};
			animationCaller="AinvPknlMstpSlayWrflDnon_medicOther";
			animationCallerProne="AinvPpneMstpSlayW[wpn]Dnon_medicOther";
			animationCallerSelf="AinvPknlMstpSlayW[wpn]Dnon_medic";
			animationCallerSelfProne="AinvPpneMstpSlayW[wpn]Dnon_medic";
			litter[]={};
		};
		class BodyBag: FieldDressing
		{
			treatmentTime=10;
		};
		class CheckPulse;
		class CheckAirway: CheckPulse
		{
			treatmentTime=2;
		};
		class ChestSeal
		{
			displayName="Hyfin Chest Seal";
			displayNameProgress="$STR_kat_aceBreathing_treating";
			category="advanced";
			treatmentLocations[]=
			{
				"All"
			};
			allowedSelections[]=
			{
				"body"
			};
			allowSelfTreatment=0;
			requiredMedic=2;
			treatmentTime=7;
			items[]=
			{
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
			animationPatientUnconsciousExcludeOn[]=
			{
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