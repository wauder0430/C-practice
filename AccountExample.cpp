#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu();		//�޴��� ������ 
void MakeAccount();		//���¸� ���� (1�� ���ý�) 
void DepositMoney();	//���¿� ���� �Ա��� (2�� ���ý�) 
void WithDrawMoney(); 	//���¿��� ���� ����� (3�� ���ý�) 
void ShowAllAccInfo();	//��� ������ ������ ������ (4�� ���ý�) 

enum { MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };	// ������, ��� ������ �ϴ� �ĺ� ��, �޴� ���� �� ��ȣ�� ����� 

typedef struct
{
	int accID;				//���¹�ȣ
	int balance; 			//�ܾ�
	char cusName[NAME_LEN];	//���̸� 
}Account;

Account accArr[100]; 	//Account ������ ���� �迭
int accNum=0; 			//��ϵ� Account ��(���� ��) 

int main()
{
	int choice;
	
	while(1)
	{
		ShowMenu();
		cout<<"����: ";
		cin>>choice;		//�޴� ��ȣ�� ���ùޱ� ���� 
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
	cout<<"1. ���°���"<<endl;
	cout<<"2. �� ��"<<endl; 
	cout<<"3. �� ��"<<endl;
	cout<<"4. �������� ��ü ���"<<endl;
	cout<<"5. ���α׷� ����"<<endl;
		
}

void MakeAccount()
{
	int id;
	char name[NAME_LEN];
	int balance;
	
	cout<<"[���°���]"<<endl;
	cout<<"����ID: "; cin>>id;
	cout<<"�̸�: "; cin>>name;
	cout<<"�Աݾ�: "; cin>>balance;
	cout<<endl;
	
	accArr[accNum].accID=id;				//ID�� ����  
	//accArr[accNum].cusName=name;			ó�� § �߸��� �ڵ� 
	accArr[accNum].balance=balance; 		//ó�� �Աݹ��� ���� �Ѿ��� �� 
	strcpy(accArr[accNum].cusName, name);	//cstring�� strcpy�� �̿��Ͽ� cusName�� �Է¹��� name�� �־���  
	accNum++;								//�����Է��� �޾����� ���� �� ���� 
}

void DepositMoney()
{
	int money;
	int id;
	cout<<"[�� ��]"<<endl;
	cout<<"����ID: "; cin>>id;
	cout<<"�Աݾ�: "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)		//�Է¹��� id�� ���� �迭 ã�� 
		{
			accArr[i].balance += money;	//�Աݹ��� �ݾ��� �ܰ� �߰�  
			cout<<"�Ա��� �Ϸ�Ǿ����ϴ�."<<endl;
			return;
		}
	} 
	cout<<"��ȿ���� ���� ID�Դϴ�."<<endl<<endl;
}

void WithDrawMoney()
{
	int money;
	int id;
	cout<<"[�� ��]"<<endl;
	cout<<"����ID: "; cin>>id;
	cout<<"��ݾ�: "; cin>>money;
	
	for(int i=0; i<accNum; i++)
	{
		if(accArr[i].accID == id)	//�Է¹��� id�� ���� �迭 ã��
		{
			if(accArr[i].balance<money)	// �Ѿ��� ����Ϸ��� �ݾ׺��� ���� ���  
			{
				cout<<"�ܾ��� �����մϴ�."<<endl;
				return;
			}
			else				//���������� ��� �� ���  
			{
			accArr[i].balance -= money;
			cout<<"����� �Ϸ�Ǿ����ϴ�."<<endl;
			return;
			}
		}
	} 
	cout<<"��ȿ���� ���� ID�Դϴ�."<<endl<<endl;
}

void ShowAllAccInfo()
{
	for(int i=0; i<accNum; i++){
		cout<<"����ID: "<<accArr[i].accID<<endl;
		cout<<"�� ��: "<<accArr[i].cusName<<endl;
		cout<<"�� ��: "<<accArr[i].balance<<endl;
		cout<<endl; 
	}
} 
