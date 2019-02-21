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
	};
};