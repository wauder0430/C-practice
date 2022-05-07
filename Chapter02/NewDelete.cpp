#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char *str = new char[len];	// new동적할당이 훨씬 간결함 
	return str;
}

int main(void)
{
	char * str=MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout<<str<<endl;
	//free(str);
	delete []str;	//배열 형태로 할당된 메모리 공간 해제 
	return 0;
}
