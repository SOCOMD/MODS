//
//




VQIALTIMETER = [] execVM "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter.sqf"; 

if (VQI_JB1WATCH_HALO == 1) then { sleep 2;  terminate VQIALTIMETER; terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; };
if (VQI_JB1WATCH_HALO == 2) then { sleep 10; terminate VQIALTIMETER; terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; };
if (VQI_JB1WATCH_HALO == 3) then { sleep 20; terminate VQIALTIMETER; terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; };
if (VQI_JB1WATCH_HALO == 4) then { sleep 30; terminate VQIALTIMETER; terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; };
if (VQI_JB1WATCH_HALO == 5) then { sleep 60; terminate VQIALTIMETER; terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; };
if (VQI_JB1WATCH_HALO == 6) then { sleep 90; terminate VQIALTIMETER; terminate JUMPBUDDY1; 2 cutText ["","PLAIN"]; };