#include <iostream>
#include <cstdlib>
#include "BankAccount.h"

using namespace std;

int BankAccount::getAccountNumber(){			//get함수는 해당 변수의 값을 호출하는 역할을 한다. 
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

