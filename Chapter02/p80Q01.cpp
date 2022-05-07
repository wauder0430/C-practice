#include <iostream>
using namespace std;

void IncreaseNum(int &val)
{
	val++;
}

void InverSign(int &val)
{
	val *= -1;	//-1을 곱하면 기호가 바뀜 
}

int main(void) 
{
	int num;
	cout<<"수를 입력하세요: ";
	cin>>num;
	
	IncreaseNum(num);
	cout<<"1증가: "<<num<<endl; 
	InverSign(num);
	cout<<"부호 바꾸기: "<<num<<endl;
}
