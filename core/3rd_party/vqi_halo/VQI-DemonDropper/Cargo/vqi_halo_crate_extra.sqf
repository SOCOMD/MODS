// Spawn Extra Spec-Ops & Arsenal Crates
//
if (VQI_HINTS_HALO == 1) then { hint "crate_extra.sqf"; };
sleep 1;


private ["_start0"];

_start0 = [0,0,0];



if (isServer) then {

	if (VQI_XTRACRATE_GEN == 1) then {
		//BlackOps Crate
		if (!isNil "VQI_HALO_XHR1") then {
			VQI_SOF_Crate = "B_CargoNet_01_ammo_F" createVehicle _start0;
			VQI_SOF_Crate attachTo [VQI_HALO_XHR1,[3, -10, -1]]; 		//
			VQI_SOF_Crate allowDamage false;
		};
		
		
		if (!isNil "VQI_HALO_XC130") then {
			VQI_SOF_Crate = "B_CargoNet_01_ammo_F" createVehicle _start0;
			VQI_SOF_Crate attachTo [VQI_HALO_XC130,[5, -7, -4.7]]; 	// 
			VQI_SOF_Crate allowDamage false;
		};
		
		if (!isNil "VQI_HALO_MC130") then {
			VQI_SOF_Crate = "B_CargoNet_01_ammo_F" createVehicle _start0;
			VQI_SOF_Crate attachTo [VQI_HALO_MC130,[3, -2, -4.7]]; 	// 
			VQI_SOF_Crate allowDamage false;
		};
		
		
		if (!isNil "VQI_HALO_C17") then {
			VQI_SOF_Crate = "B_CargoNet_01_ammo_F" createVehicle _start0;
			VQI_SOF_Crate attachTo [VQI_HALO_C17,[3, -30, -2.6]];		//
			VQI_SOF_Crate allowDamage false;
		};

	
	
	

		ClearWeaponCargoGlobal VQI_SOF_Crate; 
		ClearMagazineCargoGlobal VQI_SOF_Crate;
		ClearItemCargoGlobal VQI_SOF_Crate;
		ClearBackpackCargoGlobal VQI_SOF_Crate;

		sleep 3;

		VQI_SOF_Crate addItemCargoGlobal ["U_B_GhillieSuit",2];

		VQI_SOF_Crate addItemCargoGlobal ["U_B_CombatUniform_mcam",4];
		VQI_SOF_Crate addItemCargoGlobal ["V_PlateCarrier3_rgr",4];
		VQI_SOF_Crate addItemCargoGlobal ["Vest_VQI_Rhino",2];
		VQI_SOF_Crate addItemCargoGlobal ["V_Tacvest_blk",4];
		VQI_SOF_Crate addItemCargoGlobal ["H_Booniehat_khk",6];

		VQI_SOF_Crate addBackpackCargoGlobal ["B_Carryall_khk",6];
		VQI_SOF_Crate addBackpackCargoGlobal ["B_Bergen_blk",6];

		VQI_SOF_Crate addItemCargoGlobal ["SatchelCharge_Remote_Mag",4];
		VQI_SOF_Crate addItemCargoGlobal ["DemoCharge_Remote_Mag",12];
		VQI_SOF_Crate addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",24];
		VQI_SOF_Crate addItemCargoGlobal ["APERSMine_Range_Mag",24];
		VQI_SOF_Crate addItemCargoGlobal ["APERSBoundingMine_Range_Mag",24];
		VQI_SOF_Crate addItemCargoGlobal ["APERSTripMine_Wire_Mag",24];
		VQI_SOF_Crate addItemCargoGlobal ["SLAMDirectionalMine_Wire_Mag",12];
		VQI_SOF_Crate addItemCargoGlobal ["ATMine_Range_Mag",6];
		VQI_SOF_Crate addItemCargoGlobal ["HandGrenade",96];

		VQI_SOF_Crate addItemCargoGlobal ["SmokeShell",48];
		VQI_SOF_Crate addItemCargoGlobal ["SmokeShellRed",24];
		VQI_SOF_Crate addItemCargoGlobal ["SmokeShellBlue",24];
		VQI_SOF_Crate addItemCargoGlobal ["SmokeShellGreen",24];
		VQI_SOF_Crate addItemCargoGlobal ["SmokeShellYellow",24];
		VQI_SOF_Crate addItemCargoGlobal ["SmokeShellPurple",24];
		VQI_SOF_Crate addItemCargoGlobal ["SmokeShellOrange",24];
		VQI_SOF_Crate addItemCargoGlobal ["Chemlight_Red",48];
		VQI_SOF_Crate addItemCargoGlobal ["Chemlight_Blue",48];
		VQI_SOF_Crate addItemCargoGlobal ["Chemlight_Green",48];
		VQI_SOF_Crate addItemCargoGlobal ["Chemlight_Yellow",48];
		sleep 1;
		VQI_SOF_Crate addItemCargoGlobal ["arifle_MX_Black_F",4];
		VQI_SOF_Crate addItemCargoGlobal ["arifle_MX_GL_Black_F",4];
		VQI_SOF_Crate addItemCargoGlobal ["arifle_MX_SW_Black_F",2];
		VQI_SOF_Crate addItemCargoGlobal ["arifle_MXC_Black_F",4];
		VQI_SOF_Crate addItemCargoGlobal ["arifle_MXM_Black_F",4];
		VQI_SOF_Crate addItemCargoGlobal ["srifle_EBR_F",2];
		VQI_SOF_Crate addItemCargoGlobal ["srifle_LRR_F",1];
		VQI_SOF_Crate addItemCargoGlobal ["hgun_PDW2000_F",6]; 
		VQI_SOF_Crate addItemCargoGlobal ["hgun_ACPC2_F",6];

		VQI_SOF_Crate addItemCargoGlobal ["launch_NLAW_F",2];
		VQI_SOF_Crate addItemCargoGlobal ["NLAW_F",2];

		VQI_SOF_Crate addItemCargoGlobal ["30Rnd_65x39_caseless_mag",96];
		VQI_SOF_Crate addItemCargoGlobal ["100Rnd_65x39_caseless_mag",96];
		VQI_SOF_Crate addItemCargoGlobal ["20Rnd_762x51_Mag",96];
		VQI_SOF_Crate addItemCargoGlobal ["7Rnd_408_Mag",24];
		VQI_SOF_Crate addItemCargoGlobal ["30Rnd_9x21_Mag",96];
		VQI_SOF_Crate addItemCargoGlobal ["9Rnd_45ACP_Mag",36];
		VQI_SOF_Crate addItemCargoGlobal ["3Rnd_HE_Grenade_shell",96];
		VQI_SOF_Crate addItemCargoGlobal ["3Rnd_UGL_FlareWhite_F",96];

		VQI_SOF_Crate addItemCargoGlobal ["muzzle_snds_H",6];
		VQI_SOF_Crate addItemCargoGlobal ["muzzle_snds_L",6];
		VQI_SOF_Crate addItemCargoGlobal ["muzzle_snds_ACP",6];

		VQI_SOF_Crate additemCargoGlobal ["acc_pointer_IR",6];
		VQI_SOF_Crate additemCargoGlobal ["acc_flashlight",6];
		VQI_SOF_Crate additemCargoGlobal ["optic_Hamr",6];
		VQI_SOF_Crate addItemCargoGlobal ["optic_ACO",6];
		VQI_SOF_Crate addItemCargoGlobal ["optic_SOS",2];
		VQI_SOF_Crate addItemCargoGlobal ["optic_DMS",6];
		VQI_SOF_Crate addItemCargoGlobal ["optic_TWS",1];
		VQI_SOF_Crate addItemCargoGlobal ["optic_NVS",2];
		VQI_SOF_Crate addItemCargoGlobal ["optic_MRCO",6];
		sleep 1;
		VQI_SOF_Crate additemCargoGlobal ["itemMap",6];
		VQI_SOF_Crate additemCargoGlobal ["itemWatch",6];
		VQI_SOF_Crate additemCargoGlobal ["itemCompass",6];
		VQI_SOF_Crate additemCargoGlobal ["itemRadio",6];
		VQI_SOF_Crate additemCargoGlobal ["itemGPS",16];

		VQI_SOF_Crate additemCargoGlobal ["MineDetector",6];
		VQI_SOF_Crate additemCargoGlobal ["NVGoggles_OPFOR",6];
		VQI_SOF_Crate additemCargoGlobal ["LaserDesignator",1];
		VQI_SOF_Crate addItemCargoGlobal ["LaserBatteries",1];
		VQI_SOF_Crate additemCargoGlobal ["Binocular",4];

		VQI_SOF_Crate additemCargoGlobal ["FirstAidKit",48];
		VQI_SOF_Crate additemCargoGlobal ["MedKit",4];
		VQI_SOF_Crate additemCargoGlobal ["ToolKit",4];
	};
	
	
	
	sleep 1;
	
	
	if (VQI_XTRACRATE_VA == 1) then {
		//Virtual Arsenal Crate XHR-1
		if (!isNil "VQI_HALO_XHR1") then {
			VQI_VA_Crate = "Land_Pallet_MilBoxes_F" createVehicle _start0;
			VQI_VA_Crate attachTo [VQI_HALO_XHR1,[-3, -10, -1.7]]; 	//
			VQI_VA_Crate allowDamage false;
			//["AmmoboxInit",VQI_VA_Crate] spawn BIS_fnc_arsenal;
			0 = ["AmmoboxInit",[VQI_VA_Crate,true]] spawn BIS_fnc_arsenal;
		};
		
		
		//Virtual Arsenal Crate XC-130
		if (!isNil "VQI_HALO_XC130") then {
			VQI_VA_Crate = "Land_Pallet_MilBoxes_F" createVehicle _start0;
			VQI_VA_Crate attachTo [VQI_HALO_XC130,[-4, -7, -5.1]]; 	//
			VQI_VA_Crate allowDamage false;
			//["AmmoboxInit",VQI_VA_Crate] spawn BIS_fnc_arsenal;
			0 = ["AmmoboxInit",[VQI_VA_Crate,true]] spawn BIS_fnc_arsenal;
		};
		
		
		//Virtual Arsenal Crate MC-130J
		if (!isNil "VQI_HALO_MC130") then {
			VQI_VA_Crate = "Land_Pallet_MilBoxes_F" createVehicle _start0;
			VQI_VA_Crate attachTo [VQI_HALO_MC130,[-3, -2, -5.20]]; 	//
			VQI_VA_Crate allowDamage false;
			//["AmmoboxInit",VQI_VA_Crate] spawn BIS_fnc_arsenal;
			0 = ["AmmoboxInit",[VQI_VA_Crate,true]] spawn BIS_fnc_arsenal;
		};
		
		
		//Virtual Arsenal Crate C-17
		if (!isNil "VQI_HALO_C17") then {
			VQI_VA_Crate = "Land_Pallet_MilBoxes_F" createVehicle _start0;
			VQI_VA_Crate attachTo [VQI_HALO_C17,[-3, -30, -3]]; 	//
			VQI_VA_Crate allowDamage false;
			//["AmmoboxInit",VQI_VA_Crate] spawn BIS_fnc_arsenal;
			0 = ["AmmoboxInit",[VQI_VA_Crate,true]] spawn BIS_fnc_arsenal;
		};
	};
	
	
	
sleep 1;
detach VQI_SOF_Crate; sleep 1;
VQI_SOF_Crate setVelocity [0, 0, 0.3];

sleep 1;
detach VQI_VA_Crate; sleep 1;
VQI_VA_Crate setVelocity [0, 0, 0.3];
};




//////////////////////
/* NOTES:

"arifle_MX_Black_F"
"arifle_MX_GL_Black_F"
"arifle_MX_SW_Black_F"
"arifle_MXC_Black_F"
"arifle_MXM_Black_F"
*/