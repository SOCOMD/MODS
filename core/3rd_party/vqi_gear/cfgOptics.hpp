//
//




class Binocular;				//
class Rangefinder;				//
class LaserDesignator;			//



// Binocular
class VQI_Optic_Binocular : Binocular {

	scope = 2;											// 1 = private, 2 = public
	scopeArsenal = 2;									// Arsenal
	author = "Von Quest Industries";					// mod creator
	
	displayName = "Monarch TAC3 7x50mm";				// basic display name
	descriptionShort = "Tactical Binoculars<br />Waterproof Mil-Spec, Rated -30m<br />Dielectric Multilayer Prism<br />Magnification: 2x-25x";			
	// 4x-12x
	
	opticsZoomInit = 0.2500;	//  1x					// ???												[0.0625]
	opticsZoomMax =  0.2500;	//  1x					// radians, Zoom OUT, 		(0.75 / X) / 3)			[0.0625]
	opticsZoomMin =  0.0100;	// 25x					// radians,	Zoom IN (max), 	(0.75 / X) / 3)			[0.0200]
	
	visionMode[] = {"Normal"};
	
	class WeaponSlotsInfo : WeaponSlotsInfo {
		mass = 4;
	};	
};





// Night Vision
class VQI_Optic_NightVision : Binocular {

	scope = 2;											// 1 = private, 2 = public
	scopeArsenal = 2;									// Arsenal
	author = "Von Quest Industries";					// mod creator
	
	displayName = "NightOwl STALKER NV-X";						// basic display name
	descriptionShort = "Night Vision Binoculars<br />Mil-Spec GEN IV Tubes<br />Operating Temp: -20°F - 110°F<br />Demist Shield / Anti-Fog<br />Magnification: 1x-12x";
	// 4x-12x
	
	opticsZoomInit = 0.5000;	//  1x					// ???	
	opticsZoomMax =  0.5000;	//  1x					// 
	opticsZoomMin =  0.0210;	// 12x					// 
	
	visionMode[] = {"NVG"};
	
	class WeaponSlotsInfo : WeaponSlotsInfo {
		mass = 6;
	};	
};




// Thermal Imaging
class VQI_Optic_ThermalImager : Binocular {

	scope = 2;											// 1 = private, 2 = public
	scopeArsenal = 2;									// Arsenal
	author = "Von Quest Industries";					// mod creator
	
	displayName = "THOR Recon One TI";					// basic display name
	descriptionShort = "50mm Thermal Imager<br />Rate: 30Hz / Range: 1500m<br />Diopter Adjustment Range<br />Picatinny Quick Release<br />Magnification: 3x";
	// 5x-25x
	
	opticsZoomMax =  0.0833;	//  3x					//
	opticsZoomMin =  0.0833;	//  3x					//
	
	visionMode[] = {"TI"};								// [Hot/Color] 
	thermalMode[] = {6};								// 1-WBlack, 2-BGreen, 3-WGreen, 4-BRed, 5-WRed, 6-BrightRed, 7-XRay, 8-BWhite 
	
	picture = "\A3\Weapons_F_Mark\Data\UI\gear_laserdesignator_ca.paa";
	model = "\A3\Weapons_F\Binocular\laserdesignator_f.p3d";
	modelOptics = "\A3\Weapons_F\Binocular\lasermarker_optics";
	
	class WeaponSlotsInfo : WeaponSlotsInfo {
		mass = 8;
	};
};




// Rangefinder
class VQI_Optic_Rangefinder : Rangefinder {

	scope = 2;											// 1 = private, 2 = public
	scopeArsenal = 2;									// Arsenal
	author = "Von Quest Industries";					// mod creator
	
	displayName = "RANGER Scout RF-III";				// basic display name
	descriptionShort = "6x40mm Rangefinder<br />Horizontal Component Distance<br />Battery: 100h / Digital Compass<br />Anti-Glare Scout/Sniper Coating<br />Magnification: 2.5x-15x";
	// 5x-25x
	
	opticsZoomMax =  0.1000;	//  2.5x				// 
	opticsZoomMin =  0.0170;	//  15x					// 
	
	visionMode[] = {"Normal"};
	
	class WeaponSlotsInfo : WeaponSlotsInfo {
		mass = 6;
	};
};





// Laser Designator
class VQI_Optic_LaserDesignator : LaserDesignator {

	scope = 2;											// 1 = private, 2 = public
	scopeArsenal = 2;									// Arsenal
	author = "Von Quest Industries";					// mod creator
	
	displayName = "Northrop SOFLAM PEQ-1C";					// basic display name
	descriptionShort = "Laser Acquisition Marker Designator<br />Dual Mode: Range/Mark<br />Wave: 1.064um / Pulse: 80mj<br />Magnification: 5x";
	// 5x-25x
	
	opticsZoomMax =  0.0500;	//  5x					// 
	opticsZoomMin =  0.0500;	//  5x					// 
	
	visionMode[] = {"Normal"};
	
	
	class WeaponSlotsInfo : WeaponSlotsInfo {
		mass = 20;
	};
};







	//class Binocular {scope = 1;};
	//class Rangefinder {scope = 1;};
	//class LaserDesignator {scope = 1;};







/////////////////////////////
/* NOTES:


*/