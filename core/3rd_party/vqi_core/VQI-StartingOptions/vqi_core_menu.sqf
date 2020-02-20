// player Menu Setup - One Key to rule them all
// All-In-One MENU Setup...Only 1 Key to memorize!
// color: #CC9933 (Dark Orange)


coreMENU1 = 0;	coreMENU2 = 0;	coreMENU3 = 0;	coreMENU4 = 0;	coreMENU5 = 0;	coreMENU6 = 0;	coreMENU7 = 0;	coreMENU8 = 0;	coreMENU9 = 0;
coreMENUA = 0;	coreMENUB = 0;	coreMENUC = 0;

coreMENUA = player addAction ["-"," "];
if ("VQI_Radio_LRSR_Gypsy" in BackpackItems player) 				then { coreMENU1 = player addAction ["<t color='#CC9933'>Radio/COMs - Gypsy9.11 LRSR</t>","vqi_core\VQI-StartingOptions\Support\vqi_core_supportradio.sqf"]; };
if ( isNil "coreHELI") then { if (VQI_CORE_SUPPORT_ITEM == 2) 		then { coreMENU2 = player addAction ["<t color='#CC9933'>HELI - Request Support/Pick-Up</t>","[player] execVM 'vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup_mapclick.sqf'"]; };};
if (!isNil "coreHELI") then { if (player distance coreHELI > 3) 	then { coreMENU3 = player addAction ["<t color='#CC9933'>HELI - R T B / Leave Area</t>","vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_rtb.sqf"]; };};
coreMENUB = player addAction ["-"," "];
coreMENU4 = player addAction ["<t color='#CC9933'>Explosive - Disarm/Turn OFF</t>","vqi_core\VQI-StartingOptions\PlayerOptions\vqi_core_tacticaldisarm.sqf"];
coreMENU5 = player addAction ["<t color='#CC9933'>Stand Down - Holster Weapon</t>",{ player action ["SwitchWeapon", player, player, 100]; } ];
coreMENU6 = player addAction ["<t color='#CC9933'>Friendly Fire - Inform you are BLUFOR</t>", { player sideChat "Friendly Fire!! Hold yer FIRE!"; player addRating 1000; } ];
coreMENU7 = player addAction ["<t color='#CC9933'>Medical - Injury Report</t>", "vqi_core\VQI-StartingOptions\Medical\vqi_core_medical_injuryreport.sqf"];
coreMENU8 = player addAction ["<t color='#CC9933'>Black-Ops - Covert Stealth Mode</t>","vqi_core\VQI-StartingOptions\CovertAction\vqi_core_covert_unarmed.sqf"];
coreMENUC = player addAction ["-"," "];
coreMENU9 = player addAction ["<t color='#CC9933'>POW - Attempt Capture</t>","vqi_core\VQI-StartingOptions\POW\vqi_core_pow.sqf"];




sleep 20;
player removeAction coreMENU1;
player removeAction coreMENU2;
player removeAction coreMENU3;
player removeAction coreMENU4;
player removeAction coreMENU5;
player removeAction coreMENU6;
player removeAction coreMENU7;
player removeAction coreMENU8;
player removeAction coreMENU9;

player removeAction coreMENUA;
player removeAction coreMENUB;
player removeAction coreMENUC;

/////////////////////
/* NOTES:
don't need execVM in addAction? -- kooky
removeAllActions player;

*/