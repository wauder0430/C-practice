#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu();		//메뉴를 보여줌 
void MakeAccount();		//계좌를 만듬 (1번 선택시) 
void DepositMoney();	//계좌에 돈을 입금함 (2번 선택시) 
void WithDrawMoney(); 	//계좌에서 돈을 출금함 (3번 선택시) 
void ShowAllAccInfo();	//모든 계좌의 정보를 보여줌 (4번 선택시) 

enum { MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };	// 열거형, 상수 역할을 하는 식별 자, 메뉴 선택 시 번호를 대신함 

typedef struct
{
	int accID;				//계좌번호
	int balance; 			//잔액
	char cusName[NAME_LEN];	//고객이름 
}Account;

Account accArr[100]; 	//Account 저장을 위한 배열
int accNum=0; 			//등록된 Account 수(계좌 수) 

int main()
{
	int choice;
	
	while(1)
	{
		ShowMenu();
		cout<<"선택: ";
		cin>>choice;		//메뉴 번호를 선택받기 위함 
		cout<<endl;
		
		switch(choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithDrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;
		} 
	}
	return 0;
	
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

void MakeAccount()
{
	int id;
	char name[NAME_LEN];
	int balance;
	
	cout<<"[계좌개설]"<<endl;
	cout<<"계좌ID: "; cin>>id;
	cout<<"이름: "; cin>>name;
	cout<<"입금액: "; cin>>balance;
	cout<<endl;
	
	accArr[accNum].accID=id;				//ID를 전달  
	//accArr[accNum].cusName=name;			처음 짠 잘못된 코드 
	accArr[accNum].balance=balance; 		//처음 입금받은 돈이 총액이 됨 
	strcpy(accArr[accNum].cusName, name);	//cstring의 strcpy를 이용하여 cusName에 입력받은 name을 넣어줌  
	accNum++;								//계좌입력을 받았으니 계좌 수 증가 
}

void DepositMoney()
{
	int money;
	int id;
	cout<<"[입 금]"<<endl;
	cout<<"계좌ID: "; cin>>id;
	cout<<"입금액: "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)		//입력받은 id와 같은 배열 찾기 
		{
			accArr[i].balance += money;	//입금받은 금액을 잔고에 추가  
			cout<<"입금이 완료되었습니다."<<endl;
			return;
		}
	} 
	cout<<"유효하지 않은 ID입니다."<<endl<<endl;
}

void WithDrawMoney()
{
	int money;
	int id;
	cout<<"[출 금]"<<endl;
	cout<<"계좌ID: "; cin>>id;
	cout<<"출금액: "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)	//입력받은 id와 같은 배열 찾기
		{
			if(accArr[i].balance<money)	// 총액이 출금하려는 금액보다 작은 경우  
			{
				cout<<"잔액이 부족합니다."<<endl;
				return;
			}
			else				//정상적으로 출금 된 경우  
			{
			accArr[i].balance -= money;
			cout<<"출금이 완료되었습니다."<<endl;
			return;
			}
		}
	} 
	cout<<"유효하지 않은 ID입니다."<<endl<<endl;
}

void ShowAllAccInfo()
{
	for(int i=0; i<accNum; i++){
		cout<<"계좌ID: "<<accArr[i].accID<<endl;
		cout<<"이 름: "<<accArr[i].cusName<<endl;
		cout<<"잔 액: "<<accArr[i].balance<<endl;
		cout<<endl; 
	}
} 
