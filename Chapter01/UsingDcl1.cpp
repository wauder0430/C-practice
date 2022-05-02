#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

namespace Hybrid{
	void HybFunc(void){
		std::cout<<"So simple function!"<<std::endl;
		std::cout<<"In namespace Hybrid!"<<std::endl;
	}
}
int main(int argc, char** argv) {
	using Hybrid::HybFunc;
	HybFunc();
	return 0;
}
