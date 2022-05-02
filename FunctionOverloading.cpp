#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void MyFunc(void){
	std::cout<<"MyFunc(void) called"<<std::endl;
}

void MyFunc(char c){
	std::cout<<"MyFunc(char c) called"<<std::endl;
}

void MyFunc(int a, int b){
	std::cout<<"MyFunc(int a, int b) called"<<std::endl;
}

int main(int argc, char** argv) {
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;	
}
