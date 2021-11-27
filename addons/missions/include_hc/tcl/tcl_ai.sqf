// ////////////////////////////////////////////////////////////////////////////
// Tacticla Combat Link - A.I. Settings
// ////////////////////////////////////////////////////////////////////////////
// The T.C.L. A.I. settings are stored in the global array TCL_AI.
// You can change T.C.L. A.I. settings by editing the TCL_AI array.
// For each custom T.C.L. A.I. setting remove the "//" in front of the respective line and modify the value.
// Example: TCL_AI set [Index, Value];
// In multiplayer all T.C.L. A.I. settings are used by the server only.
// ////////////////////////////////////////////////////////////////////////////

/* Legend:

1.) A.I. System:
----------------
* Reinforcement
* Additional
*
*/

/* Description:
Each A.I. group(s) initialized by T.C.L. will get a variable where all T.C.L. A.I. settings are stored in.
The variable can be accessed by using <group getVariable "TCL_AI"> without "< >".
This allowes mission designers to modify the T.C.L. A.I. settings for each A.I. group(s) individually.
*/

// ==============================================================
// T.C.L. A.I. Reinforcement Request: ( Knowledge )
// ==============================================================
// Choose knowledge A.I. group(s) need to have about their enemy(s) to requesting reinforcement(s).
// Note: If this value was set to 4 A.I. group(s) are not able to request reinforcement(s).
// 0 - 4.00, default is > 1
TCL_AI set [0, 1];

// ==============================================================
// T.C.L. A.I. Reinforcement Request Courage: ( Rating )
// ==============================================================
// Choose A.I. group(s) courage rating factor.
// Note: The lower this value the faster A.I. group(s) will be rated overpowered and request reinforcement(s).
// Example: By default A.I. group(s) with 4 A.I. unit(s) vs 1 enemy unit will not request reinforcement(s) but A.I. group(s) with 4 A.I. unit(s) vs 2 enemy unit(s) will request reinforcement(s).  
// 0.01 - 1.00, default is 0.15
TCL_AI set [1, 0.15];

// ==============================================================
// T.C.L. A.I. Reinforcement Request: ( Limit )
// ==============================================================
// Choose how many A.I. group(s) can be requested as reinforcement(s).
// 0 - 30, default is 3
TCL_AI set [2, 3];

/* Description:    
This section ( Additional ) is used to choose how A.I. group(s) which was not requested as reinforcement(s) but spotted enemy(s) already known by other friendly A.I. group(s) should behave.
*/

// ==============================================================
// T.C.L. A.I. Reinforcement Additional: ( Request )
// ==============================================================
// Choose ( True ) to allow every additional A.I. group(s) to request reinforcement(s) even if their enemy(s) are already known.
// Choose ( False ) to allow additional A.I. group(s) to request reinforcement(s) if their enemy(s) are NOT already known ONLY.
// True / False, default is False
TCL_AI set [3, False];

// ==============================================================
// T.C.L. A.I. Reinforcement Additional: ( Knowledge )
// ==============================================================
// Choose knowledge additional A.I. group(s) need to have about their enemy(s) to support the requested reinforcement(s) cycle.
// Note: If this value was set to 4 no additional A.I. group(s) besides the already requested A.I. group(s) will support the requested reinforcement(s).
// 0 - 4, default is 3
TCL_AI set [4, 3];

// ==============================================================
// T.C.L. A.I. Reinforcement Additional: ( Distance )
// ==============================================================
// Choose distance from within additional A.I. group(s) should be able to support the requested reinforcement(s) cycle.
// 100 - 3000, default is 700 meters
TCL_AI set [5, 700];

// ==============================================================
// T.C.L. A.I. Reinforcement Additional: ( Join )
// ==============================================================
// Choose ( True ) to allow additional A.I. group(s) which was not requested to join the requested reinforcement(s) cycle.
// Choose ( False ) to allow additional A.I. group(s) which was not requested to request reinforcement(s) even if their enemy(s) are already known.
// Note: A.I. group(s) which joined a requested reinforcement(s) cycle will retreat after loosing knowledge about their enemy(s).
// True / False, default is True
TCL_AI set [6, True];

// ==============================================================
// T.C.L. A.I. Disable: ( Move )
// ==============================================================
// Choose ( True ) to disable A.I. group(s) movement.
// Note: This will automatically disable the A.I. reinforcement request system as well.
// True / False, default is False
TCL_AI set [7, False];

// ==============================================================
// T.C.L. A.I. Disable: ( Reinforcement )
// ==============================================================
// Choose ( True ) to disable A.I. group(s) to request and be requested as reinforcement(s).
// True / False, default is False
TCL_AI set [8, False];

// ==============================================================
// T.C.L. A.I. Reinforcement: ( Regroup )
// ==============================================================
// Choose ( True ) to allow requested A.I. group(s) with less A.I. unit(s) to regroup with other requested A.I. group(s).
// True / False, default is True
TCL_AI set [9, True];

// ==============================================================
// T.C.L. A.I. Reinforcement: ( Cancel )
// ==============================================================
// Choose time of how long A.I. group(s) should search for their enemy(s) after loosing all knowledge about their enemy(s).
// 30 - 500, default is 170 seconds
TCL_AI set [10, 120];

// ==============================================================
// T.C.L. A.I. Reinforcement: ( Synchronize )
// ==============================================================
// Choose ( True ) to enable synchronizing of T.C.L. A.I. Settings from requesting A.I. group(s) to requested A.I. group(s).
// True / False, default is False
TCL_AI set [11, False];