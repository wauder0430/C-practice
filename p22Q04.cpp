#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pay=50;
	int allot=0;
	
	while(allot != -1){
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";	
		std::cin>>allot;
		
		if(allot == -1)
			break;
		
		std::cout<<"�̹� �� �޿�: ";
		std::cout<<pay+(allot*0.12)<<"����"<<std::endl; 
		
	}
	std::cout<<"���α׷��� �����մϴ�."<<std::endl;
}
