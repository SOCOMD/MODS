#include "script_component.hpp"
#include "defines.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Arsenal
[QUOTE(GVAR(camInverted)), "CHECKBOX", localize LSTRING(invertCameraSetting), localize LSTRING(settingCategory), false] call CBA_fnc_addSetting;
[QUOTE(GVAR(enableModIcons)), "CHECKBOX", [LSTRING(modIconsSetting), LSTRING(modIconsTooltip)], localize LSTRING(settingCategory), true] call CBA_fnc_addSetting;
[QUOTE(GVAR(fontHeight)), "SLIDER", [LSTRING(fontHeightSetting), LSTRING(fontHeightTooltip)], localize LSTRING(settingCategory), [1, 10, 4.5, 1]] call CBA_fnc_addSetting;
[QUOTE(GVAR(enableIdentityTabs)), "CHECKBOX", localize LSTRING(enableIdentityTabsSettings), localize LSTRING(settingCategory), true, true] call CBA_fnc_addSetting;

// Arsenal loadouts
[QUOTE(GVAR(allowDefaultLoadouts)), "CHECKBOX", [LSTRING(allowDefaultLoadoutsSetting), LSTRING(defaultLoadoutsTooltip)], localize LSTRING(settingCategory), true, true] call CBA_fnc_addSetting;
[QUOTE(GVAR(allowSharedLoadouts)), "CHECKBOX", localize LSTRING(allowSharingSetting), localize LSTRING(settingCategory), true, true] call CBA_fnc_addSetting;
[QUOTE(GVAR(EnableRPTLog)), "CHECKBOX", [LSTRING(printToRPTSetting), LSTRING(printToRPTTooltip)], localize LSTRING(settingCategory), false, false] call CBA_fnc_addSetting;

[QUOTE(GVAR(statsToggle)), {
    params ["_display", "_showStats"];

    private _statsCtrlGroupCtrl = _display displayCtrl IDC_statsBox;
    private _statsPreviousPageCtrl = _display displayCtrl IDC_statsPreviousPage;
    private _statsNextPageCtrl = _display displayCtrl IDC_statsNextPage;
    private _statsCurrentPageCtrl = _display displayCtrl IDC_statsCurrentPage;

    private _statsButtonCtrl = _display displayCtrl IDC_statsButton;
    private _statsButtonCloseCtrl = _display displayCtrl IDC_statsButtonClose;

    {
        _x ctrlShow (GVAR(showStats) && {_showStats});
    } forEach [
        _statsCtrlGroupCtrl,
        _statsPreviousPageCtrl,
        _statsNextPageCtrl,
        _statsCurrentPageCtrl,
        _statsButtonCloseCtrl
    ];

    _statsButtonCtrl ctrlShow (!GVAR(showStats) && {_showStats})
}] call CBA_fnc_addEventHandler;

[QUOTE(GVAR(statsButton)), {
    _this call FUNC(buttonStats);
}] call CBA_fnc_addEventHandler;

[QUOTE(GVAR(statsChangePage)), {
    _this call FUNC(buttonStatsPage);
}] call CBA_fnc_addEventHandler;


[QUOTE(GVAR(displayStats)), {
    _this call FUNC(handleStats);
}] call CBA_fnc_addEventHandler;

call FUNC(compileStats);
call FUNC(compileSorts);

[QUOTE(ADDON), {!isNil QGVAR(camera)}] call CBA_fnc_registerFeatureCamera;

// Compatibility with CBA scripted optics and dispoable framework
[QUOTE(GVAR(displayOpened)), {
    "cba_optics_arsenalOpened" call CBA_fnc_localEvent;
    "cba_disposable_arsenalOpened" call CBA_fnc_localEvent;
}] call CBA_fnc_addEventHandler;

[QUOTE(GVAR(displayClosed)), {
    "cba_optics_arsenalClosed" call CBA_fnc_localEvent;
    "cba_disposable_arsenalClosed" call CBA_fnc_localEvent;
}] call CBA_fnc_addEventHandler;

ADDON = true;
