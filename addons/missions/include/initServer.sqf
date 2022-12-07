// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
[] spawn {
    while {true} do {
    {deleteGroup _x} forEach allGroups;
    sleep 120;
    };
};

