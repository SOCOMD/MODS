// ////////////////////////////////////////////////////////////////////////////
// Tactical Combat Link - I.Q. Settings
// ////////////////////////////////////////////////////////////////////////////
// The T.C.L. I.Q. settings are stored in the global array TCL_IQ.
// You can change T.C.L. I.Q. settings by editing the TCL_IQ array.
// For each custom T.C.L. I.Q. setting remove the "//" in front of the respective line and modify the value.
// Example: TCL_IQ set [Index, Value];
// In multiplayer all T.C.L. I.Q. settings are used by the server only.
// ////////////////////////////////////////////////////////////////////////////

// ==============================================================
// T.C.L. A.I. I.Q. Communication: ( Knowledge )
// ==============================================================
// Choose knowledge friendly A.I. group(s) need to have from each other to communicate with each other.
// Note: If this value was set to 4 A.I. group(s) are not able to communicate with each other.
// Description: A.I. group(s) communication includes enemy(s) reveal and enemy(s) synchronization between friendly A.I. group(s).
// 0 - 4, default is > 1 ( v.1.0.21 = 0 )
TCL_IQ set [0, 1];

// ------------------------------------------------------------
// T.C.L. A.I. I.Q. Communication: ( Distance )
// ------------------------------------------------------------
// Choose distance within friendly A.I. group(s) should be able to communicate with each other.
// Warning: If this value was set too high A.I. group(s) enemy(s) reveal and synchronization may will be end up in a chain reaction.
// 0 - 500, default is 100 meters
TCL_IQ set [1, 100];

// ==============================================================
// T.C.L. A.I. I.Q. Knowledge: ( Duration )
// ==============================================================
// Choose value of how fast A.I. group(s) should loose knowledge about their enemy(s) after loosing line of sight.
// Note: 0 = Very fast / 7 = Very slow
// Description: If this value was set to 0 A.I. group(s) without line of sight to their enemy(s) will almost instantly loose all their enemy(s) knowledge and enemy(s) position accuracy.
// 0 - 7, default is 3
TCL_IQ set [2, 1];