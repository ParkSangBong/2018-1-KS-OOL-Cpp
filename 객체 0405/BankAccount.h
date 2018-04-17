#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

using namespace std;

class BankAccount{
	
	int accountNumber;							//계좌번호 
	string owner;								//예금주 
	int balance;								//잔액	 
	
public:
	
	int getAccountNumber();						//접근자 
	int getBalance();
	string getOwner();
	
	void setAccountNumber(int mAccountNumber);	//설정자 
	void setBalance(int mBalance);
	void setOwner(string mOwner);
	
	void deposit(int amount);					//입금함수 
	void withdraw(int amount);					//출금함수 
	
};

#endif
