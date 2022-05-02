#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pay=50;
	int allot=0;
	
	while(allot != -1){
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";	
		std::cin>>allot;
		
		if(allot == -1)
			break;
		
		std::cout<<"이번 달 급여: ";
		std::cout<<pay+(allot*0.12)<<"만원"<<std::endl; 
		
	}
	std::cout<<"프로그램을 종료합니다."<<std::endl;
}
