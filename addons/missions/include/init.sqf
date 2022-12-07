enableSentences false;
enableRadio false;
enableSaving [false, false];

RHS_ENGINE_STARTUP_OFF = true;

// HALO Enable
//call{
//    HALOPOLE_1 addAction ["<t color='#ff9900'>HALO jump</t>", {call SSL_main_fnc_handleMapOpen;}];
//};

missionNamespace setVariable ["SOCOMD_InitComplete", 1];

// waitUntil { missionNamespace getVariable["SOCOMD_InitComplete", 0] == 1 };

// Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
finishMissionInit;
enableEnvironment [false, true];

// ACE Spectator addAction to an object --> Last line, change "this" to variable name of object
// _condition = {  
//     true;  
// };  
// _statement = { 
//     [true, false, true] call ace_spectator_fnc_setSpectator; 
// }; 
// _action = ["Enter Spectator","Enter Spectator","",_statement,_condition] call ace_interact_menu_fnc_createAction;  
// [this, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

// ACE Spectator addAction attempt to a class
// _condition = {  
//     true;  
// };  
// _statement = { 
//     [true, false, true] call ace_spectator_fnc_setSpectator; 
// }; 
// _action = ["Enter Spectator", "Enter Spectator", "", _statement, _condition] call ace_interact_menu_fnc_createAction; 
// ["Sign_F", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;