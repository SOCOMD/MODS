#define INSURGENT skill=0.2;
#define MERCANARY skill=0.4;
#define ARMY skill=0.7;
#define SPECIAL_FORCES skill=1.0;

////////////////////////////////////////////////////////////////////////
// OPFOR
////////////////////////////////////////////////////////////////////////

// csat
class SoldierEB;
class O_Soldier_base_F : SoldierEB {
	ARMY
};

//fia 
class SoldierGB;
class I_G_Soldier_base_F : SoldierGB {
	ARMY
};
// African Muslim Insurgents
class O_Soldier_AR_F : O_Soldier_base_F {
	INSURGENT
};

// African rebels use Muslim insurgent bases and taki insurgents ("fuck you cup")

// Taki Insurgent
class SoldierWB;
class CUP_Creatures_Military_TKI_Insurgent_Base : SoldierWB {
	INSURGENT
};
// Taki Militia
class CUP_Creatures_Military_TK_Soldier_Base : SoldierWB {
	ARMY
};

// Middle eastern insurgents
class O_Soldier_F;
class O_Soldier_F_OCimport_01 : O_Soldier_F {
	INSURGENT
};

// Taki Army
class B_Soldier_base_F;
class CPC_Duala_O_NPFD_soldier_base : B_Soldier_base_F {
	ARMY
};

// chreno movement of the red star
class CUP_Creatures_Military_OPFINS_Soldier_Base : SoldierWB {
	MERCANARY
};

// russian federation
class CUP_Creatures_Military_RUS_Soldier_Base : SoldierWB {
	ARMY
};

//russian federation spetnaz autumn
class CUP_O_RUS_Soldier_07;
class CUP_O_RUS_Soldier_Autumn : CUP_O_RUS_Soldier_07 {
	SPECIAL_FORCES
};

// russian federation spetnaz summer
class CUP_O_RUS_Soldier_06;
class CUP_O_RUS_Soldier : CUP_O_RUS_Soldier_06 {
	SPECIAL_FORCES
};


// spetnaz
class O_R_Man_Base_F;
class O_R_Soldier_Base_F : O_R_Man_Base_F {
	SPECIAL_FORCES
};

// BELOW IS COMMENTED OUT AND VALUES DIRECTLY SET AS THE UNIT IS MADE IN THIS PBO
/*
// spetnaz alpha group
class SOCOMD_SSO_Unarmed : B_Soldier_02_f {
	SPECIAL_FORCES
};

// spetnaz vega group 
class SOCOMD_Vympel_Unarmed : B_Soldier_02_f {
	SPECIAL_FORCES
};

class CUP_CRYE_ATACSFG_Full;
class SOCOMD_Vympel_Soldier_Full : CUP_CRYE_ATACSFG_Full {
	SPECIAL_FORCES
};

class CUP_CRYE_ATACSFG_Roll;
class SOCOMD_Vympel_Soldier_Roll : CUP_CRYE_ATACSFG_Roll {
	SPECIAL_FORCES
};
*/
////////////////////////////////////////////////////////////////////////
// IND
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
// BLUEFOR
////////////////////////////////////////////////////////////////////////