#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[100];
	char lang[200];
	
	std::cout<<"�̸��� �����Դϱ�?" ;
	std::cin>>name;
	
	std::cout<<"�����ϴ� ���α׷��� ���� �����Դϱ�?";
	std::cin>>lang;
	
	std::cout<<"�� �̸��� "<<name<<"�Դϴ�.\n";
	std::cout<<"���� �����ϴ� ����"<<lang<<"�Դϴ�."<<std::endl;
	return 0; 
	
}
