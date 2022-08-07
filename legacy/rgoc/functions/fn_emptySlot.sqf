
params ["_player", "_newHMD"];
_player unassignItem _newHMD;
if ( !(_newHMD in (uniformItems _player) ) && !(_newHMD in (vestItems _player) ) && !(_newHMD in (backpackItems _player) ) ) then {
    _pos = position player;
_pos set [1, (player getPos [0.5,0]) select 1];
 _wh = createVehicle ["GroundWeaponHolder", _pos, [], 0, "CAN_COLLIDE"]; 
_wh addItemCargo [_newHMD, 1];
};