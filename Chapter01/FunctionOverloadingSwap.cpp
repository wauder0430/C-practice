#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void swap(double *a, double *b){
	double temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char** argv) {
	int num1=20, num2=30;
	swap(&num1, &num2);
	std::cout<<num1<<' '<<num2<<std::endl;
	
	char ch1='A', ch2='B';
	swap(&ch1, &ch2);
	std::cout<<ch1<<' '<<ch2<<std::endl;
	
	double dbl1=1.111, dbl2=2.222;
	swap(&dbl1, &dbl2);
	std::cout<<dbl1<<' '<<dbl2<<std::endl;
	return 0;
}
