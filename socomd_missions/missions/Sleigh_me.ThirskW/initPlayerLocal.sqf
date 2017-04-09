cutText ["","BLACK OUT",0];
_cam = "camera" camCreate [4648,2844,.5];
_cam camPreload 5;
_cam camSetTarget screen;
sleep 1;
nul = execvm "airdrop.sqf";
sleep 3;
// CREATE cam AT BASE LOOKING AT BASE
1 fademusic 1; 
playmusic "music2";
cutText ["","BLACK IN",8];
	_cam camsetpos [4648,2844,5.5];
	_cam cameraEffect ["internal", "BACK"];
	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",8];
	_cam camCommit 8;
	waitUntil {camcommitted _cam};

// CAM SHOWS BASE
_cam camsetpos [4655,2853,45];
_cam camSetTarget cone;
_cam camCommit 8;
// NAME OF BASE

[      [format            
["FOB Blue Wake","<t align = 'center' shadow = '1' size = '0.5' 
font='TahomaB'>%1</t><br/><br/><br/>"],      
["Thirsk","<t align = 'center' shadow = '1' size = 
'0.5'>%1</t>"]    ], 0, 0, "<t align = 'center' 
shadow = '1' size = '1.0'>%1</t>" ] spawn 
BIS_fnc_typeText;
waitUntil {camcommitted _cam};
sleep 2;

// CAM MOVES TO PLAYER POS
	_cam camSetPos [position player select 0, position player select 1, (position player select 2) -300];
	_cam camCommit 3;
	waitUntil {camcommitted _cam};

// destroy cam and go back to player control
	player cameraEffect ["terminate","back"];
 	camDestroy _cam;

sleep 10;

// Op name and author
	cutText ["Secret Santa Saviours - by Sharkie", "Plain", 4];
	0 cutFadeOut 3;