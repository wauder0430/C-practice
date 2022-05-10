#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN		=20,
		MAX_SPD		=200,
		FUEL_STEP	=2,
		ACC_STEP	=10,
		BRK_STEP	=10
	};
}

struct Car
{
	char gameID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
	
	void ShowCarState()
	{
		cout<<"소유자ID: "<<gameID<<endl;
		cout<<"연료량: "<<fuelGauge<<"%"<<endl;
		cout<<"현재속도: "<<curSpeed<<"km/s"<<endl<<endl;
	}
	void Accel()	//accel을 밟아 자동차의 속도가 변하는 것을 나타냄  
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

	void Break()	//브레이크를 밟아 멈추는 것을 나타냄  
	{
		if(curSpeed<CAR_CONST::BRK_STEP)
		{
			curSpeed=0;
			return;
		}
	
		curSpeed -=CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car run99={"run99", 100, 0};
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	
	Car sped77={"sped77", 100, 0};
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}
