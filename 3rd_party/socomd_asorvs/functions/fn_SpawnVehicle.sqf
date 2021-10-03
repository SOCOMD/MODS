objNull spawn {
    sleep 1; //wait for client to be able to check vehicles positions properly again.
    _somedeleted =false;
    {
        if (_x != ASORVS_VehicleSpawnPoint) then {
            deleteVehicle _x;
        };
        _somedeleted =true;
    }
    forEach (ASORVS_VehicleSpawnPos nearEntities ASORVS_VehicleSpawnRadius);
    {
        if (_x != ASORVS_VehicleSpawnPoint) then {
            deleteVehicle _x;
        };
        _somedeleted =true;
    }
    forEach (ASORVS_VehicleSpawnPosASL nearEntities ASORVS_VehicleSpawnRadius);
    if(_somedeleted) then {
        sleep 1;
    };
    _veh = createVehicle [ASORVS_CurrentVehicle, ASORVS_VehicleSpawnPos, [], 0, "CAN_COLLIDE"];
    _veh setVehicleLock "UNLOCKED";
    _veh setDir ASORVS_VehicleSpawnDir;
    
    try
    {
        //REMOVED ACE FRIES, ADVANCED RAPPELLING USED INSTEAD
        [_veh] call ace_fastroping_fnc_equipFRIES
    }
    catch
    {
        //DO NOTHING
    };
    
    if (ASORVS_PosIsASL == "true") then {_veh setPosASL ASORVS_VehicleSpawnPosASL};
    
    // [objNull, _veh] call SOCOMD_fnc_ZeusAddObject;
};