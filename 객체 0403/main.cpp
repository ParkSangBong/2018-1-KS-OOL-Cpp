#include <iostream>
#include <cstdlib> 
#include "BankAccount.h"

using namespace std;

int main(int argc, char** argv) {
	
	int amount;
	BankAccount account;
	account.setBalance(0); 						//setBalance �Լ��� �̿��Ͽ� balance ������ ���� �ʱ�ȭ��Ű�� �뵵�� ���Ǿ���. 
	cout << "�Ա��Ͻ� �ݾ��� �Է��Ͽ� �ֽʽÿ� : ";
	cin >> amount;
	//10000���� �Ա��ϴ� �ڵ�
	account.deposit(amount);
	cout << "���� �ܾ��� " << account.getBalance() << "�� �Դϴ�.";

	return 0;
}
