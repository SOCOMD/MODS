class CfgSounds {
    sounds[] = {
        Vent,
        Vent2,
        Para
    };
    
    class Vent 
    {
        name="Vent";
        sound[]= {\ATM_airdrop\sounds\vent.ogg, db-11, 1.0};
        titles[] = {};
    };
    
    class Vent2 
    {
        name="Vent2";
        sound[]={\ATM_airdrop\sounds\vent2.ogg, db-11, 1.0};
        titles[] = {};
    };
    
    class Para 
    {
        name="Para";
        sound[]={\ATM_airdrop\sounds\parachute.ogg, db-11, 1.0};
        titles[] = {};
    };
};