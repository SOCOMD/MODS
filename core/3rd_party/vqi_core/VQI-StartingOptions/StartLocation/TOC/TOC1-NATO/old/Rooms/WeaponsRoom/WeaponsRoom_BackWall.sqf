//
//
if (VQI_CORE_HINTS == 1) then { hint "WeaponsRoom_BackWall.sqf"; };
sleep 1;


private ["_OpsCenterStart","_randomWeaponsTL","_randomWeapons1","_randomWeapons2","_randomWeapons3","_randomWeapons4","_randomWeapons5","_randomWeapons6",
		"_randomWeapons7","_randomWeapons8","_randomWeapons9","_randomWeapons10","_randomWeapons11","_randomWeapons12","_randomWeapons13","_randomWeapons14",
		"_randomWeapons15","_randomWeapons16a","_randomWeapons16b","_randomWeapons16c","_randomWeapons16d","_randomWeapons16e","_randomWeapons16f","_randomWeapons17",
		"_randomWeapons18","_randomWeapons19","_randomWeapons20","_randomWeapons21","_randomWeapons22","_randomWeapons23","_randomWeapons24"];

_OpsCenterStart = [-100,-100,100];



sleep 1;
//--------------------------------------------------------------------------------------------------------------------------
_randomWeaponsTL = ["SMG_02_ACO_F"] call bis_fnc_selectRandom;   	//Table on Left -- ?

// Katiba,  MX,  MK20,  TGR20
_randomWeapons1 = ["arifle_Katiba_GL_Nstalker_pointer_F","arifle_Katiba_C_F","arifle_Katiba_GL_F","arifle_Katiba_ARCO_F","arifle_Katiba_C_ACO_pointer_snds_F","arifle_Katiba_GL_ACO_pointer_F"] call bis_fnc_selectRandom; 	//Wall, Left-T1 -- CSAT
_randomWeapons2 = ["arifle_MXC_Black_F","arifle_MXC_Holo_F","arifle_MXC_SOS_point_snds_F","arifle_MX_RCO_pointer_snds_F","arifle_MX_GL_Black_F","arifle_MXC_Black_F","arifle_MX_Black_Hamr_pointer_F","arifle_MX_Black_F"] call bis_fnc_selectRandom; 		//Wall, Left-T2 -- NATO
_randomWeapons3 = ["arifle_Mk20_GL_MRCO_pointer_F","arifle_Mk20_plain_F","arifle_Mk20C_F","arifle_Mk20_GL_F","arifle_Mk20_MRCO_F"] call bis_fnc_selectRandom; 	//Wall, Left-T3 -- AAF
_randomWeapons4 = ["arifle_TRG21_F","arifle_TRG20_F","arifle_TRG21_GL_F","arifle_TRG20_Holo_F","arifle_TRG21_MRCO_F","arifle_TRG21_GL_ACO_pointer_F"] call bis_fnc_selectRandom; 	//Wall, Left-T4 -- X???

// Rahim,  MK18,  MAR-10,  ASP-1
_randomWeapons5 = ["srifle_DMR_01_DMS_snds_BI_F","srifle_DMR_01_F","srifle_DMR_01_ACO_F","srifle_DMR_01_MRCO_F","srifle_DMR_01_SOS_F","srifle_DMR_01_DMS_F","srifle_DMR_01_DMS_snds_F","srifle_DMR_01_ARCO_F"] call bis_fnc_selectRandom;
_randomWeapons6 = ["srifle_EBR_ARCO_pointer_F","srifle_EBR_F","srifle_EBR_ACO_F","srifle_EBR_MRCO_pointer_F","srifle_EBR_SOS_F","srifle_EBR_ARCO_pointer_snds_F","srifle_EBR_DMS_F","srifle_EBR_Hamr_pointer_F","srifle_EBR_DMS_pointer_snds_F"] call bis_fnc_selectRandom;
_randomWeapons7 = ["srifle_DMR_02_DMS_F","srifle_DMR_02_camo_F","srifle_DMR_02_sniper_F","srifle_DMR_02_SOS_F","srifle_DMR_02_sniper_AMS_LP_S_F","srifle_DMR_02_ARCO_F"] call bis_fnc_selectRandom;
_randomWeapons8 = ["srifle_DMR_04_MRCO_F","srifle_DMR_04_F","srifle_DMR_04_Tan_F","srifle_DMR_04_SOS_F","srifle_DMR_04_DMS_F","srifle_DMR_04_NS_LP_F","srifle_DMR_04_ARCO_F"] call bis_fnc_selectRandom;

// GM6 Lynx,  M320 LRR,  Cyrus,  Mk14
_randomWeapons9 = ["srifle_GM6_SOS_F","srifle_GM6_F","srifle_GM6_LRPS_F","srifle_GM6_camo_F","srifle_GM6_camo_SOS_F","srifle_GM6_camo_LRPS_F"] call bis_fnc_selectRandom;
_randomWeapons10 = ["srifle_LRR_LRPS_F","srifle_LRR_F","srifle_LRR_SOS_F","srifle_LRR_camo_F","srifle_LRR_camo_SOS_F","srifle_LRR_camo_LRPS_F"] call bis_fnc_selectRandom;
_randomWeapons11 = ["srifle_DMR_05_blk_F","srifle_DMR_05_hex_F","srifle_DMR_05_tan_F","srifle_DMR_05_SOS_F","srifle_DMR_05_DMS_F","srifle_DMR_05_KHS_LP_F","srifle_DMR_05_DMS_snds_F","srifle_DMR_05_ARCO_F"] call bis_fnc_selectRandom;
_randomWeapons12 = ["srifle_DMR_06_camo_khs_F","srifle_DMR_06_camo_F","srifle_DMR_06_olive_F"] call bis_fnc_selectRandom;

// Navid,  SPMG,  MK1 EMR
_randomWeapons13 = ["MMG_01_hex_ARCO_LP_F","MMG_01_hex_F","MMG_01_tan_F"] call bis_fnc_selectRandom;
_randomWeapons14 = ["MMG_02_black_F","MMG_02_camo_F","MMG_02_sand_F","MMG_02_sand_RCO_LP_F","MMG_02_black_RCO_BI_F"] call bis_fnc_selectRandom;
_randomWeapons15 = ["srifle_DMR_03_khaki_F","srifle_DMR_03_F","srifle_DMR_03_tan_F","srifle_DMR_03_multicam_F","srifle_DMR_03_woodland_F","srifle_DMR_03_SOS_F","srifle_DMR_03_tan_AMS_LP_F","srifle_DMR_03_DMS_snds_F","srifle_DMR_03_AMS_F"] call bis_fnc_selectRandom;

_randomWeapons16a = ["hgun_ACPC2_F","hgun_ACPC2_snds_F"] call bis_fnc_selectRandom;
_randomWeapons16b = ["hgun_P07_F","hgun_P07_snds_F"] call bis_fnc_selectRandom;
_randomWeapons16c = ["hgun_Pistol_heavy_01_F","hgun_Pistol_heavy_01_snds_F","hgun_Pistol_heavy_01_MRD_F"] call bis_fnc_selectRandom;
_randomWeapons16d = ["hgun_Pistol_heavy_02_F","hgun_Pistol_heavy_02_Yorris_F"] call bis_fnc_selectRandom;
_randomWeapons16e = ["hgun_Rook40_F","hgun_Rook40_snds_F"] call bis_fnc_selectRandom;
_randomWeapons16f = ["hgun_Pistol_Signal_F"] call bis_fnc_selectRandom;

_randomWeapons17 = ["arifle_SDAR_F"] call bis_fnc_selectRandom;
_randomWeapons18 = ["hgun_PDW2000_F","hgun_PDW2000_snds_F","hgun_PDW2000_Holo_snds_F","hgun_PDW2000_Holo_F"] call bis_fnc_selectRandom;
_randomWeapons19 = ["SMG_01_Holo_pointer_snds_F","SMG_01_F","SMG_01_Holo_F","SMG_01_ACO_F"] call bis_fnc_selectRandom;
_randomWeapons20 = ["SMG_02_ACO_F","SMG_02_F","SMG_02_ARCO_pointg_F"] call bis_fnc_selectRandom;

_randomWeapons21 = ["LMG_Zafir_F","LMG_Zafir_pointer_F","LMG_Zafir_ARCO_F"] call bis_fnc_selectRandom;
_randomWeapons22 = ["LMG_Mk200_MRCO_F","LMG_Mk200_F","LMG_Mk200_pointer_F"] call bis_fnc_selectRandom;
_randomWeapons23 = ["arifle_MX_SW_Black_Hamr_pointer_F","arifle_MX_SW_F","arifle_MX_SW_Hamr_F","arifle_MX_SW_Black_F"] call bis_fnc_selectRandom;
_randomWeapons24 = ["arifle_MXM_Black_F","arifle_MXM_F","arifle_MXM_RCO_pointer_snds_F","arifle_MXM_DMS_F",""] call bis_fnc_selectRandom;

//--------------------------------------------------------------------------------------------------------------------------
wHolder1 = createVehicle ["groundWeaponHolder",[getPosATL WRTABLE_3a select 0, getPosATL WRTABLE_3a select 1, 0.85], [], 0, "can_Collide"]; 
wHolder1 attachTo [WRTABLE_1a,[0, 0, 1.06]];   
wHolder1 addWeaponCargoGlobal [_randomWeaponsTL, 1];


// Table:  B/-F, -L/R, U/-D
wH_MW1 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW1 attachTo [WRTABLE_w1,[0.4, -3, 1.8]];   
wH_MW1 addWeaponCargoGlobal [_randomWeapons1, 1];
[wH_MW1,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW2 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW2 attachTo [WRTABLE_w1,[0.4, -3, 1.4]];   
wH_MW2 addWeaponCargoGlobal [_randomWeapons2, 1];
[wH_MW2,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW3 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW3 attachTo [WRTABLE_w1,[0.4, -3, 1]];   
wH_MW3 addWeaponCargoGlobal [_randomWeapons3, 1];
[wH_MW3,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW4 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW4 attachTo [WRTABLE_w1,[0.4, -3, 0.6]];   
wH_MW4 addWeaponCargoGlobal [_randomWeapons4, 1];
[wH_MW4,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw




// Table:  B/-F, -L/R, U/-D
wH_MW5 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW5 attachTo [WRTABLE_w1,[0.4, -1.5, 1.8]];   
wH_MW5 addWeaponCargoGlobal [_randomWeapons5, 1];
[wH_MW5,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW6 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW6 attachTo [WRTABLE_w1,[0.4, -1.5, 1.4]];   
wH_MW6 addWeaponCargoGlobal [_randomWeapons6, 1];
[wH_MW6,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW7 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW7 attachTo [WRTABLE_w1,[0.4, -1.5, 1]];   
wH_MW7 addWeaponCargoGlobal [_randomWeapons7, 1];
[wH_MW7,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW8 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW8 attachTo [WRTABLE_w1,[0.4, -1.5, 0.6]];   
wH_MW8 addWeaponCargoGlobal [_randomWeapons8, 1];
[wH_MW8,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw




// Table:  B/-F, -L/R, U/-D
wH_MW9 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW9 attachTo [WRTABLE_w1,[0.4, 0, 1.8]];   
wH_MW9 addWeaponCargoGlobal [_randomWeapons9, 1];
[wH_MW9,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW10 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW10 attachTo [WRTABLE_w1,[0.4, 0.1, 1.4]];   
wH_MW10 addWeaponCargoGlobal [_randomWeapons10, 1];
[wH_MW10,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW11 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW11 attachTo [WRTABLE_w1,[0.4, 0, 1]];   
wH_MW11 addWeaponCargoGlobal [_randomWeapons11, 1];
[wH_MW11,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW12 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW12 attachTo [WRTABLE_w1,[0.4, 0, 0.6]];   
wH_MW12 addWeaponCargoGlobal [_randomWeapons12, 1];
[wH_MW12,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw




// Table:  B/-F, -L/R, U/-D
wH_MW13 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW13 attachTo [WRTABLE_w1,[0.4, 1.5, 1.8]];   
wH_MW13 addWeaponCargoGlobal [_randomWeapons13, 1];
[wH_MW13,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW14 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW14 attachTo [WRTABLE_w1,[0.4, 1.5, 1.4]];   
wH_MW14 addWeaponCargoGlobal [_randomWeapons14, 1];
[wH_MW14,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW15 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW15 attachTo [WRTABLE_w1,[0.4, 1.4, 1]];   
wH_MW15 addWeaponCargoGlobal [_randomWeapons15, 1];
[wH_MW15,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

//----------------------------------------------------------------
wH_MW16a = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW16a attachTo [WRTABLE_w1,[0.4, 1, 0.7]];   
wH_MW16a addWeaponCargoGlobal [_randomWeapons16a, 1];
[wH_MW16a,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW16b = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW16b attachTo [WRTABLE_w1,[0.4, 1.4, 0.7]];   
wH_MW16b addWeaponCargoGlobal [_randomWeapons16b, 1];
[wH_MW16b,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW16c = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW16c attachTo [WRTABLE_w1,[0.4, 1.8, 0.7]];   
wH_MW16c addWeaponCargoGlobal [_randomWeapons16c, 1];
[wH_MW16c,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
//--
wH_MW16d = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW16d attachTo [WRTABLE_w1,[0.4, 1, 0.4]];   
wH_MW16d addWeaponCargoGlobal [_randomWeapons16d, 1];
[wH_MW16d,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW16e = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW16e attachTo [WRTABLE_w1,[0.4, 1.4, 0.4]];   
wH_MW16e addWeaponCargoGlobal [_randomWeapons16e, 1];
[wH_MW16e,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW16f = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW16f attachTo [WRTABLE_w1,[0.4, 1.8, 0.4]];   
wH_MW16f addWeaponCargoGlobal [_randomWeapons16f, 1];
[wH_MW16f,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
//-----------------------------------------------------------------



// Table:  B/-F, -L/R, U/-D
wH_MW17 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW17 attachTo [WRTABLE_w1,[0.4, 2.6, 1.8]];   
wH_MW17 addWeaponCargoGlobal [_randomWeapons17, 1];
[wH_MW17,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW18 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW18 attachTo [WRTABLE_w1,[0.4, 2.6, 1.4]];   
wH_MW18 addWeaponCargoGlobal [_randomWeapons18, 1];
[wH_MW18,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW19 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW19 attachTo [WRTABLE_w1,[0.4, 2.6, 1]];   
wH_MW19 addWeaponCargoGlobal [_randomWeapons19, 1];
[wH_MW19,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW20 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW20 attachTo [WRTABLE_w1,[0.4, 2.6, 0.6]];   
wH_MW20 addWeaponCargoGlobal [_randomWeapons20, 1];
[wH_MW20,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw




// Table:  B/-F, -L/R, U/-D
wH_MW21 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW21 attachTo [WRTABLE_w1,[0.4, 4, 1.8]];   
wH_MW21 addWeaponCargoGlobal [_randomWeapons21, 1];
[wH_MW21,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW22 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW22 attachTo [WRTABLE_w1,[0.4, 4, 1.4]];   
wH_MW22 addWeaponCargoGlobal [_randomWeapons22, 1];
[wH_MW22,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW23 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW23 attachTo [WRTABLE_w1,[0.4, 4, 1]];   
wH_MW23 addWeaponCargoGlobal [_randomWeapons23, 1];
[wH_MW23,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_MW24 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_MW24 attachTo [WRTABLE_w1,[0.4, 4, 0.6]];   
wH_MW24 addWeaponCargoGlobal [_randomWeapons24, 1];
[wH_MW24,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw






////// LAUNCHERS /////////////////////////////////////////////////
wH_L1 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_L1 attachTo [WRTABLE_w1,[0.47, -2.5, 2.4]];   
wH_L1 addWeaponCargoGlobal ["launch_RPG32_F", 1];
[wH_L1,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_L2 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_L2 attachTo [WRTABLE_w1,[0.47, -0.4, 2.4]];   
wH_L2 addWeaponCargoGlobal ["launch_Titan_short_F", 1];
[wH_L2,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_L3 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_L3 attachTo [WRTABLE_w1,[0.47, 1.3, 2.4]];   
wH_L3 addWeaponCargoGlobal ["launch_Nlaw_F", 1];
[wH_L3,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw

wH_L4 = "groundWeaponHolder" createVehicle _OpsCenterStart; 
wH_L4 attachTo [WRTABLE_w1,[0.47, 3.3, 2.4]];   
wH_L4 addWeaponCargoGlobal ["launch_Titan_F", 1];
[wH_L4,[90,0,90]] call VQI_fnc_SetPitchBankYaw; // pitch, bank, yaw
//////////////////////////////////////////////////////////////////
sleep 1;



// Table:  B/-F, -L/R, U/-D
////// Misc /////////////////////////////////////////////////////
StovePipe = "B_Mortar_01_F" createVehicle _OpsCenterStart;
StovePipe attachTo [WRTABLE_w1,[1.3,4.2,0.35]];

//AmmoBox1 = "Land_Ammobox_rounds_F" createVehicle _OpsCenterStart;
//AmmoBox1 attachTo [WRTABLE_w1,[-0.3,-0.5,0.54]];




//////////////////////////////////////////////////////////////////