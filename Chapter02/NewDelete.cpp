#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char *str = new char[len];	// new�����Ҵ��� �ξ� ������ 
	return str;
}

int main(void)
{
	char * str=MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout<<str<<endl;
	//free(str);
	delete []str;	//�迭 ���·� �Ҵ�� �޸� ���� ���� 
	return 0;
}
