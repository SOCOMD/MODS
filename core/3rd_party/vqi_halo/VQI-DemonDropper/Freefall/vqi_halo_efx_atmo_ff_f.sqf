// animation: halofreefall_f (tracking)



//terminate efxFFn;
//terminate efxFFf;
resetCamShake;

addCamShake [3, 666, 15];
"radialBlur" ppEffectEnable true;   
"radialBlur" ppEffectAdjust [0.1,0.1,0.5,0.5];   
"radialBlur" ppEffectCommit 5;