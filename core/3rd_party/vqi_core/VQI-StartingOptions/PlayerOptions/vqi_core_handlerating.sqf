// Fix the STUPID Friendly Fire nonsense!
// SHould NOT be in normal game, MP maybe





//
player addEventHandler ["HandleRating", {0}];



//
player addEventHandler ['HandleRating',{
    (_this select 0) addRating (0 - (rating (_this select 0)));
}];



//
player addEventHandler [
    "HandleRating",
    {
        params["_player", "_rating"];
        _return = _rating;
        if(rating _player < 0) then {
            _return = abs rating _player;
        } else {
            if(_rating + rating _player < 0) then {
                _return = 0;
            };
        };
        _return
    }
];




// also
player addRating 1000000;




//////////////////
/* NOTES:



*/