#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num[5];
	int sum=0;
	
	for(int i=0; i<5; i++){
		std::cout<<i+1<<"��° ���� �Է�: ";
		std::cin>>num[i];
		
		sum += num[i];
	}
	
	std::cout<<"�հ�: " <<sum<<std::endl;
}
