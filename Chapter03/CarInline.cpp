#include <cstring>
#include "CarInline.h"
using namespace std;

void Car::InitMembers(char *ID, int fuel)
{
	strcpy(gameID, ID);
	fuelGauge=fuel;
	curSpeed=0;
}


void Car::Accel()	//accel�� ��� �ڵ����� �ӵ��� ���ϴ� ���� ��Ÿ��  
{
	if(fuelGauge<=0)			//������ ������� ���ᰡ ������ return �ִٸ� ����� �ٰ� �ӵ��� �ö� 
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

