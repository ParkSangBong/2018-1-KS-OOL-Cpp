#include <iostream>
#include <cstdlib> 
#include "BankAccount.h"

using namespace std;

int main(int argc, char** argv) {
	
	int amount;
	BankAccount account;
	account.setBalance(0); 						//setBalance 함수를 이용하여 balance 변수의 값을 초기화시키는 용도로 사용되었음. 
	cout << "입금하실 금액을 입력하여 주십시오 : ";
	cin >> amount;
	//10000원을 입금하는 코드
	account.deposit(amount);
	cout << "현재 잔액은 " << account.getBalance() << "원 입니다.";

	return 0;
}
