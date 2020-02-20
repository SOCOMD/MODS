//
//
if (VQI_CORE_HINTS == 1) then { hint "startlocation.sqf"; };
sleep 1;




// Land: 1
if (VQI_CORE_STARTTYPE == 4) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\RandomLocation\vqi_core_randomlocation_land_1.sqf"; };

// Land: EACH
if (VQI_CORE_STARTTYPE == 5) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\RandomLocation\vqi_core_randomlocation_land_each.sqf"; };

// Building: 1
if (VQI_CORE_STARTTYPE == 6) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\RandomLocation\vqi_core_randomlocation_bldg_1.sqf"; };

// Building: EACH
if (VQI_CORE_STARTTYPE == 7) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\RandomLocation\vqi_core_randomlocation_bldg_each.sqf"; };

// Water: 1
if (VQI_CORE_STARTTYPE == 8) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\RandomLocation\vqi_core_randomlocation_water_1.sqf"; };

// Water: EACH
if (VQI_CORE_STARTTYPE == 9) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\RandomLocation\vqi_core_randomlocation_water_each.sqf"; };

// CampSite
if (VQI_CORE_STARTTYPE == 1) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\CampSite\vqi_core_campsite_s1_start.sqf"; };

// OpsCenter 1 - BASIC
if (VQI_CORE_STARTTYPE == 2) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\TOC\TOC1-NATO\vqi_core_toc1_setup.sqf"; };

// OpsCenter 2 - ADVANCED
if (VQI_CORE_STARTTYPE == 3) then { execVM "vqi_core\VQI-StartingOptions\StartLocation\TOC\TOC2-S20\vqi_core_toc2_setup.sqf"; };


// FOB


// USS Nimitz/Freedom


// Heli Infil


// ParaDrop













//////////////////////
/* NOTES:



*/