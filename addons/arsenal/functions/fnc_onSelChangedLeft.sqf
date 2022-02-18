#include "script_component.hpp"
#include "..\defines.hpp"
/*
 * Author: Alganthe
 * Handles selection changes on the left panel.
 *
 * Arguments:
 * 0: Left panel control <CONTROL>
 * 1: Left panel selection <SCALAR>
 *
 * Return Value:
 * None
 *
 * Public: No
*/

params ["_control", "_curSel"];

if (_curSel < 0) exitwith {};

private _ctrlIDC = ctrlIDC _control;
private _display = ctrlParent _control;
private _item = [_control lnbData [_curSel, 0], _control lbData _curSel] select !(ctrlType _control == 102);

private _weaponDefaultRightPanel = _display displayCtrl IDC_buttonOptic;
private _selectCorrectPanelWeapon = [_weaponDefaultRightPanel, _display displayCtrl GVAR(currentRightPanel)] select (!isNil QGVAR(currentRightPanel) && {GVAR(currentRightPanel) in [RIGHT_PANEL_ACC_IDCS, IDC_buttonCurrentMag, IDC_buttonCurrentMag2]});

private _containerDefaultRightPanel = _display displayCtrl IDC_buttonMisc;
private _selectCorrectPanelContainer = [_containerDefaultRightPanel, _display displayCtrl GVAR(currentRightPanel)] select (!isNil QGVAR(currentRightPanel) && {GVAR(currentRightPanel) in [RIGHT_PANEL_ITEMS_IDCS]});

private _fnc_clearPreviousWepMags = {
    private _compatibleMags = getArray (configfile >> "cfgweapons" >> _baseWeapon >> "magazines");
    {
        GVAR(center) removeMagazines _x;
    } foreach _compatibleMags;

    GVAR(currentItems) set [15, uniformItems GVAR(center)];
    GVAR(currentItems) set [16, vestItems GVAR(center)];
    GVAR(currentItems) set [17, backpackItems GVAR(center)];
};

switch (GVAR(currentLeftPanel)) do {

    case IDC_buttonPrimaryWeapon : {
        private _baseWeapon = ((GVAR(currentItems) select 0) call bis_fnc_baseWeapon);

        if (_item == "") then {
            call _fnc_clearPreviousWepMags;

            GVAR(center) removeWeapon (primaryWeapon GVAR(center));
            GVAR(currentItems) set [18, ["", "", "", "", "", ""]];
            GVAR(currentItems) set [0, _item];

            TOGGLE_RIGHT_PANEL_HIDE
        } else {
            if ((GVAR(currentItems) select 0) != _item && {_baseWeapon != _item}) then {
                call _fnc_clearPreviousWepMags;

                private _compatibleItems = (_item call bis_fnc_compatibleItems) apply {tolower _x};
                private _cfgMags = configFile >> "CfgMagazines";
                private _compatibleMags = ([_item, true] call CBA_fnc_compatibleMagazines) select { getNumber (_cfgMags >> _x >> "scope") == 2 };
                GVAR(center) addWeapon _item;
                if (_compatibleMags isNotEqualTo []) then {
                    GVAR(center) addWeaponItem [_item, [_compatibleMags select 0]];
                };

                {
                    if (tolower _x in _compatibleItems || {_x in _compatibleMags}) then {
                        GVAR(center) addPrimaryWeaponItem _x;
                    };
                } foreach (GVAR(currentItems) select 18);

                private _primaryMags = primaryWeaponMagazine GVAR(center);
                GVAR(currentItems) set [18, (primaryWeaponItems GVAR(center)) + ([_primaryMags + [""], _primaryMags] select (count _primaryMags > 1))];
                GVAR(currentItems) set [0, _item];
            };

            TOGGLE_RIGHT_PANEL_WEAPON
            [_display, _selectCorrectPanelWeapon] call FUNC(fillRightPanel);
        };

        call FUNC(showItem);
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonHandgun : {
        private _baseWeapon = ((GVAR(currentItems) select 2) call bis_fnc_baseWeapon);

        if (_item == "") then {
            call _fnc_clearPreviousWepMags;

            GVAR(center) removeWeapon (handgunWeapon GVAR(center));
            GVAR(currentItems) set [18, ["", "", "", "", "", ""]];
            GVAR(currentItems) set [2, _item];

            TOGGLE_RIGHT_PANEL_HIDE
        } else {
            if ((GVAR(currentItems) select 2) != _item && {_baseWeapon != _item}) then {
                call _fnc_clearPreviousWepMags;

                private _compatibleItems = (_item call bis_fnc_compatibleItems) apply {tolower _x};
                private _cfgMags = configFile >> "CfgMagazines";
                private _compatibleMags = ([_item, true] call CBA_fnc_compatibleMagazines) select { getNumber (_cfgMags >> _x >> "scope") == 2 };
                GVAR(center) addWeapon _item;
                if (_compatibleMags isNotEqualTo []) then {
                    GVAR(center) addWeaponItem [_item, [_compatibleMags select 0]];
                };

                {
                    if (tolower _x in _compatibleItems || {_x in _compatibleMags}) then {
                        GVAR(center) addHandgunItem _x;
                    };
                } foreach (GVAR(currentItems) select 20);

                private _handgunMags = handgunMagazine GVAR(center);
                GVAR(currentItems) set [20, (handgunItems GVAR(center)) + ([_handgunMags + [""], _handgunMags] select (count _handgunMags > 1))];
                GVAR(currentItems) set [2, _item];
            };

            TOGGLE_RIGHT_PANEL_WEAPON
            [_display, [_selectCorrectPanelWeapon, _weaponDefaultRightPanel] select (GVAR(currentRightPanel) == IDC_buttonCurrentMag2)] call FUNC(fillRightPanel);
        };

        call FUNC(showItem);
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonSecondaryWeapon : {
        private _baseWeapon = ((GVAR(currentItems) select 1) call bis_fnc_baseWeapon);

        if (_item == "") then {
            call _fnc_clearPreviousWepMags;

            GVAR(center) removeWeapon (secondaryWeapon GVAR(center));
            GVAR(currentItems) set [18, ["", "", "", "", "", ""]];
            GVAR(currentItems) set [1, _item];
            TOGGLE_RIGHT_PANEL_HIDE
        } else {
            if ((GVAR(currentItems) select 1) != _item && {_baseWeapon != _item}) then {
                call _fnc_clearPreviousWepMags;

                private _compatibleItems = (_item call bis_fnc_compatibleItems) apply {tolower _x};
                private _cfgMags = configFile >> "CfgMagazines";
                private _compatibleMags = ([_item, true] call CBA_fnc_compatibleMagazines) select { getNumber (_cfgMags >> _x >> "scope") == 2 };
                GVAR(center) addWeapon _item;
                if (_compatibleMags isNotEqualTo []) then {
                    GVAR(center) addWeaponItem [_item, [_compatibleMags select 0]];
                };

                {
                    if (tolower _x in _compatibleItems || {_x in _compatibleMags}) then {
                        GVAR(center) addSecondaryWeaponItem _x;
                    };
                } foreach (GVAR(currentItems) select 19);

                private _secondaryMags = secondaryWeaponMagazine GVAR(center);
                GVAR(currentItems) set [19, (secondaryWeaponItems GVAR(center)) + ([_secondaryMags + [""], _secondaryMags] select (count _secondaryMags > 1))];
                GVAR(currentItems) set [1, _item];
            };

            TOGGLE_RIGHT_PANEL_WEAPON
            [_display, [_selectCorrectPanelWeapon, _weaponDefaultRightPanel] select (GVAR(currentRightPanel) == IDC_buttonCurrentMag2)] call FUNC(fillRightPanel);
        };

        call FUNC(showItem);
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonHeadgear : {

        if (_item == "") then {
            removeHeadgear GVAR(center);
            GVAR(currentItems) set [3, _item];
        } else {
            if ((GVAR(currentItems) select 3) != _item) then {
                GVAR(center) addHeadgear _item;
                GVAR(currentItems) set [3, _item];
            };
        };
        call FUNC(showItem);

        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonUniform : {
        if (_item == "") then {

            removeuniform GVAR(center);
            GVAR(currentItems) set [15, []];
            GVAR(currentItems) set [4, _item];
            TOGGLE_RIGHT_PANEL_HIDE
        } else {

            if ((GVAR(currentItems) select 4) != _item) then {
                GVAR(center) forceAddUniform _item;

                while {count uniformItems GVAR(center) > 0} do {
                    GVAR(center) removeItemFromUniform (uniformItems GVAR(center) select 0);
                }; //--- Remove default config contents

                {GVAR(center) addItemtoUniform _x} foreach (GVAR(currentItems) select 15);
                GVAR(currentItems) set [4, _item];

                [GVAR(center), ""] call bis_fnc_setUnitInsignia;
                [GVAR(center), GVAR(currentInsignia)] call bis_fnc_setUnitInsignia;
            };

            TOGGLE_RIGHT_PANEL_CONTAINER
            [_display, _selectCorrectPanelContainer] call FUNC(fillRightPanel);
        };

        call FUNC(showItem);
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonVest: {
        if (_item == "") then {

            removeVest GVAR(center);
            GVAR(currentItems) set [16, []];
            GVAR(currentItems) set [5, _item];
            TOGGLE_RIGHT_PANEL_HIDE
        } else {

            if ((GVAR(currentItems) select 5) != _item) then {
                GVAR(center) addVest _item;
                while {count vestItems GVAR(center) > 0} do {
                    GVAR(center) removeItemFromVest (VestItems GVAR(center) select 0);
                }; //--- Remove default config contents
                {GVAR(center) addItemToVest _x} foreach (GVAR(currentItems) select 16);

                GVAR(currentItems) set [5, _item];
            };

            TOGGLE_RIGHT_PANEL_CONTAINER
            [_display, _selectCorrectPanelContainer] call FUNC(fillRightPanel);
        };

        call FUNC(showItem);
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonBackpack : {
        if (_item == "") then {

            removeBackpack GVAR(center);
            GVAR(currentItems) set [17, []];
            GVAR(currentItems) set [6, _item];
            TOGGLE_RIGHT_PANEL_HIDE
        } else {

            if ((GVAR(currentItems) select 6) != _item) then {
                removeBackpack GVAR(center);
                GVAR(center) addBackpackGlobal _item;
                while {count backpackItems GVAR(center) > 0} do {
                    GVAR(center) removeItemFromBackpack (backpackItems GVAR(center) select 0);
                }; //--- Remove default config contents
                {GVAR(center) addItemToBackpack _x} foreach (GVAR(currentItems) select 17);

                GVAR(currentItems) set [6, _item];
            };

            TOGGLE_RIGHT_PANEL_CONTAINER
            [_display, _selectCorrectPanelContainer] call FUNC(fillRightPanel);
        };

        call FUNC(showItem);
        [_display, _control, _curSel, (configFile >> "CfgVehicles" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonGoggles : {
        if (_item == "") then {
            removeGoggles GVAR(center);
            GVAR(currentItems) set [7, _item];
        } else {
            if ((GVAR(currentItems) select 7) != _item) then {
                GVAR(center) addGoggles _item;
                GVAR(currentItems) set [7, _item];
            };
        };

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgGlasses" >> _item)] call FUNC(itemInfo);
    };

    
    case IDC_buttonNVG : {
        ACE_Player setVariable  ["socomd_arsenal_nvg", _item];
        _nvgArray = ["SOCOMD_NVG","SOCOMD_NVG_GR","SOCOMD_NVG_GPNVG_WP_black","SOCOMD_NVG_GPNVG_GR_black" , "SOCOMD_NVG_AM", "SOCOMD_NVG_B", "SOCOMD_NVG_GR_B", "SOCOMD_NVG_AM_B", "SOCOMD_NVG_C", "SOCOMD_NVG_GR_C", "SOCOMD_NVG_AM_C", "SOCOMD_NVG_GPNVG_WP_black", "SOCOMD_NVG_GPNVG_GR_black"];
        _unitLoadout = getUnitLoadout GVAR(center);
        if ((GVAR(currentItems) select 8) != "") then {
            // If item is attached, just changed the attached item
            if ((GVAR(currentItems) select 8) in _nvgArray) then {
                ACE_Player linkItem _item;
                GVAR(currentItems) set [8, _item];
            // else update all socomd NVG items in inventory
            } else {               
                _uniform = _unitLoadout select 3;
                _uniformLoadout = _bag select 1;
                _count = 0;
                {
                    _itemSelection = _x select 0;
                    if(_itemSelection in _nvgARray) then {   
                        _count = _count + 1;
                        _x set [0, _item];
                    };
                } forEach _uniformLoadout;
                _uniform set [1, _uniformLoadout];


                _vest = _unitLoadout select 4;
                _vestLoadout = _bag select 1;
                {
                    _itemSelection = _x select 0;
                    if(_itemSelection in _nvgARray) then {        
                        _count = _count + 1;                    
                        _x set [0, _item];
                    };
                } forEach _vestLoadout;
                _vest set [1, _vestLoadout];
                
                _bag = _unitLoadout select 5;
                _bagLoadout = _bag select 1;
                {
                    _itemSelection = _x select 0;
                    if(_itemSelection in _nvgARray) then {  
                        _count = _count + 1;                          
                        _x set [0, _item];
                    };
                } forEach _bagLoadout;
                if(_count == 0) then {
                    _bagLoadout pushBack [_item, 1]
                };
                _bag set [1, _bagLoadout];
                _unitLoadout set [3,_uniform];
                _unitLoadout set [4,_vest];
                _unitLoadout set [5,_bag];
                ACE_Player setUnitLoadout _unitLoadout;
            };
        };
        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };
    case IDC_buttonGrenadeLoadout : {
        if (_item != "") then {
            [ACE_Player] call FUNC(removeGrenades);
            [ACE_Player,_item] call FUNC(addSelection);
            ACE_Player setVariable  ["socomd_arsenal_grenade", _item];
        };
        // call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonMap : {
        ACE_Player setVariable  ["socomd_arsenal_extras", _item];
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonCompass : {
        if (_item == "") then {
            GVAR(center) unlinkItem (GVAR(currentItems) select 11) select 0;
            GVAR(currentItems) set [11, _item];
        } else {
            if ((GVAR(currentItems) select 11) != _item) then {
                GVAR(center) linkItem _item;
                GVAR(currentItems) set [11, _item];
            };
        };

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonRadio : {
        if (_item == "") then {
            GVAR(center) unlinkItem (GVAR(currentItems) select 12) select 0;
            GVAR(currentItems) set [12, _item];
        } else {
            if ((GVAR(currentItems) select 12) != _item) then {
                GVAR(center) linkItem _item;
                GVAR(currentItems) set [12, _item];
            };
        };

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonWatch : {
        if (_item == "") then {
            GVAR(center) unlinkItem (GVAR(currentItems) select 13);
            GVAR(currentItems) set [13, _item];
        } else {
            if ((GVAR(currentItems) select 13) != _item) then {
                GVAR(center) linkItem _item;
                GVAR(currentItems) set [13, _item];
            };
        };

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonGPS : {
        if (_item == "") then {
            GVAR(center) unlinkItem (GVAR(currentItems) select 14) select 0;
            GVAR(currentItems) set [14, _item];
        } else {
            if ((GVAR(currentItems) select 14) != _item) then {
                GVAR(center) linkItem _item;
                GVAR(currentItems) set [14, _item];
            };
        };

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgWeapons" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonFace : {
        private _face = [_item, "Default"] select (_item == "");

        GVAR(center) setFace _face;
        GVAR(currentFace) = _face;

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgFaces" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonVoice : {
        GVAR(center) setSpeaker _item;
        GVAR(currentVoice) = _item;

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE
        [_display, _control, _curSel, (configFile >> "CfgVoice" >> _item)] call FUNC(itemInfo);
    };

    case IDC_buttonInsignia : {
        [GVAR(center), _item] call bis_fnc_setUnitInsignia;
        GVAR(currentInsignia) = _item;

        call FUNC(showItem);
        TOGGLE_RIGHT_PANEL_HIDE

        private _unitInsigniaConfig = (configFile >> "CfgUnitInsignia" >> _item);

        if (configName _unitInsigniaConfig isEqualTo "") then {
            [_display, _control, _curSel, (missionConfigFile >> "CfgUnitInsignia" >> _item)] call FUNC(itemInfo);
        } else {
            [_display, _control, _curSel, _unitInsigniaConfig] call FUNC(itemInfo);
        };
    };
};

(_display displayCtrl IDC_totalWeightText) ctrlSetText (format ["%1 (%2)", [GVAR(center), 2] call EFUNC(common,getWeight), [GVAR(center), 1] call EFUNC(common,getWeight)]);
