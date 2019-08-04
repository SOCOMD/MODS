// ////////////////////////////////////////////////////////////////////////////
// Tacticla Combat Link - System Settings
// ////////////////////////////////////////////////////////////////////////////
// The T.C.L. System settings are stored in the global array TCL_System.
// You can change T.C.L. System settings by editing the TCL_System array.
// For each custom setting remove the "//" in front of the respective line and modify the value.
// Example: TCL_System set [Index, Value];
// In multiplayer all T.C.L. System settings will be synchronized by the server.
// ////////////////////////////////////////////////////////////////////////////

// ==============================================================
// T.C.L. Initialize: ( Delay )
// ==============================================================
// Choose if the initialize should be delayed.
// 0 - 50, default is 0 sconds
TCL_System set [0, 0];

// ==============================================================
// T.C.L. A.I.: ( System )
// ==============================================================
// Choose if the A.I. systems should be initialized.
// True / False, default is True
TCL_System set [1, True];

// ------------------------------------------------------------
// T.C.L. A.I. Side(s): ( Initialize )
// ------------------------------------------------------------
// Choose side(s) which should be initialized.
// [EAST, WEST, RESISTANCE, CIVILIAN], default is [EAST, WEST, RESISTANCE]
TCL_System set [2, [EAST, WEST, RESISTANCE] ];

// ------------------------------------------------------------
// T.C.L. A.I. Combat System: ( Initialize )
// ------------------------------------------------------------
// Choose ( False ) to initialize the A.I. combat system for A.I. vs player(s) and playableUnit(s) only.
// Choose ( True ) to initialize the A.I. combat system for A.I. vs A.I. and A.I. vs player(s) and playableUnit(s).
// True / False, default is True
TCL_System set [3, False];

// ------------------------------------------------------------
// T.C.L. A.I. Get In: ( System )
// ------------------------------------------------------------
// Choose if A.I. group(s) synchronized with empty vehicle(s) should be assigned automatically.
// True / False, default is True
TCL_System set [4, False];

// ------------------------------------------------------------
// T.C.L. A.I. Skills: ( System )
// ------------------------------------------------------------
// Choose if A.I. unit(s) should use advanced skills.
// True / False, default is True
TCL_System set [5, True];

// ------------------------------------------------------------
// T.C.L. A.I. Skills: ( Divider )
// ------------------------------------------------------------
// Choose A.I. unit(s) skill divider.
// Description: 0 = Highly skilled A.I. / 7 = ARMA 3 default skilled A.I.
// 0 - 7, default is 5
TCL_System set [6, 0];

// ------------------------------------------------------------
// T.C.L. A.I. Spawn: ( System )
// ------------------------------------------------------------
// Choose if spawned A.I. unit(s) A.I. group(s) and vehicle(s) should be initialized.
// True / False, default is True
TCL_System set [7, True];

// ------------------------------------------------------------
// T.C.L. A.I. Spawn: ( Delay )
// ------------------------------------------------------------
// Choose if initialize of spawned A.I. unit(s) A.I. group(s) and vehicle(s) should be delayed.
// 0 - 50, default is 0 seconds
TCL_System set [8, 0];

// ==============================================================
// T.C.L. Special FX: ( System )
// ==============================================================
// Choose if Special FX system should be used.
// True / False, default is True
TCL_System set [9, False];

// ==============================================================
// T.C.L. Player Respawn: ( System )
// ==============================================================
// Choose if player respawn system should be used.
// Note: Not too serious player respawn system mainly created for SP testing.
// True / False, default is False
TCL_System set [10, False];