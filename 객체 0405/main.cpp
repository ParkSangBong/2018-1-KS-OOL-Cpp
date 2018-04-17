#include <iostream>
#include <cstdlib> 
#include "BankAccount.h"

using namespace std;

char selectMenu();

int main(int argc, char** argv) {

	BankAccount account;
	char ans;
	
	account.setBalance(0);			//balance�� ���� �ʱ�ȭ��Ŵ 
	
	do{
		
		switch(ans=selectMenu()){
			
			case '1':				//�Ա� 
				{
					int money;
					cout << "1. �Աݸ޴��� �����ϼ̽��ϴ�. ������ �޴���ȭ ��ȣ�� �Է����ּ��� ��" << endl;
					cout << "�� �R��ũ��! �� �Ա��Ҳ� : ";
					cin >> money; 
					account.deposit(money);
				}
				break;
			
			case '2':				//��� 
				{
					int wmoney;
					cout << "2. ��ݸ޴��� �����ϼ̽��ϴ�. ������ �޴���ȭ ��ȣ�� �Է����ּ��� ��" << endl;
					cout << "�� ����ũ�� �� �������! �� ����� : ";
					cin >> wmoney;
					account.withdraw(wmoney);
					cout << "�����ִ� �ܰ�� " << account.getBalance() << "�� �̳༭��! ";
				}
				break;
			
			case '3':				//��ȸ 
				{
					cout << "3. ��ȸ�޴��� �����ϼ̽��ϴ�. ������ �޴���ȭ ��ȣ�� �Է����ּ��� ��" << endl;
					cout << "�ܾ��� " << account.getBalance() << " �̴� �� �������! ";
				}
				break;
			
			case 'q':				//���� 
				{
					cout << " ��� �����մϴ�. �����ϰڽ��ϴ�. �� ���ݾ�? ��? ��, ������ �� ��. ������ų ���� ����, �� ��-��! �̷� ���� �Ͼ �� ���� ������ ������. ������ ������ �� �� ���� ���� �ʾҾ�. ������ �߿��� ���̾�, ������? ��� �� ����� �Ǿ� ���±�. �� �� �̻� ������ �� ����. �̷� �� ���� �� ���� �ֳ�? �ȵ�, �������� ������. �� ���� �𸣰ھ�. ���⼭ ���� ���� ���� ������? �� ���⼭ ���������� �ǰھ�. �����̱� ���һ�, �츰 ���� �׾���. �ȵ�! �װ� ���� �ʾ�. �̰� ��ģ ���̾�, ���� ���⼭ �����ھ�. �� ���ݾ�? ���ƾƾƾƾƾƾ�~ " << endl;
				}
				break;
		
		}
		
		system("pause");
		system("cls");
		
	} while(ans != 'q');

	return 0;
}

char selectMenu(){
	
	char menu;
	
	cout << "	������� ���α׷�	" << endl;
	cout <<	"-----------------------------\n";
	cout <<	"	1. �� 	 ��	\n";
	cout <<	"	2. �� 	 ��	\n";
	cout <<	"	3. �ܾ���ȸ	\n";
	cout <<	"	q. ���α׷� ����\n";
	cout <<	"-----------------------------\n";
	cout <<	"	�޴� ���� : ";
	
	cin >> menu; 
	
	return menu;
}
