class CfgVehicles {
	

	class All;
	class AllVehicles: All
	{
		class ViewOptics;
		class NewTurret
		{
			class ViewGunner: ViewOptics
			{
				minFov = 0.75;
				maxFov = 0.75;
				initFov = 0.75;
			};
		};
	};
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
	};
	class Helicopter: Air
	{
		class ViewPilot: ViewPilot
		{
			minFov = 0.75;
			maxFov = 0.75;
			initFov = 0.75;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
			};
		};
	};
	class Helicopter_Base_F: Helicopter{};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
					minFov = 0.75;
					maxFov = 0.75;
					initFov = 0.75;
				};
			};
		};
	};
	class land : AllVehicles {
		class NewTurret;
		class CargoTurret;
	};
	class man : land {
		class ViewCargo;
		class ViewOptics;
		class ViewPilot;
		class NewTurret : NewTurret {
			class ViewOptics;
			class ViewGunner;
		};
		class CargoTurret : CargoTurret {
			class ViewOptics;
			class ViewGunner;
		}
	};
	class CAManBase : man {
		// naked eye
		class ViewCargo : ViewCargo {
			// init is 0.75
			minFov = 0.75;
			maxFov = 0.75;
		};

		// idk what this is for
		class ViewOptics : ViewOptics {
			//init is 0.7
			initFov = 0.25;
			minFov = 0.25;
			maxFov = 0.25;
		};

		// pilot naked eye?
		class ViewPilot : ViewPilot {
			minFov = 0.75;
			maxFov = 0.75;
			speedZoomMaxSpeed = 0;
		};

		// just incase this gets used anywhere important
		class NewTurret : NewTurret {
			class ViewGunner : ViewGunner {
				// init 0.75
				minFov = 0.75;
				maxFov = 0.75;
			};
		};

		// this one stops us zooming in when looking down sights.
		class CargoTurret : CargoTurret {
			class ViewGunner : ViewGunner {
				// init 0.75
				minFov = 0.75;
				maxFov = 0.75;
			};
		};
		class ACE_Actions
		{
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
					displayName="$STR_kat_aceAirway_intubating";
					icon="";
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
						icon="\kat_aceAirway\images\larynx.paa";
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
						icon="\kat_aceAirway\images\guedel.paa";
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
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine
				{
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl
				{
					displayName="Ket 100mcg/2mL";
					condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
				};
				class Naloxone: Morphine
				{
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
			class ACE_ArmRight
			{
				class Morphine;
				class Morphine_Medic
				{
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine
				{
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine
				{
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl
				{
					displayName="Ket 100mcg/2mL";
					condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
				};
				class Naloxone: Morphine
				{
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
			class ACE_LegLeft
			{
				class Morphine;
				class Morphine_Medic
				{
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine
				{
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine
				{
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl
				{
					displayName="Ket 100mcg/2mL";
					condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
				};
				class Naloxone: Morphine
				{
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
			class ACE_LegRight
			{
				class Morphine;
				class Morphine_Medic
				{
					displayName="Morphine 10mg/1mL";
					condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Epinephrine;
				class Epinephrine_Medic : Epinephrine
				{
					epinephrinedisplayName="Epinephrine 1mg/1mL";
					condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\VPN.paa";
				};
				class Fentanyl: Morphine
				{
					displayName="Fentanyl 100mcg/2mL";
					condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
				};
				class Ket: Fentanyl
				{
					displayName="Ket 100mcg/2mL";
					condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
				};
				class Naloxone: Morphine
				{
					displayName="Naloxone 1.6mg/4mL";
					condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
			class ACE_MainActions
			{
				class Medical
				{
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
							displayName="$STR_kat_aceAirway_intubating";
							icon="";
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
								icon="\kat_aceAirway\images\larynx.paa";
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
								icon="\kat_aceAirway\images\guedel.paa";
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
							epinephrinedisplayName="Epinephrine 1mg/1mL";
							condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Fentanyl: Morphine
						{
							displayName="Fentanyl 100mcg/2mL";
							condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
						};
						class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
						};
						class Naloxone: Morphine
						{
							displayName="Naloxone 1.6mg/4mL";
							condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
						};
					};
					class ACE_ArmRight
					{
						class Morphine;
						class Morphine_Medic
						{
							displayName="Morphine 10mg/1mL";
							condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Epinephrine;
						class Epinephrine_Medic : Epinephrine
						{
							epinephrinedisplayName="Epinephrine 1mg/1mL";
							condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Fentanyl: Morphine
						{
							displayName="Fentanyl 100mcg/2mL";
							condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
						};
						class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
						};
						class Naloxone: Morphine
						{
							displayName="Naloxone 1.6mg/4mL";
							condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
						};
					};
					class ACE_LegLeft
					{
						class Morphine;
						class Morphine_Medic
						{
							displayName="Morphine 10mg/1mL";
							condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Epinephrine;
						class Epinephrine_Medic : Epinephrine
						{
							epinephrinedisplayName="Epinephrine 1mg/1mL";
							condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Fentanyl: Morphine
						{
							displayName="Fentanyl 100mcg/2mL";
							condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
						};
						class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
						};
						class Naloxone: Morphine
						{
							displayName="Naloxone 1.6mg/4mL";
							condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
						};
					};
					class ACE_LegRight
					{
						class Morphine;
						class Morphine_Medic
						{
							displayName="Morphine 10mg/1mL";
							condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Epinephrine;
						class Epinephrine_Medic : Epinephrine
						{
							epinephrinedisplayName="Epinephrine 1mg/1mL";
							condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
							icon="socomd_data_core\icon\VPN.paa";
						};
						class Fentanyl: Morphine
						{
							displayName="Fentanyl 100mcg/2mL";
							condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
						};
						class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
						};
						class Naloxone: Morphine
						{
							displayName="Naloxone 1.6mg/4mL";
							condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
						};
					};
				};
			};
		};
		class ACE_SelfActions
		{
			class Medical
			{
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
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine
					{
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
						};
					class Naloxone: Morphine
					{
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};
				class ACE_ArmRight
				{
					class Morphine;
					class Morphine_Medic: Morphine
					{
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'lhand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine
					{
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine
					{
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
						};
					class Naloxone: Morphine
					{
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
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
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine
					{
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
						};
					class Naloxone: Morphine
					{
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
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
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine
					{
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl
						{
							displayName="Ket 100mcg/2mL";
							condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
						};
					class Naloxone: Morphine
					{
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};
			};
   		};
	};
	#include "vehicles\base\medical.hpp"
};