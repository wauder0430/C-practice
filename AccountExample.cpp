#include <iostream>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu();

typedef struct
{
	int accID;				//���¹�ȣ
	int balance; 			//�ܾ�
	char cusName[NAME_LEN];	//���̸� 
}Account;


int main()
{
	int choice;
	
	while(1)
	{
		ShowMenu();
		cout<<"����: ";
		cin>>choice;
		cout<<endl;-
	}

	
	
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

