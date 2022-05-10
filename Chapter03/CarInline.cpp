#include <cstring>
#include "CarInline.h"
using namespace std;

void Car::InitMembers(char *ID, int fuel)
{
	strcpy(gameID, ID);
	fuelGauge=fuel;
	curSpeed=0;
}


void Car::Accel()	//accel을 밟아 자동차의 속도가 변하는 것을 나타냄  
{
	if(fuelGauge<=0)			//엑셀을 밝았을때 연료가 없으면 return 있다면 연료는 줄고 속도는 올라감 
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP; 
	
	if(curSpeed+CAR_CONST::ACC_STEP>=CAR_CONST::MAX_SPD)
	{	
		curSpeed=CAR_CONST::MAX_SPD;
		return;
	}
	
	curSpeed += CAR_CONST::ACC_STEP;
}

