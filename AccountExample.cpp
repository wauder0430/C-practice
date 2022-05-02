#include <iostream>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu();

typedef struct
{
	int accID;				//계좌번호
	int balance; 			//잔액
	char cusName[NAME_LEN];	//고객이름 
}Account;


int main()
{
	int choice;
	
	while(1)
	{
		ShowMenu();
		cout<<"선택: ";
		cin>>choice;
		cout<<endl;-
	}

	
	
}

void ShowMenu()
{
	cout<<"-----Menu-----"<<endl;
	cout<<"1. 계좌개설"<<endl;
	cout<<"2. 입 금"<<endl; 
	cout<<"3. 출 금"<<endl;
	cout<<"4. 계좌정보 전체 출력"<<endl;
	cout<<"5. 프로그램 종료"<<endl;
	
}

