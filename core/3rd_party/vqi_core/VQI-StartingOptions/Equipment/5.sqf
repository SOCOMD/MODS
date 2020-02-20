// ALL ADDONS - overrides parent exploit; inherent
// NEEDED to assign custom equipment in configs
hint "4.sqf";
sleep 1;

//(findDisplay 46) displayAddEventHandler ["KeyDown", "hint str _this;"];









// default is false, true will overide button, last
(findDisplay 46) displayAddEventHandler ["KeyDown",
{
	params ["_display", "_key", "_shift", "_ctrl", "_alt"];
	
	_handled = false; // default
	
	
	if (_key in actionKeys "showMap") then { 
		if !("ItemMap" in (assignedItems player)) then { _handled = true; };}; 									//blocked
		
	if (_key in actionKeys "compass") then { 
		if !("ItemCompass" in (assignedItems player)) then { showCompass false; } else { showCompass true; };};  	//blocked
		
	if (_key in actionKeys "watch") then { 
		if !("ItemWatch" in (assignedItems player)) then { showWatch false; } else { showWatch true; };}; 			//blocked		
	
	if !("ItemGPS" in (assignedItems player)) then {
		player enableInfoPanelComponent ["left", "MinimapDisplayComponent", false];		//hotfix?  move/option? 
		player enableInfoPanelComponent ["right","MinimapDisplayComponent", false];
	} else {
		player enableInfoPanelComponent ["left", "MinimapDisplayComponent", true]; 
		player enableInfoPanelComponent ["right","MinimapDisplayComponent", true]; 
	};
	
	
	_handled;	// must be last
}];

// choose between "no connect" or BOTH Map/GPS are required
// another glitchy, buggy, issue from BIS
// Maps and GPS are handled WRONG











/*	overide GPS manually?
player enableInfoPanelComponent ["left", "MinimapDisplayComponent", false]; 
player enableInfoPanelComponent ["right","MinimapDisplayComponent", false];
*/














////////////////
/* NOTES:


	showMap false;
	//showGPS false;		// inop, use panels (jets dlc)
	player enableInfoPanelComponent ["left", "MinimapDisplayComponent", false]; 
	player enableInfoPanelComponent ["right","MinimapDisplayComponent", false];
	showRadio false;
	showCompass false;
	showWatch false;		// conflict with LEAP, FROGS
	


	
	if ("ItemGPS" in (assignedItems player)) then {
	player enableInfoPanelComponent ["left", "MinimapDisplayComponent", false]; 
	player enableInfoPanelComponent ["right","MinimapDisplayComponent", false]; };
	
	if (_key in actionKeys "showRadio") then		
	{ if ("ItemRadio" in (assignedItems player)) then { showRadio false; }; };
	
	if (_key in actionKeys "compass") then			
	{ if ("ItemCompass" in (assignedItems player)) then { showCompass false; }; };
	
	if (_key in actionKeys "watch") then 			
	{ if ("ItemWatch" in (assignedItems player)) then { showWatch false; }; };
	
	
	
	
	if (_key in actionKeys "showMap" && "ItemGPS" in assignedItems player) then
	{
		hintSilent "You have a GPS";
		true;
	} else
	{
		hintSilent "You don't have a GPS";
	};
*/