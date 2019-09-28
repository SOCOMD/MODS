class Man;
class CAManBase: Man
{
	class ACE_SelfActions
	{
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

			class slingHelmet {
				displayName="Sling Helmet";
				icon="socomd_data_core\UI_icons\helmet_ca.paa";
				priority=3;
				condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
				class slingLeft
				{
					displayName="Sling Left";
					icon="socomd_data_core\UI_icons\helmet_ca.paa";
					priority=3;
					condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
					statement="[_player, 'left'] call GEARF_fnc_slingHelmet";
				};
				class slingRight
				{
					displayName="Sling Right";
					icon="socomd_data_core\UI_icons\helmet_ca.paa";
					priority=3;
					condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
					statement="[_player, 'right'] call GEARF_fnc_slingHelmet";
				};
			};
			class unslingHelmet	{
				displayName="Unsling Helmet";
				icon="socomd_data_core\UI_icons\helmet_ca.paa";
				priority=3;
				condition="_player getVariable ['GEARF_HelmetAttached', false]";
				statement="[_player] call GEARF_fnc_unslingHelmet";
			};
        };
    };
	class EventHandlers {
		init="(_this select 0) setVariable ['GEARF_HelmetAttached', false]; (_this select 0) setVariable ['GEARF_HelmetAttachedClass','']; (_this select 0) setVariable ['GEARF_HelmetAdditionalClass',''];";
		killed="(_this select 0) setVariable ['GEARF_HelmetAttached', false]; (_this select 0) setVariable ['GEARF_HelmetAttachedClass','']; (_this select 0) setVariable ['GEARF_HelmetAdditionalClass',''];";
		getInMan="[(_this select 0), true] call GEARF_fnc_hideSlungHelmet";
		getOutMan="[(_this select 0), false] call GEARF_fnc_hideSlungHelmet;";
	};
};