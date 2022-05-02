#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
namespace AAA{
	namespace BBB{
		namespace CCC{
			int num1;
			int num2;
		}
	}
}
int main(int argc, char** argv) {
	AAA::BBB::CCC::num1=20;
	AAA::BBB::CCC::num2=30;
	
	namespace ABC=AAA::BBB::CCC;
	cout<<ABC::num1<<endl;
	cout<<ABC::num2<<endl;
	
	return 0;
}
