// ////////////////////////////////////////////////////////////////////////////
// Tactical Combat Link - Tweak Settings
// ////////////////////////////////////////////////////////////////////////////
// The T.C.L. Tweak settings are stored in the global array TCL_Tweak.
// You can change T.C.L. Tweak settings by editing the TCL_Tweak array.
// For each custom T.C.L. Tweak setting remove the "//" in front of the respective line and modify the value.
// Example: TCL_Tweak set [Index, Value];
// In multiplayer all T.C.L. Tweak settings are used by the server only.
// ////////////////////////////////////////////////////////////////////////////

/* Description:

The T.C.L. Tweak settings are used to modify some of the main T.C.L. A.I. combat system values.
Most of the T.C.L. Tweak settings are base settings only used to dynamically calculate and modify the T.C.L. A.I. combat behaviours within the T.C.L. A.I. combat system.
This means some of the T.C.L. Tweak settings will be randomized by the T.C.L. A.I. combat system.

Warning: Changes of the T.C.L. Tweak settings may will extremely change your gameplay experiance!

*/

// ==============================================================
// T.C.L. A.I. Behaviour: ( Chance )
// ==============================================================
// Choose the chance between "AWARE" and "COMBAT" A.I. group(s) combat behaviour.
// Note: If this value was set to 100 A.I. group(s) will always use "AWARE" behaviour.
// 0 - 100, default is 0% ( v.1.0.27 = 35% )
TCL_Tweak set [0, 75];

// ==============================================================
// T.C.L. A.I. Push and Stop: ( Distance )
// ==============================================================
// Choose distance until A.I. group(s) should be able to push their enemy(s).
// Note: The lower this value the closer A.I. group(s) will be able to push straight to their enemy(s) position.
// Note: By default A.I. groups(s) will be able to push straight until they are within 300 meters to their enemy(s) position.
// 100 - 500, default is 300 meters
TCL_Tweak set [1, 300];

// ------------------------------------------------------------
// T.C.L. A.I. Push: ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. group(s) should be able to push their enemy(s) if within the T.C.L. A.I. Push and Stop: ( Distance ) defined above.
// Note: Higher value means higher chance of A.I. group(s) pushing their enemy(s).
// 0 - 100, default is 50% ( v.1.0.27 = 75% )
TCL_Tweak set [2, 75];

// ------------------------------------------------------------
// T.C.L. A.I. Push: ( Factor )
// ------------------------------------------------------------
// Choose A.I. group(s) push factor.
// Note: Higher value means A.I. group(s) will push closer and harder to their enemy(s) position.
// 0 - 10, default is 1 ( Try 0.3 - 0.7 )
TCL_Tweak set [3, 0.5];