class zen_context_menu_actions {
	class HealUnits {
		class Timer {
            displayName = "Reset Persistant Timer";
            condition = "[_objects,_args] call zen_context_actions_fnc_canHealUnits;";
            statement = "[_objects,_args] call SOCOMD_Medical_fnc_resetTimer;";
            icon = "\A3\ui_f\data\gui\keyframeanimation\iconcurve_ca.paa";
            args = 1;
        };
	};
};