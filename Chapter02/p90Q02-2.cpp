#include <iostream>
using namespace std;

int main(void)
{
	const int num=12;
	
	//�����κ�
	const int *ptr = &num;
	const int *(&ref) = ptr;
	
	cout<<"ptr: "<<*ptr<<endl;
	cout<<"ref: "<<*ref<<endl;
	
	return 0;
	
}
