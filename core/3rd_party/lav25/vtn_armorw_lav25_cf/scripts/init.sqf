private "_inwater";

_LAV25 = (_this select 0);

_count = 3; 
_inwater = 0;

sleep 0.5;
if ((getPosASL _LAV25 select 2) <-0.4) then 
{
	_inwater = 1;
	_LAV25 animate ["plate_front", _inwater];
}
else 
{
	_inwater = 0;
};
			 
while {(alive _LAV25)} do 
{
	sleep 2.0;
		if ((getPosASL _LAV25 select 2) > 0) then 
		{
	  	if (_inwater == 1) then {_count = 0; _inwater = 0;};
			if (_count < 4) then {_count = _count + 1}; 
		} 
		else 
		{
	  	if (_inwater == 0) then {_count = 0; _inwater = 1;};			
			if (_count < 4) then {_count = _count+1};				   
		}; 

		if (_count == 3) then 
		{
		_LAV25 animate ["plate_front", _inwater];
		};		
};