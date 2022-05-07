#include <iostream>
using namespace std;

int RefRefFunc(int &ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1=1;
	int num2=RefRefFunc(num1);
	
	num1+=1;		
	num2+=100;		//둘이 다른 변수임을 확인하기 위해서 서로 다른 연산 진행 
	cout<<"num1 : "<<num1<<endl;
	cout<<"num2 : "<<num2<<endl;
	return 0;
}
