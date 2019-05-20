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
        };
    };
};