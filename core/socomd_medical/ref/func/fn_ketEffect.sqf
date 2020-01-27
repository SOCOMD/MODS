"chromAberration" ppEffectEnable true;              //Enable PPeffect
"radialBlur" ppEffectEnable true;
enableCamShake true;
    
for "_i" from 0 to 30 do {                          //PP Effects last for 30s
    "chromAberration" ppEffectAdjust [0,0.5,true];  //PP effect strength/values
    "chromAberration" ppEffectCommit 1; 
    "radialBlur" ppEffectAdjust [0.1,4,0.01,0.01]; 
    "radialBlur" ppEffectCommit 1;
    addcamShake[3, 30, 1];                          //Camera shake effects last for 30s
    sleep 1;
};


"chromAberration" ppEffectAdjust [0,0,true];        //Fade out effects
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

//Deactivate ppEffects
"chromAberration" ppEffectEnable false;             //Disable effects
"radialBlur" ppEffectEnable false;
resetCamShake;