#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[100];
	char tel[100];
	
	std::cout<<"�̸��� �Է����ּ���: ";
	std::cin>>name;
	
	std::cout<<"��ȭ��ȣ�� �Է����ּ���: " ;
	std::cin>>tel;
	
	std::cout<<"�̸�: "<<name<<"\n";
	std::cout<<"��ȭ��ȣ: "<<tel<<"\n"; 
}
