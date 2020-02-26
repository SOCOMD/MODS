class SOCOMD_Void_Box : B_supplyCrate_F {
	scope = public;
	scopeCurator = public;
	editorCategory = EdCat_Supplies;
	editorSubcategory = SOCOMD_EdSubcat_Supply_SOCOMD;
	author = AUTHOR_STR;
	displayName = "Void Box";

	ace_cargo_hasCargo = 0;
	ace_cargo_canLoad = 0;
	ace_dragging_canDrag = 0;
	ace_dragging_canCarry = 0;

	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
	class TransportBackpacks {};
};