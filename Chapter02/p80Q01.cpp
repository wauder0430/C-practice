#include <iostream>
using namespace std;

void IncreaseNum(int &val)
{
	val++;
}

void InverSign(int &val)
{
	val *= -1;	//-1�� ���ϸ� ��ȣ�� �ٲ� 
}

int main(void) 
{
	int num;
	cout<<"���� �Է��ϼ���: ";
	cin>>num;
	
	IncreaseNum(num);
	cout<<"1����: "<<num<<endl; 
	InverSign(num);
	cout<<"��ȣ �ٲٱ�: "<<num<<endl;
}
