// OpsCenter perspective (from door)
// R/-L, F/-B, U/-D
if (VQI_CORE_HINTS == 1) then { hint "opscenter_efx.sqf"; };
sleep 1;


/*
deleteVehicle OPC_EFX_lights1;
deleteVehicle OPC_EFX_lights1a;
deleteVehicle OPC_EFX_lights2;
deleteVehicle OPC_EFX_lights2a;
deleteVehicle OPC_EFX_lights3;
deleteVehicle OPC_EFX_lights3a;
deleteVehicle OPC_EFX_lights4;
deleteVehicle OPC_EFX_lights4a;
deleteVehicle OPC_EFX_lights5;
deleteVehicle OPC_EFX_lights5a;
deleteVehicle OPC_EFX_lights6;
deleteVehicle OPC_EFX_lights6a;
deleteVehicle OPC_EFX_lights7;
deleteVehicle OPC_EFX_lights7a;
sleep 1;
*/

private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100, 0];



if (sunormoon < 0.9) then {

	Hint "Lights ON";

	// Office Overhead Lighting - Door
	OPC_EFX_lights1 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights1 attachTo [OpsCenter,[1.6, 2.8, 0.5]];

	OPC_EFX_lights1a = "#lightPoint" createVehicleLocal position OPC_EFX_lights1;
	OPC_EFX_lights1a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights1a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights1a setLightBrightness 1;
	OPC_EFX_lights1a lightAttachObject [OPC_EFX_lights1, [0,0,0]];


	// Office Overhead Lighting	 - Briefing
	OPC_EFX_lights2 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights2 attachTo [OpsCenter,[-9.5, 2.8, 0.5]];

	OPC_EFX_lights2a = "#lightPoint" createVehicleLocal position OPC_EFX_lights2;
	OPC_EFX_lights2a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights2a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights2a setLightBrightness 1;
	OPC_EFX_lights2a lightAttachObject [OPC_EFX_lights2, [0,0,0]];
	sleep 1;


	//////////////////////////////////////////////////////////////////////////////
	// Office Overhead Lighting	 - BackRoom
	OPC_EFX_lights3 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights3 attachTo [OpsCenter,[13.85, 1.3, 0.5]];

	OPC_EFX_lights3a = "#lightPoint" createVehicleLocal position OPC_EFX_lights3;
	OPC_EFX_lights3a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights3a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights3a setLightBrightness 1;
	OPC_EFX_lights3a lightAttachObject [OPC_EFX_lights3, [0,0,0]];

	// Office Overhead Lighting	 - BackRoom
	OPC_EFX_lights6 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights6 attachTo [OpsCenter,[13.85, -3.3, 0.5]];

	OPC_EFX_lights6a = "#lightPoint" createVehicleLocal position OPC_EFX_lights6;
	OPC_EFX_lights6a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights6a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights6a setLightBrightness 1;
	OPC_EFX_lights6a lightAttachObject [OPC_EFX_lights6, [0,0,0]];
	//////////////////////////////////////////////////////////////////////////////


	// Office Overhead Lighting	 - Weapons Room
	OPC_EFX_lights4 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights4 attachTo [OpsCenter,[12.85, 7.9, 0]];

	OPC_EFX_lights4a = "#lightPoint" createVehicleLocal position OPC_EFX_lights4;
	OPC_EFX_lights4a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights4a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights4a setLightBrightness 1;
	OPC_EFX_lights4a lightAttachObject [OPC_EFX_lights4, [0,0,0]];


	// Office Overhead Lighting	 - Wepaons Room
	OPC_EFX_lights5 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights5 attachTo [OpsCenter,[9, 7.9, 0]];

	OPC_EFX_lights5a = "#lightPoint" createVehicleLocal position OPC_EFX_lights5;
	OPC_EFX_lights5a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights5a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights5a setLightBrightness 1;
	OPC_EFX_lights5a lightAttachObject [OPC_EFX_lights5, [0,0,0]];
	sleep 1;

	/*
	// Office Overhead Lighting	 - ?
	OPC_EFX_lights7 = "Sign_Sphere10cm_F" createVehicle _OpsCenterStart;
	OPC_EFX_lights7 attachTo [OpsCenter,[9, 8.9, 0]];

	OPC_EFX_lights7a = "#lightPoint" createVehicleLocal position OPC_EFX_lights7;
	OPC_EFX_lights7a setLightAmbient 	[255/255, 255/255, 255/255];  
	OPC_EFX_lights7a setLightColor  	[255/255, 215/255,  80/255];
	OPC_EFX_lights7a setLightBrightness 1;
	OPC_EFX_lights7a lightAttachObject [OPC_EFX_lights7, [0,0,0]];
	*/





	{hideObjectGlobal _x} forEach allMissionObjects "Helper_Base_F";

};








/*
{hideObject _x} forEach allMissionObjects "Helper_Base_F";

// Ops Center Lights
private ["_lightPos","_light"];
{
    _lightPos = _x;
    _light = "#lightPoint" createVehicleLocal (position _lightPos);
    _light setLightAmbient [0/255, 15/255, 15/255];   
    _light setLightColor [255/255, 215/255, 80/255];
    _light setLightBrightness 1.0;
    _light attachTo [OPC_EFX_lights1a, [0,0,0]];
    
} forEach [OPC_EFX_lights1a, OPC_EFX_lights1b];
*/