#include <iostream>
#include <cstdlib>
#include "BankAccount.h"

using namespace std;

int BankAccount::getAccountNumber(){			//get�Լ��� �ش� ������ ���� ȣ���ϴ� ������ �Ѵ�. 
	return accountNumber;
}
int BankAccount::getBalance(){
	return balance;
} 
string BankAccount::getOwner(){
	return owner;
}

void BankAccount::setAccountNumber(int mAccountNumber){
	accountNumber = mAccountNumber;
}
void BankAccount::setBalance(int mBalance){
	balance = mBalance;
}
void BankAccount::setOwner(string mOwner){
	owner = mOwner;
}

void BankAccount::deposit(int amount){
	balance += amount;
}
void BankAccount::withdraw(int amount){
	balance -= amount;	
}

