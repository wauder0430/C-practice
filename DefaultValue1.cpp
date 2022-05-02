#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Adder(int num1=1, int num2=2){
	return num1 + num2;
}

int main(int argc, char** argv) {
	std::cout<<Adder()<<std::endl;
	std::cout<<Adder(5)<<std::endl;
	std::cout<<Adder(3, 5)<<std::endl;
	return 0;
}
