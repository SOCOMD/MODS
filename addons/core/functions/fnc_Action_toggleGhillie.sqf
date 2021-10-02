#include "script_component.hpp"
params ["_user","_toGhillie","_uniform"];

if(_toGhillie) then {
    _user setVariable ["SOCOMD_current_recon_uniform", (uniform _user)];
    [_user, _uniform] call FUNC(Action_ReplaceUniform);
} else {
    _newUniform = _user getVariable ["SOCOMD_current_recon_uniform", "USP_G3C_MC_RECON"];
    [_user, _newUniform] call FUNC(Action_ReplaceUniform);
};