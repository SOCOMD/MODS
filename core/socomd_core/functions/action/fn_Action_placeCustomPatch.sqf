params["_player", "_new"];
_curentuniform = (_new select 3) select 0;
_curentuniform = _curentuniform splitstring "_";
_isUSP = ((_curentuniform select 0 == "USP") && (_curentuniform select 1 == "G3C"));
_patch = [_player] call SOCOMD_fnc_ActionCondition_getPlayerCustomPatch;
if (_isUSP) then {
    _ind = 8;
    if ("aus_ir_mc_co.paa" in ((getobjecttextures _player) select 8 )) then {
        _ind = 9;
    };
    
    _player setobjecttextureGlobal [_ind, _patch];
};