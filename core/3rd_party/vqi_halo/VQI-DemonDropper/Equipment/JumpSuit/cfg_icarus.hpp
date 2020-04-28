//
//

class VQI_Jumpsuit_Icarus : Uniform_Base {
	displayName = "Icarus Tactical Jumpsuit";
	descriptionShort = "HALO/HAHO Thermal Insulated<br/>Onyx Black, Waterproof Gore-Tex";
	author = "R. Von Quest";
	scope = public;
	picture = "\vqi_halo\VQI-DemonDropper\Equipment\Jumpsuit\iconICARUS.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	
	class ItemInfo : UniformItem {
		uniformModel = "-"; // ?
		uniformClass = "VQI_HALO_Cadet"; 	//Who wear? Assigned? A3 Default?
		containerClass = "Supply240"; 		//Cargo Space - 80/100?
		mass = 60;
	};
};


//////////////////
/* NOTES:



*/