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
		cout<<"������ID: "<<gameID<<endl;
		cout<<"���ᷮ: "<<fuelGauge<<"%"<<endl;
		cout<<"����ӵ�: "<<curSpeed<<"km/s"<<endl<<endl;
	}
	void Accel()	//accel�� ��� �ڵ����� �ӵ��� ���ϴ� ���� ��Ÿ��  
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

	void Break()	//�극��ũ�� ��� ���ߴ� ���� ��Ÿ��  
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
