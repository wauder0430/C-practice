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
	num2+=100;		//���� �ٸ� �������� Ȯ���ϱ� ���ؼ� ���� �ٸ� ���� ���� 
	cout<<"num1 : "<<num1<<endl;
	cout<<"num2 : "<<num2<<endl;
	return 0;
}
