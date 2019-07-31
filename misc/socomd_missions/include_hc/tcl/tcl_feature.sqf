// ////////////////////////////////////////////////////////////////////////////
// Tacticla Combat Link - Feature Settings
// ////////////////////////////////////////////////////////////////////////////
// The T.C.L. Feature settings are stored in the global array TCL_Feature.
// You can change T.C.L. Feature settings by editing the TCL_Feature array.
// For each custom T.C.L. Feature setting remove the "//" in front of the respective line and modify the value.
// Example: TCL_Feature set [Index, Value];
// In multiplayer all T.C.L. Feature settings are used by the server only.
// ////////////////////////////////////////////////////////////////////////////

/* Legend:

1.) A.I. Combat Features:
-------------------------
* Heal ( v.1.0.31 )
* Flare
* Smoke
* Rearm ( v.1.0.31 )
* Flanking ( v.1.0.31 )
* Artillery
* Take Cover
* Cover to Cover ( v.1.0.31 )
* Weapon Detection ( v.1.0.27 )

2.) A.I. I.d.l.e. Features:
---------------------------
* Watch
* Garrison
*/

// ==============================================================
// T.C.L. A.I. Watch:
// ==============================================================
// True / False, default is True
TCL_Feature set [0, True];

// ------------------------------------------------------------
// T.C.L. A.I. Watch: ( Chance )
// ------------------------------------------------------------
// 0 - 100, default is 50%
TCL_Feature set [1, 75];

// ==============================================================
// T.C.L. A.I. Garrison:
// ==============================================================
// True / False, default is True
TCL_Feature set [2, True];

// ==============================================================
// T.C.L. A.I. Smoke: ( Man )
// ==============================================================
// True / False, default is True
TCL_Feature set [3, True];

// ------------------------------------------------------------
// T.C.L. A.I. Smoke: ( Chance )
// ------------------------------------------------------------
// 0 - 100, default is 50%
TCL_Feature set [4, 25];

// ==============================================================
// T.C.L. A.I. Smoke: ( Vehicles )
// ==============================================================
// True / False, default is True
TCL_Feature set [5, True];

// ------------------------------------------------------------
// T.C.L. A.I. Smoke: ( Chance )
// ------------------------------------------------------------
// 0 - 100, default is 75%
TCL_Feature set [6, 75];

// ==============================================================
// T.C.L. A.I. Flare:
// ==============================================================
// Choose if A.I. should be able to use flare(s) at night.
// True / False, default is True
TCL_Feature set [7, True];

// ------------------------------------------------------------
// T.C.L. A.I. Flare: ( Chance )
// ------------------------------------------------------------
// 0 - 100, default is 50%
TCL_Feature set [8, 50];

// ==============================================================
// T.C.L. A.I. Artillery:
// ==============================================================
// Choose if A.I. should be able to request artillery support.
// True / False, default is True
TCL_Feature set [9, True];

// ------------------------------------------------------------
// T.C.L. A.I. Artillery: ( Chance )
// ------------------------------------------------------------
// 0 - 100, default is 15%
TCL_Feature set [10, 5];

// ==============================================================
// T.C.L. A.I. Take Cover:
// ==============================================================
// Choose if A.I. should be able to use cover.
// True / False, default is True
TCL_Feature set [15, True];

// ------------------------------------------------------------
// T.C.L. A.I. Take Cover: ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. should be able to use cover.
// 0 - 100, default is 50%
TCL_Feature set [16, 50];

// ------------------------------------------------------------
// T.C.L. A.I. Take Cover: ( Distance )
// ------------------------------------------------------------
// Choose distance within A.I. should be able to search for cover.
// 10 - 100, default is 30 meters
TCL_Feature set [17, 50];

// ------------------------------------------------------------
// T.C.L. A.I. Take Cover: Cover to Cover ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. should be able to use cover to cover movement.
// 0 - 100, default is 50%
TCL_Feature set [18, 75];

// ------------------------------------------------------------
// T.C.L. A.I. Flanking:
// ------------------------------------------------------------
// Choose if A.I. should be able to use flanking movement.
// Note: This feature is part of the T.C.L. A.I. Take Cover feature. 
// True / False, default is True
TCL_Feature set [19, True];

// ------------------------------------------------------------
// T.C.L. A.I. Flanking: ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. group(s) should be able to use flanking movement.
// 0 - 100, default is 50%
TCL_Feature set [20, 33];

// ------------------------------------------------------------
// T.C.L. A.I. Flanking Type: ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. group(s) should be able to use flanking type movement.
// Single: This will split A.I. units(s) into 1 center and 1 flanking group(s).
// Double: This will split A.I. units(s) into 1 center and 1 left 1 right flanking group(s).
// 0 - 100, default is 50%
TCL_Feature set [21, 50];

// ==============================================================
// T.C.L. A.I. Weapon Fire Detection:
// ==============================================================
// Choose if A.I. should be able to detect weapon fire.
// True / False, default is True
TCL_Feature set [22, True];

// ------------------------------------------------------------
// T.C.L. A.I. Weapon Fire Detection: ( Suppressed )
// ------------------------------------------------------------
// Choose distance within A.I. should be able to detect suppressed weapons.
// 0 - 100, default is 15 meters
TCL_Feature set [23, 15];

// ------------------------------------------------------------
// T.C.L. A.I. Weapon Fire Detection: ( Grenade Launcher )
// ------------------------------------------------------------
// Choose distance within A.I. should be able to detect grenade launchers.
// 30 - 300, default is 50 meters
TCL_Feature set [24, 50];

// ------------------------------------------------------------
// T.C.L. A.I. Weapon Fire Detection: ( Rocket Launcher )
// ------------------------------------------------------------
// Choose distance within A.I. should be able to detect rocket launchers.
// 50 - 500, default is 300 meters
TCL_Feature set [25, 300];

// ------------------------------------------------------------
// T.C.L. A.I. Weapon Fire Detection: ( Default )
// ------------------------------------------------------------
// Choose distance within A.I. should be able to detect weapon types not listed above.
// 70 - 1000, default is 700 meters
TCL_Feature set [26, 700];

// ==============================================================
// T.C.L. A.I. Heal / Medic:
// ==============================================================
// Choose if A.I. should be able to self-heal or request medic support.
// True / False, default is True
TCL_Feature set [30, False];

// ------------------------------------------------------------
// T.C.L. A.I. Heal / Medic: ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. should be able to self-heal or request medic support.
// 0 - 100, default is 50%
TCL_Feature set [31, 0];

// ==============================================================
// T.C.L. A.I. Rearm:
// ==============================================================
// Choose if A.I. should be able to rearm.
// True / False, default is True
TCL_Feature set [32, True];

// ------------------------------------------------------------
// T.C.L. A.I. Rearm: ( Chance )
// ------------------------------------------------------------
// Choose chance of how A.I. should be able to rearm.
// 0 - 100, default is 50%
TCL_Feature set [33, 75];