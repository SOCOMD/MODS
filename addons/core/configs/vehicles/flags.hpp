    
class FLAG_ADFU_F: FLAG_NATO_F
{
    scope = SCOPE_PUBLIC;
    displayName = "Australian Flag";
    class eventHandlers
    {
        init = "(_this select 0) setFlagTexture '\z\socomd\addons\data\data\ADFU_flag_co.paa'";
    };
};

class FLAG_ADFOPFOR_F: FLAG_CSAT_F
{
    scope = SCOPE_PUBLIC;
    displayName = "Colonial Australian Flag";
    class eventHandlers
    {
        init = "(_this select 0) setFlagTexture '\z\socomd\addons\data\data\adfopfor_flag_co.paa'";
    };
};
