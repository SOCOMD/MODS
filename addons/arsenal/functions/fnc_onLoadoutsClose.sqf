#include "script_component.hpp"
#include "..\defines.hpp"
/*
 * Author: Alganthe
 * onUnLoad EH for arsenal loadouts display.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
*/

GVAR(currentLoadoutsTab) = nil;

private _arsenalDisplay = findDisplay IDD_socomd_arsenal;
private _mouseBlockCtrl = _arsenalDisplay displayCtrl IDC_mouseBlock;

GVAR(loadoutsSearchbarFocus) = nil;
GVAR(loadoutsPanelFocus) =  nil;

_mouseBlockCtrl ctrlEnable false;
_mouseBlockCtrl ctrlCommit 0;

[_arsenalDisplay] call FUNC(buttonHide);

[QGVAR(loadoutsDisplayClosed), []] call CBA_fnc_localEvent;

[_arsenalDisplay , _arsenalDisplay displayCtrl GVAR(currentLeftPanel)] call FUNC(fillLeftPanel);
