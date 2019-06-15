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

class SOCOMD_Supply_Sniper : SOCOMD_Supply_Empty {
	scope = public;
	author = AUTHOR_STR;
	displayName = "[SUPPLY] Sniper";
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Obj;

	accuracy = 1000;
	maximumLoad = 99999;
	weight = 20;

	transportMaxWeapons = 15000;
	transportMaxMagazines = 20000;
	transportMaxBackpacks = 100;

	ace_cargo_size = 8;
	ace_dragging_canDrag = 1;
	ace_dragging_canCarry = 0;
	ace_dragging_dragPosition[] = {0,1.5,0};
	class TransportMagazines : TransportMagazines {
		
		TRANSPORT_MAGAZINE(5Rnd_338LM_Magazine, 15)
		TRANSPORT_MAGAZINE(10Rnd_300WM_Magazine, 15)
		TRANSPORT_MAGAZINE(5Rnd_APDS_338LM_Magazine, 15)
		TRANSPORT_MAGAZINE(SOCOMD_Item_Magazine_556x45_30Rnd, 15)
	};
	class TransportWeapons {
		TRANSPORT_WEAPON(SMA_M4afgSTOCK, 2)
		TRANSPORT_WEAPON(Recon_338, 2)
		TRANSPORT_WEAPON(Recon_300WM, 2)
	};
	class TransportItems {
		TRANSPORT_ITEM(SOCOMD_tent_item, 5)
		TRANSPORT_ITEM(SOCOMD_tent_item_des, 5)
		TRANSPORT_ITEM(SOCOMD_tent_item_sno, 5)
		TRANSPORT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 8)
		TRANSPORT_ITEM(ACE_DefusalKit, 2)
		TRANSPORT_ITEM(ACE_M26_Clacker, 2)
		TRANSPORT_ITEM(ACE_FlareTripMine_Mag, 8)
		TRANSPORT_ITEM(ACE_Tripod, 4)
		TRANSPORT_ITEM(ACRE_PRC152, 4)
		TRANSPORT_ITEM(ACE_Kestrel4500, 4)
		TRANSPORT_ITEM(ACE_RangeCard, 4)
		TRANSPORT_ITEM(Laserdesignator, 2)
		TRANSPORT_ITEM(ACE_Vector, 2)
		TRANSPORT_ITEM(Laserbatteries, 4)
		TRANSPORT_ITEM(SOCOMD_Uniform_SleevesUp_Recon, 4)
	};
	class TransportBackpacks;
};