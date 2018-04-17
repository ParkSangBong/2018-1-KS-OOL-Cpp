#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

using namespace std;

class BankAccount{
	
	int accountNumber;							//���¹�ȣ 
	string owner;								//������ 
	int balance;								//�ܾ�	 
	
public:
	
	int getAccountNumber();						//������ 
	int getBalance();
	string getOwner();
	
	void setAccountNumber(int mAccountNumber);	//������ 
	void setBalance(int mBalance);
	void setOwner(string mOwner);
	
	void deposit(int amount);					//�Ա��Լ� 
	void withdraw(int amount);					//����Լ� 
	
};

#endif
