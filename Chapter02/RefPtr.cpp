#include <iostream>
using namespace std;

int main(void)
{
	int num=12;
	int *ptr = &num;	//포인터 변수도 변수이기 때문에 참조자의 선언이 가능  
	int **dptr=&ptr;
	
	int &ref=num;
	int *(&pref)=ptr;
	int **(&dpref)=dptr;
	
	cout<<ref<<endl;
	cout<<*pref<<endl;		//ptr의 참조자이므로 변수 num에 저장된 값 출력 
	cout<<**dpref<<endl;	//dptr의 참조자이므로 변수 num에 저장된 값 출력 
	
	return 0;
}
