//
//


//
if (("Helmet_VQI_HALO" == Headgear player) && ("Vest_VQI_Stingray" == Vest player) && (("Uniform_VQI_Slipstream" == Uniform player) || ("U_B_Wetsuit" == Uniform player)) && ("SOCOMD_COS_PARACHUTE" == Backpack player)) then {

	33 cutText ["", "BLACK IN", 15];
	
	
	player switchCamera "INTERNAL"; 
	player attachTo [VQIHALO2,[0,13,-4.2]]; //MC-130J Commando II


	execVM "\vqi_halo\VQI-DemonDropper\vqi_efx_halo.sqf";
	sleep 1;
	
	detach player;
	sleep 3;
	
	// W-I-P Visual Range, Better Immersion? FPS Lag???
	
} else { //chat NOT working
	CrewMaster CommandChat "Equipment or Paperwork Missing! See the JumpMaster...";
};

	
	
	
/* NOTES:
(group _crewmaster) SetGroupID ["CrewMaster"];


*/