#include <iostream>

int main(){
	int num=0;
	
	std::cout<<"출력할 구구단을 입력하세요: ";
	std::cin>>num;
	
	for(int i=1; i<10; i++){
		std::cout<<num<<" x "<<i<<" = "<<num*i<<std::endl; 
	}
	
}
