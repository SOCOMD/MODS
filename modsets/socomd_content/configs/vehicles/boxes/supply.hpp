class CargoNet_01_box_F;
class ReammoBox_F;

class B_supplyCrate_F : ReammoBox_F {
	class TransportMagazines;
	class TransportWeapons;
	class TransportItems;
	class TransportBackpacks;
};

class SOCOMD_Crate_Hasty : B_supplyCrate_F {
	class TransportMagazines : TransportMagazines {
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 4)
		TRANSPORT_MAGAZINE(SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 4)
		TRANSPORT_MAGAZINE(5Rnd_338LM_Magazine, 8)
		TRANSPORT_MAGAZINE(10Rnd_300WM_Magazine, 8)
	};
};

class SOCOMD_Supply_Empty : CargoNet_01_box_F {
	class TransportMagazines;
	class TransportWeapons;
	class TransportItems;
	class TransportBackpacks;
};

class SOCOMD_Supply_Ammo : SOCOMD_Supply_Empty {
	class TransportMagazines : TransportMagazines {
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 4)
		TRANSPORT_MAGAZINE(SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 4)
		TRANSPORT_MAGAZINE(5Rnd_338LM_Magazine, 8)
		TRANSPORT_MAGAZINE(10Rnd_300WM_Magazine, 8)
	};
};