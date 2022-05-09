#include <iostream>
using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP 	10

struct Car
{
	char gameID[ID_LEN];	//소유자의 ID
	int fuelGauge;			//연료량
	int curSpeed;			//현재 속도 
	
	void ShowCarState(const Car &car)		//차 정보를 보여줌, 단순히 차 정보만을 보여주기 때문에 const참조자를 매개 변수로 선언 
	{
		cout<<"소유자ID: "<<car.gameID<<endl;
		cout<<"연료량: "<<car.fuelGauge<<"%"<<endl;
		cout<<"현재속도: "<<car.curSpeed<<"km/s"<<endl<<endl;
	} 

	void Accel(Car &car)	//accel을 밟아 자동차의 속도가 변하는 것을 나타냄  
	{
		if(car.fuelGauge<=0)			//엑셀을 밝았을때 연료가 없으면 return 있다면 연료는 줄고 속도는 올라감 
			return;
		else
			car.fuelGauge -= FUEL_STEP;
	
		if(car.curSpeed+ACC_STEP>=MAX_SPD)
		{	
			car.curSpeed=MAX_SPD;
			return;
		}
	
		car.curSpeed += ACC_STEP;
	}

	void Break(Car &car)	//브레이크를 밟아 멈추는 것을 나타냄  
	{
		if(car.curSpeed<BRK_STEP)
		{
			car.curSpeed=0;
			return;
		}
	
		car.curSpeed -=BRK_STEP;
	}
};

int main()
{
	Car run99={"run99", 100, 0};
	run99.Accel(run99);
	run99.Accel(run99);
	run99.ShowCarState(run99);
	run99.Break(run99);
	run99.ShowCarState(run99);
	
	Car sped77={"sped77", 100, 0};
	sped77.Accel(sped77);
	sped77.Break(sped77);
	sped77.ShowCarState(sped77);
	return 0;
}
