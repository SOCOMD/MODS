hintSilent "You have drugs";

"chromAberration" ppEffectEnable true; 
"radialBlur" ppEffectEnable true;
enableCamShake true;
    
for "_i" from 0 to 44 do {
    "chromAberration" ppEffectAdjust [0,0.5,true];  
    "chromAberration" ppEffectCommit 1; 
    "radialBlur" ppEffectAdjust [0.1,4,0.01,0.01]; 
    "radialBlur" ppEffectCommit 1;
    addcamShake[3, 44, 1];
    sleep 1;
};


"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

//Deactivate ppEffects
"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;