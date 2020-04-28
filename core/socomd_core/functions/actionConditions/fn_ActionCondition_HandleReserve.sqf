_args = _this;
_player = _this select 0;
private _backpack = backpack _player;

_allowed = false ;
if ( _backpack == "" && (vehicle _player) isKindOf "ParachuteBase" &&  _player getVariable ["_hasReserve"]  )then {
    // Case where unit has just opened parachute and reserve should be added
    // _player addBackpackGlobal "SOCOMD_COS_PARACHUTE_RESERVE";
    _allowed = true; // Mark the parachute cuttable since reserve is present
} else {
    // Case where inventory has changed otherwise (including when reserve is added)
    private _backpackCfg = configFile >> "CfgVehicles" >> _backpack;
    private _hasReserve = getNumber (_backpackCfg >> "ace_hasReserveParachute") == 1;

    // Cache reserve parachute state and class when backpack changes
    _player setVariable ["_hasReserve", _hasReserve];
    if (_hasReserve) then {
        _player setVariable ["backpackClass",getText (_backpackCfg >> "ace_reserveParachute")];
    } else {
        _player setVariable ["backpackClass",""];
    };
};

_allowed;