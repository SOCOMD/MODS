
// Edit these lines as needed

// Author
author = "SOCOMD HQ";

class Header {

// Game type, see (https://community.bistudio.com/wiki/Multiplayer_Game_Types) for valid options
gameType = Coop;

// Minimum Players, shouldn't need to change this
minPlayers = 1;

// Maximum Players, shouldn't need to change this
maxPlayers = 88;

};

/*
    ----- Mission Selection Screen -----
*/

// Mission name displayed in the mission selection menu.
briefingName = "SOCOMD Altis Training Map";

// Path to image which will be displayed when the mission is highlighted on the mission selection screen.
// Image should be .paa format and in 2:1 aspect ratio – ideally 1024x512 (Arma 3).
overviewPicture = "images\intro.paa";

// Text to be displayed below the overviewPicture on the mission selection screen
overviewText = "SOCOMD's official training map. Contains areas specific for CBTC, Medical, Support and Air based training.";


/*
    ----- Mission Loading Screen -----
*/

// String (usually mission name) shown during mission loading.
// The string is shown in a slightly larger font above the loadScreen.
onLoadName = "SOCOMD Altis Training Map";

// You can define a picture to be shown while the mission is loaded.
// The path is relative to the mission folder.
loadScreen = "images\intro.paa";

// Displays a message while the mission is loading below the loadScreen picture.
onLoadMission = "SOCOMD's official training map.";