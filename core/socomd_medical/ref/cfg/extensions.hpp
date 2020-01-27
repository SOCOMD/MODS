class Self_Medical {

	class ACE_Head {
		class fieldDressing;
		class Apap: fieldDressing {
			displayName="Paracetemol 1g";
			condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\apap.paa";
		};
	};

	class ACE_ArmLeft {
		class Morphine;
		class Morphine_Medic: Morphine {
			displayName="Morphine 10mg/1mL";
			condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Epinephrine;
		class Epinephrine_Medic : Epinephrine {
			epinephrinedisplayName="Epinephrine 1mg/1mL";
			condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Fentanyl: Morphine {
			displayName="Fentanyl 100mcg/2mL";
			condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		};
		class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
			};
		class Naloxone: Morphine {
			displayName="Naloxone 1.6mg/4mL";
			condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
		};
	};
	
	class ACE_ArmRight {
		class Morphine;
		class Morphine_Medic: Morphine {
			displayName="Morphine 10mg/1mL";
			condition="[_player, _target, 'lhand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Epinephrine;
		class Epinephrine_Medic : Epinephrine {
			epinephrinedisplayName="Epinephrine 1mg/1mL";
			condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Fentanyl: Morphine {
			displayName="Fentanyl 100mcg/2mL";
			condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
		};
		class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
			};
		class Naloxone: Morphine {
			displayName="Naloxone 1.6mg/4mL";
			condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
		};
	};
	
	class ACE_LegLeft {
		class Morphine;
		class Morphine_Medic: Morphine {
			displayName="Morphine 10mg/1mL";
			condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Epinephrine;
		class Epinephrine_Medic : Epinephrine {
			epinephrinedisplayName="Epinephrine 1mg/1mL";
			condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Fentanyl: Morphine {
			displayName="Fentanyl 100mcg/2mL";
			condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
		};
		class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
			};
		class Naloxone: Morphine {
			displayName="Naloxone 1.6mg/4mL";
			condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
		};
	};

	class ACE_LegRight {
		class Morphine;
		class Morphine_Medic: Morphine {
			displayName="Morphine 10mg/1mL";
			condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Epinephrine;
		class Epinephrine_Medic : Epinephrine {
			epinephrinedisplayName="Epinephrine 1mg/1mL";
			condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
			icon="socomd_data_core\icon\VPN.paa";
		};
		class Fentanyl: Morphine {
			displayName="Fentanyl 100mcg/2mL";
			condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
		};
		class Ket: Fentanyl {
				displayName="Ket 6mcg/2mL";
				condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
				statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
			};
		class Naloxone: Morphine {
			displayName="Naloxone 1.6mg/4mL";
			condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
			statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
		};
	};
};

class ACE_Actions{
class ACE_Head{
	class Blindfold{
		displayName="Blindfold";
		condition="[_player,_target] call SOCOMD_fnc_ActionCondition_canInteract";
		statement="[_player,_target] call SOCOMD_fnc_Action_putBlindfoldOn";
		showDisabled=0;
		priority=1;
		distance=2;
	};
};
class fieldDressing;
class Apap: fieldDressing {
	displayName="Paracetemol 1g";
	condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
	statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
	icon="socomd_data_core\icon\apap.paa";
};

class intubating {
	displayName="$STR_kat_aceAirway_intubating";
	icon="";
	class Larynxtubus {
		displayName="Insert SGA";
		distance=2;
		condition="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
		exceptions[]= {
			""
		};
		showDisabled=0;
		icon="\kat_aceAirway\images\larynx.paa";
	};
	class Guedeltubus: Larynxtubus {
		displayName="Insert NPA";
		condition="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
		exceptions[]= {
			""
		};
		icon="\kat_aceAirway\images\guedel.paa";
	};
};

class ACE_ArmLeft {
	class Morphine;
	class Morphine_Medic: Morphine {
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine {
		epinephrinedisplayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine {
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
	};
	class Ket: Fentanyl {
		displayName="Ket 6mcg/2mL";
		condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine {
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
	};
};

class ACE_ArmRight {
	class Morphine;
	class Morphine_Medic {
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine {
		epinephrinedisplayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine {
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
	};
	class Ket: Fentanyl {
		displayName="Ket 6mcg/2mL";
		condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine {
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
	};
};

class ACE_LegLeft {
	class Morphine;
	class Morphine_Medic {
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine {
		epinephrinedisplayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine {
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
	};
	class Ket: Fentanyl {
		displayName="Ket 6mcg/2mL";
		condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine {
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
	};
};

class ACE_LegRight {
	class Morphine;
	class Morphine_Medic {
		displayName="Morphine 10mg/1mL";
		condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Epinephrine;
	class Epinephrine_Medic : Epinephrine {
		epinephrinedisplayName="Epinephrine 1mg/1mL";
		condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
		icon="socomd_data_core\icon\VPN.paa";
	};
	class Fentanyl: Morphine {
		displayName="Fentanyl 100mcg/2mL";
		condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
	};
	class Ket: Fentanyl {
		displayName="Ket 6mcg/2mL";
		condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
	};
	class Naloxone: Morphine {
		displayName="Naloxone 1.6mg/4mL";
		condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
		statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
	};
};

class ACE_MainActions {
			class Medical {
				class ACE_Head {
					class fieldDressing;
					class Apap: fieldDressing {
						displayName="Paracetemol 1g";
						condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\apap.paa";
					};
					class intubating {
						displayName="$STR_kat_aceAirway_intubating";
						icon="";
						class Larynxtubus {
							displayName="Insert SGA";
							distance=2;
							condition="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
							exceptions[]= {
								""
							};
							showDisabled=0;
							icon="\kat_aceAirway\images\larynx.paa";
						};
						class Guedeltubus: Larynxtubus {
							displayName="Insert NPA";
							condition="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
							statement="[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
							exceptions[]= {
								""
							};
							icon="\kat_aceAirway\images\guedel.paa";
						};
					};
				};

				class ACE_ArmLeft {
					class Morphine;
					class Morphine_Medic: Morphine {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};

				class ACE_ArmRight {
					class Morphine;
					class Morphine_Medic {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};

				class ACE_LegLeft {
					class Morphine;
					class Morphine_Medic {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 100mcg/2mL";
						condition="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};

				class ACE_LegRight {
					class Morphine;
					class Morphine_Medic {
						displayName="Morphine 10mg/1mL";
						condition="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Morphine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Epinephrine;
					class Epinephrine_Medic : Epinephrine {
						epinephrinedisplayName="Epinephrine 1mg/1mL";
						condition="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Epinephrine_Medic'] call ace_medical_fnc_treatment";
						icon="socomd_data_core\icon\VPN.paa";
					};
					class Fentanyl: Morphine {
						displayName="Fentanyl 100mcg/2mL";
						condition="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Ket: Fentanyl {
						displayName="Ket 6mcg/2mL";
						condition="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Ket'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine {
						displayName="Naloxone 1.6mg/4mL";
						condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
					};
				};
			};
		};
	};