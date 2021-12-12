
// Edit these lines as needed

// Author
author = "SOCOMD HQ J4";

class Header {

// Game type, see (https://community.bistudio.com/wiki/Multiplayer_Game_Types) for valid options
gameType = Coop;

// Minimum Players, shouldn't need to change this
minPlayers = 1;

// Maximum Players, shouldn't need to change this
maxPlayers = 88;

};

// Include a picture to be used on mission select screen. To link to a picture in the mission pbo just include the filename and path relative to the mission folder, ie if "mypic.paa" is in the root mission folder (where the mission.sqm is) you would use "mypic.paa" if it was in a folder named "img" use "img\mypic.paa", etc...
//overviewPicture = "";

// Include a short description and units required to play the mission if nessisary
overviewText = "SOCOMD Mission<br />2CDO: 1st Platoon with HQ element and attachments<br /><br />SOLS: Pilots and co-pilots<br /><br />";

// This header text will be displayed as people are loading the mission
OnLoadName = "SOCOMD Mission";

// This description text will be displayed as people are loading the mission, keep it relatively short
OnLoadMission = "Dynamic Missions - Every deployment is unique.";

// You can use another picture here while it is loading, see "overviewPicture" above on how to include it
//loadScreen = "";
