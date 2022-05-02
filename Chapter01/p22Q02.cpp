#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[100];
	char tel[100];
	
	std::cout<<"이름을 입력해주세요: ";
	std::cin>>name;
	
	std::cout<<"전화번호를 입력해주세요: " ;
	std::cin>>tel;
	
	std::cout<<"이름: "<<name<<"\n";
	std::cout<<"전화번호: "<<tel<<"\n"; 
}
