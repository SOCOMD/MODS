class Ketamine_6mg {
	painReduce=0;
	hrIncreaseLow[]={0,0,0};
	hrIncreaseNormal[]={0,0,0};
	hrIncreaseHigh[]={0,0,0};
	timeInSystem=1;
	maxDose=4;
	inCompatableMedication[]={};
	viscosityChange=0;
	unconsciousTime=30;
};

class Ketamine_200mg : Ketamine_6mg {
	painReduce=100;
	hrIncreaseLow[]={0,0,0};
	hrIncreaseNormal[]={0,0,0};
	hrIncreaseHigh[]={0,0,0};
	timeInSystem=1;
	maxDose=4;
	inCompatableMedication[]={};
	viscosityChange=0;
	unconsciousTime=300;
};