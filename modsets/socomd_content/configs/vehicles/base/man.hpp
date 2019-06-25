class Man;
class CAManBase: Man
{
	class ACE_Actions
	{
		class ACE_MainActions
		{
			class Medical
			{
				class ACE_Head
				{
					class fieldDressing;
					class Apap: fieldDressing
					{
						displayName="Give Paracetemol 1g";
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
					class Fentanyl: Morphine
					{
						displayName="Inject Fentanyl 100mcg/2mL (IM)";
						condition="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Fentanyl'] call ace_medical_fnc_treatment";
					};
					class Naloxone: Morphine
					{
						displayName="Inject Naloxone 1.6mg/4mL (IM)";
						condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
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
					};
					class Naloxone: Morphine
					{
						displayName="Inject Naloxone 1.6mg/4mL (IM)";
						condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
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
					};
					class Naloxone: Morphine
					{
						displayName="Inject Naloxone 1.6mg/4mL (IM)";
						condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
						statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
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
					};
					class Naloxone: Morphine
					{
						displayName="Inject Naloxone 1.6mg/4mL (IM)";
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
					displayName="Give Paracetemol 1g";
					condition="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'head', 'Apap'] call ace_medical_fnc_treatment";
					icon="socomd_data_core\icon\apap.paa";
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
				};
				class Naloxone: Morphine
				{
					displayName="Inject Naloxone 1.6mg/4mL (IM)";
					condition="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_l', 'Naloxone'] call ace_medical_fnc_treatment";
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
				};
				class Naloxone: Morphine
				{
					displayName="Inject Naloxone 1.6mg/4mL (IM)";
					condition="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'hand_r', 'Naloxone'] call ace_medical_fnc_treatment";
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
				};
				class Naloxone: Morphine
				{
					displayName="Inject Naloxone 1.6mg/4mL (IM)";
					condition="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_l', 'Naloxone'] call ace_medical_fnc_treatment";
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
				};
				class Naloxone: Morphine
				{
					displayName="Inject Naloxone 1.6mg/4mL (IM)";
					condition="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_canTreatCached";
					statement="[_player, _target, 'leg_r', 'Naloxone'] call ace_medical_fnc_treatment";
				};
			};
		};
		class ACE_Equipment
		{
            class SOCOMD_place_tent
		    {
		    	displayName="Camo net Green (Small)";
		    	condition="'SOCOMD_tent_item' in (items ACE_player)";
		    	exceptions[]=
		    	{
		    		"notOnMap",
		    		"isNotInside",
		    		"isNotHandcuffed",
		    		"isNotSurrendering",
		    		"isNotSwimming",
		    		"isNotOnLadder"
		    	};
		    	statement="['SOCOMD_tent_item', 'NDS_6x6_ATV_camnet_cam', '', false] call SOCOMD_fnc_Action_placePlaceables";
		    	icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		    	showDisabled=0;
		    	priority=2.7;
		    };

            class SOCOMD_place_tent_des
		    {
		    	displayName="Camo net Desert (Small)";
		    	condition="'SOCOMD_tent_item_des' in (items ACE_player)";
		    	exceptions[]=
		    	{
		    		"notOnMap",
		    		"isNotInside",
		    		"isNotHandcuffed",
		    		"isNotSurrendering",
		    		"isNotSwimming",
		    		"isNotOnLadder"
		    	};
		    	statement="['SOCOMD_tent_item_des', 'NDS_6x6_ATV_camnet_des', '', false] call SOCOMD_fnc_Action_placePlaceables";
		    	icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		    	showDisabled=0;
		    	priority=2.7;
		    };

            class SOCOMD_place_tent_sno
		    {
		    	displayName="Camo net Snow (Small)";
		    	condition="'SOCOMD_tent_item_sno' in (items ACE_player)";
		    	exceptions[]=
		    	{
		    		"notOnMap",
		    		"isNotInside",
		    		"isNotHandcuffed",
		    		"isNotSurrendering",
		    		"isNotSwimming",
		    		"isNotOnLadder"
		    	};
		    	statement="['SOCOMD_tent_item_sno', 'NDS_6x6_ATV_camnet_sno', '', false] call SOCOMD_fnc_Action_placePlaceables";
		    	icon="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
		    	showDisabled=0;
		    	priority=2.7;
		    };
			class NanoUAV_Deploy {
				displayName = "Deploy MicroUAV";
				condition = "'Nano_UAV_ITEM' in (items ACE_player)";
				exceptions[] = {};
				statement = "player removeItem 'Nano_UAV_ITEM';_MICROUAV = 'tut_R22' createVehicle (player modelToWorld [0,1,0]); createVehicleCrew _MICROUAV;";
				icon="\Black_Hornet_Nano_UAV\icon.paa";
			};
        };
    };
};