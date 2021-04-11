class SOCOMD_booboo: ACE_ItemCore {
	displayName="Blue Force Gear Boo Boo Kit";
	scope = 2;
	descriptionShort="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
	descriptionUse="Contains: Wiggles bandaids, iodine, dental hygiene, elctrolytes, jelly beans and more";
	picture="\socomd_data_core\icon\extra\booboo_ca.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass=0.01;
	};
};
class SOCOMD_cascard: SOCOMD_booboo {
	scope = 2;
	displayName="TACMED Casualty Cards";
	picture="\socomd_data_core\icon\extra\cascard_ca.paa";
};
class SOCOMD_nargloves: SOCOMD_booboo {
	scope = 2;
	displayName="NAR Nitrile Gloves (Sand)";
	picture="\socomd_data_core\icon\extra\nargloves_ca.paa";
};
class SOCOMD_shears: SOCOMD_booboo {
	scope = 2;
	displayName="Trauma Shears";
	picture="\socomd_data_core\icon\extra\shears_ca.paa";
};
class SOCOMD_notes: SOCOMD_booboo {
	scope = 2;
	displayName="Notebook";
	descriptionShort="For recording patient details for handover";
	picture="\socomd_data_core\icon\extra\notes_ca.paa";
};
class SOCOMD_triangleban: SOCOMD_booboo {
	scope = 2;
	displayName="NAR Triangle Bandage";
	picture="\socomd_data_core\icon\extra\triangleban_ca.paa";
};
class SOCOMD_NDC: SOCOMD_booboo {
	scope = 2;
	displayName="ARS Needle for decompression";
	descriptionShort="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression";
	descriptionUse="Made by North American Rescue. 14 gauge needle for performing emergency chest decompression";
	picture="\socomd_data_core\icon\NDC.paa";
};