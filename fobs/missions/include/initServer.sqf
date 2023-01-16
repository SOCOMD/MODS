// Infinate Loop, Fix Zeus group bug (will remove deleted groups so more can be added)
[] spawn {
    while {true} do {
    {deleteGroup _x} forEach allGroups;
    sleep 120;
    };
};

// ACE Spectator addAction to an object --> Last line, change "this" to variable name of object
_condition = {  
    true;  
};  
_statement = { 
    [true, false, true] call ace_spectator_fnc_setSpectator; 
}; 
_action = ["Enter Spectator","Enter Spectator","",_statement,_condition] call ace_interact_menu_fnc_createAction;  
["flagpoleSpectator", 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

// ACE Spectator addAction attempt to a class
// _condition = {  
//     true;  
// };  
// _statement = { 
//     [true, false, true] call ace_spectator_fnc_setSpectator; 
// }; 
// _action = ["Enter Spectator", "Enter Spectator", "", _statement, _condition] call ace_interact_menu_fnc_createAction; 
// ["Sign_F", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;