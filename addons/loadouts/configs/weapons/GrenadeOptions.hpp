    
class Binocular : Default{
    socomd_arsenal_hide = 1;
};
class baseLodout : Binocular{
    scope = 0;
    socomd_arsenal_hide = 0;
    uniform[] = {
    };
    vest[] = {
    };
    bag[] = {
    };
    picture = "";
};
// generic roles
class grenades_default: baseLodout {
    scope = 2;
    scopeArsenal = 2;
    displayName = "Default";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        
        {HandGrenade, 2},
        {ACE_M84, 2},
        {SmokeShell, 5}
    };
};
class grenades_more_flash: grenades_default {
    
    displayName = "More flash, less smoke";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        
        {HandGrenade, 2},
        {ACE_M84, 5},
        {SmokeShell, 2}
    };
};
class grenades_less_lethal: grenades_default {
    displayName = "Less Lethal";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 1},
        {ACE_M84, 4},
        {SmokeShell, 4}
    };
};
// Sapper
class grenades_default_sapper: grenades_default {
    displayName = "Default";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 2},
        {ACE_M84, 2},
        {SmokeShell, 5},
        {ACE_M14,3}
    };
};
class grenades_more_flash_sapper: grenades_default {
    
    displayName = "More flash, less smoke";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 2},
        {ACE_M84, 5},
        {SmokeShell, 2},
        {ACE_M14,3}
    };
};
class grenades_less_lethal_sapper : grenades_default {
    displayName = "Less Lethal";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 1},
        {ACE_M84, 4},
        {SmokeShell, 4},
        {ACE_M14,3},
        {SmokeShellGreen, 2}
    };
};
// Breacher 
class grenades_default_breacher: grenades_default {
    displayName = "Default";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 2},
        {ACE_M84, 3},
        {SmokeShell, 5},
        {ACE_CTS9, 3}
    };
};
class grenades_more_flash_breacher: grenades_default {
    
    displayName = "More flash, less smoke";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 2},
        {ACE_M84, 5},
        {SmokeShell, 2},
        {ACE_CTS9,3}
    };
};
class grenades_less_lethal_breacher : grenades_default {
    displayName = "Less Lethal";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        {HandGrenade, 1},
        {ACE_M84, 4},
        {SmokeShell, 4},
        {ACE_CTS9,3},
        {SmokeShellGreen, 2}
    };
};
// Leader Classes
class grenades_default_leader: grenades_default {
    displayName = "Default";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        
        {HandGrenade, 2},
        {ACE_M84, 2},
        {SmokeShell, 5},
        {ACE_M14,3}
    };
};
class grenades_more_flash_leader: grenades_default {
    
    displayName = "More flash, less smoke";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        
        {HandGrenade, 2},
        {ACE_M84, 5},
        {SmokeShell, 2},
        {ACE_M14,3},
        {SmokeShellGreen, 2}
    };
};
class grenades_less_lethal_leader : grenades_default {
    displayName = "Less Lethal";
    vest[] = {
        {ACE_Chemlight_HiRed, 2},
        
        {HandGrenade, 1},
        {ACE_M84, 4},
        {SmokeShell, 4},
        {ACE_M14,3},
        {SmokeShellGreen, 2}
    };
};

// AO Medic
class grenades_standard_ao : grenades_default {
    displayName = "High Marker";
    vest[] = {
        {ACE_Chemlight_HiWhite, 8},
        
        {ACE_HandFlare_White, 2},
        {SmokeShellPurple, 3}
    };
};