//Inside Lighting for ground Plane

private ["_light"];



_light = "chemlight_blue" createVehicle (position player);
  
if (!isNull(VQI_HALO_XHR1)) 	then { _light attachTo [VQI_HALO_XHR1, [0, -4, 0.85]]; };
if (!isNull(VQI_HALO_MC130)) 	then { _light attachTo [VQI_HALO_MC130,[0,  4, -1.5]]; };
if (!isNull(VQI_HALO_XC130)) 	then { _light attachTo [VQI_HALO_XC130,[1.6,-4.5,-3.2]]; };
if (!isNull(VQI_HALO_C17)) 	then { _light attachTo [VQI_HALO_C17, [0, 9,-1.5]]; };

//