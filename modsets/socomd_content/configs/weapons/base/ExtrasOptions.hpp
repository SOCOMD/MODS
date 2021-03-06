class ItemMap: Default{
	ace_socomd_arsenal_hide = 1;
};

class ExtrasBase: ItemMap {
	scope = 0;
	ace_socomd_arsenal_hide = 0;
	uniform[] = {
	};
	vest[] = {
	};
	bag[] = {
	};
};
class extras_none : ExtrasBase{
	displayName = "No Spare Ammo"
	scope=2;
	scopeArsenal = 2;
	picture = "";
};
class extras_spare_squad_ammo: extras_none{
	displayName = "Squad Ammo"
	bag[] = {
		{SOCOMD_Item_Magazine_556x45_30Rnd, 4},
		{SOCOMD_Item_Magazine_762x51_20Rnd, 2},
		{SOCOMD_Item_Magazine_556x45_200Rnd_Tracer,1}
	};
};
class extras_mg_support: extras_none{
	displayName = "Minimi Ammo"
	bag[] = {
		{SOCOMD_Item_Magazine_556x45_200Rnd_Tracer,3}
	};
};
class extras_medium_mg_support: extras_none{
	displayName = "Maximi Ammo"
	bag[] = {
		{SOCOMD_Item_Magazine_762x51_100Rnd_Tracer,3}
	};
};
class extras_heavy_mg_support: extras_none{
	displayName = "MAG58 Assitant"
	bag[] = {
		{SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,2}
	};
};
class extras_at_assistant_mixed: extras_none{
	displayName = "AT Assistant (mixed)"
	bag[] = {
		{tf47_m3maaws_HEAT,1},
		{tf47_m3maaws_HE,1}
	};
};
class extras_at_assistant_heat: extras_none{
	displayName = "AT Assistant (2x HEAT)"
	bag[] = {
		{tf47_m3maaws_HEAT,2}
	};
};