#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

inline int SQUARE(int x){
	return x*x;
}

int main(int argc, char** argv) {
	std::cout<<SQUARE(5)<<std::endl;
	std::cout<<SQUARE(12)<<std::endl;
	return 0;
}
