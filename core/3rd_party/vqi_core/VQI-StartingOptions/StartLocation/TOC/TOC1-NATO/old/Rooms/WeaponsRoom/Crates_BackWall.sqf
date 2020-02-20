//
//
if (VQI_CORE_HINTS == 1) then { hint "Crates_BackWall.sqf"; };
sleep 1;

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,100,100];


//////////////////////////////////////////////////////////////////////
ammoBoxAe = "Box_East_Ammo_F" createVehicle _OpsCenterStart;
ammoBoxAe attachTo [WRTABLE_w1,[1.3,-2.8,-0.1]];
sleep 1;

// Assault Rifle (standard) //////////////////////////////////////////
clearWeaponCargoGlobal ammoBoxAe; clearMagazineCargoGlobal ammoBoxAe;
// Katiba 6.5mm
ammoBoxAe addItemCargoGlobal ["30Rnd_65x39_caseless_green",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_65x39_caseless_green_mag_Tracer",20];
// MX 6.5mm
ammoBoxAe addItemCargoGlobal ["30Rnd_65x39_caseless_mag",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_65x39_caseless_mag_Tracer",20];
// Mk20 5.56mm
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Green",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Yellow",20];
// TRG-20 5.56mm
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Green",20];
ammoBoxAe addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Yellow",20];




//////////////////////////////////////////////////////////////////////////////////////////////////
ammoBoxS = "Box_IND_WpsSpecial_F" createVehicle _OpsCenterStart;
ammoBoxS attachTo [WRTABLE_w1,[1.4,-0.9,-0.21]];
ammoBoxS setDir 90;
sleep 1;

// Marksmen/Sniper ///////////////////////////////////////////////////////////////////////////////
clearWeaponCargoGlobal ammoBoxS; clearMagazineCargoGlobal ammoBoxS; clearItemCargoGlobal ammoBoxS;
// Rahim 7.62mm
ammoBoxS addItemCargoGlobal ["10Rnd_762x54_Mag",20];
// Mk18 ABR 7.62mm
ammoBoxS addItemCargoGlobal ["20Rnd_762x51_Mag",20];
// MAR-10 .338 (8.6mm)
ammoBoxS addItemCargoGlobal ["10Rnd_338_Mag",20];
// ASP-1 Kir 12.7mm
ammoBoxS addItemCargoGlobal ["10Rnd_127x54_Mag",20];
// GM6 Lynx 12.7mm
ammoBoxS addItemCargoGlobal ["5Rnd_127x108_Mag",20];
ammoBoxS addItemCargoGlobal ["5Rnd_127x108_APDS_Mag",20];
// M320 LRR .408 (10.4mm)
ammoBoxS addItemCargoGlobal ["7Rnd_408_Mag",20];
// Cyrus 9.3mm
ammoBoxS addItemCargoGlobal ["10Rnd_93x64_DMR_05_Mag",20];
// Mk14 7.62mm
ammoBoxS addItemCargoGlobal ["20Rnd_762x51_Mag",20];




//////////////////////////////////////////////////////////////////
ammoBoxB = "Box_East_Wps_F" createVehicle _OpsCenterStart;
ammoBoxB attachTo [WRTABLE_w1,[1.5,1.3,-0.2]];
ammoBoxB setDir 103;
sleep 1;

// Medium Maching Gun / Battle Rifle / Pistol /////////////////////
clearWeaponCargoGlobal ammoBoxB; clearMagazineCargoGlobal ammoBoxB;
// Navid 9.3mm
ammoBoxB addItemCargoGlobal ["150Rnd_93x64_Mag",10];
// SPMG .338 (8.6mm)
ammoBoxB addItemCargoGlobal ["130Rnd_338_Mag",10];
// Mk-1 EMR 7.62mm
ammoBoxB addItemCargoGlobal ["20Rnd_762x51_Mag",20];
// ACP-C2 .45 (11.3mm)
ammoBoxB addItemCargoGlobal ["9Rnd_45ACP_Mag",10];
// P07 9mm
ammoBoxB addItemCargoGlobal ["16Rnd_9x21_Mag",10];
ammoBoxB addItemCargoGlobal ["30Rnd_9x21_Mag",10];
// 4-five .45 (11.3mm)
ammoBoxB addItemCargoGlobal ["11Rnd_45ACP_Mag",10];
// Zubr .45 (11.3mm)
ammoBoxB addItemCargoGlobal ["6Rnd_45ACP_Cylinder",10];
// Rook-40 9mm
ammoBoxB addItemCargoGlobal ["16Rnd_9x21_Mag",10];
ammoBoxB addItemCargoGlobal ["30Rnd_9x21_Mag",10];
// Flare Gun
ammoBoxB addItemCargoGlobal ["6Rnd_GreenSignal_F",5];
ammoBoxB addItemCargoGlobal ["6Rnd_RedSignal_F",5];
// RH 9mm 659
ammoBoxB addItemCargoGlobal ["RH_14Rnd_9x19_sw",10];



//////////////////////////////////////////////////////////////////////
ammoBoxAw = "Land_Box_AmmoOld_F" createVehicle _OpsCenterStart;
ammoBoxAw attachTo [WRTABLE_w1,[1.3,2.5,-0.1]];
sleep 1;

// Sub-Machine Gun / Special /////////////////////////////////////////
clearWeaponCargoGlobal ammoBoxAw; clearMagazineCargoGlobal ammoBoxAw;
// SDAR 5.56mm (underwater)
ammoBoxAw addItemCargoGlobal ["20Rnd_556x45_UW_Mag",20];
ammoBoxAw addItemCargoGlobal ["30Rnd_556x45_Stanag",20];
ammoBoxAw addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Red",20];
ammoBoxAw addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Green",20];
ammoBoxAw addItemCargoGlobal ["30Rnd_556x45_Stanag_Tracer_Yellow",20];
// PDW2000 9mm
ammoBoxAw addItemCargoGlobal ["30Rnd_9x21_Mag",20];
ammoBoxAw addItemCargoGlobal ["16Rnd_9x21_Mag",20];
// Vermin SMG .45 ACP (11.3mm)
ammoBoxAw addItemCargoGlobal ["30Rnd_45ACP_Mag_SMG_01",20];
ammoBoxAw addItemCargoGlobal ["30Rnd_45ACP_Mag_SMG_01_tracer_green",20];
// Sting 9mm
ammoBoxAw addItemCargoGlobal ["30Rnd_9x21_Mag",20];




///////////////////////////////////////////////////////////////////
ammoBoxM = "Box_NATO_Wps_F" createVehicle _OpsCenterStart;
ammoBoxM attachTo [WRTABLE_w1,[1.4,3.5,-0.2]];
ammoBoxM setDir 90;
sleep 1;

// Light Machine Gun / Assault Rifle (support) ////////////////////
clearWeaponCargoGlobal ammoBoxM; clearMagazineCargoGlobal ammoBoxM;
// Zafir 7.62mm
ammoBoxM addItemCargoGlobal ["150Rnd_762x54_Box",10];
ammoBoxM addItemCargoGlobal ["150Rnd_762x54_Box_Tracer",10];
// Mk200 6.5mm
ammoBoxM addItemCargoGlobal ["200Rnd_65x39_cased_Box",10];
ammoBoxM addItemCargoGlobal ["200Rnd_65x39_cased_Box_Tracer",10];
// MX SW 6.5mm
ammoBoxM addItemCargoGlobal ["100Rnd_65x39_caseless_mag",10];
ammoBoxM addItemCargoGlobal ["100Rnd_65x39_caseless_mag_Tracer",10];
ammoBoxM addItemCargoGlobal ["30Rnd_65x39_caseless_mag",20];
ammoBoxM addItemCargoGlobal ["30Rnd_65x39_caseless_mag_Tracer",20];
// MXM 6.5mm
ammoBoxM addItemCargoGlobal ["30Rnd_65x39_caseless_mag",20];
ammoBoxM addItemCargoGlobal ["30Rnd_65x39_caseless_mag_Tracer",20];



//hint "crates_backwall.sqf -END-";

// NOTES:
/*



*/