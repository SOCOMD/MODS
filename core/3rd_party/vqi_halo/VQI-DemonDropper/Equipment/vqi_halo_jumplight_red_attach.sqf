// ChemLight to Left Ankle
// Track/Visual Option.......
if (VQI_HINTS_HALO == 1) then { hint "jumplight_red_attach.sqf"; };






jumpLightRED = "chemlight_red" createVehicle (position player); 
jumpLightRED attachTo [vehicle player,[-0.05,-0.09,0.1],"lankle"];