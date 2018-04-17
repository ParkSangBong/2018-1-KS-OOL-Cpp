#include <iostream>
#include <cstdlib> 
#include "BankAccount.h"

using namespace std;

char selectMenu();

int main(int argc, char** argv) {

	BankAccount account;
	char ans;
	
	account.setBalance(0);			//balance의 값을 초기화시킴 
	
	do{
		
		switch(ans=selectMenu()){
			
			case '1':				//입금 
				{
					int money;
					cout << "1. 입금메뉴를 선택하셨습니다. 고객님의 휴대전화 번호를 입력해주세요 ♥" << endl;
					cout << "는 풰이크다! 얼마 입금할꺼 : ";
					cin >> money; 
					account.deposit(money);
				}
				break;
			
			case '2':				//출금 
				{
					int wmoney;
					cout << "2. 출금메뉴를 선택하셨습니다. 고객님의 휴대전화 번호를 입력해주세요 ♥" << endl;
					cout << "는 훼이크다 이 병진드라! 얼마 출금함 : ";
					cin >> wmoney;
					account.withdraw(wmoney);
					cout << "남아있는 잔고는 " << account.getBalance() << "다 이녀서가! ";
				}
				break;
			
			case '3':				//조회 
				{
					cout << "3. 조회메뉴를 선택하셨습니다. 고객님의 휴대전화 번호를 입력해주세요 ♥" << endl;
					cout << "잔액은 " << account.getBalance() << " 이다 이 병진들아! ";
				}
				break;
			
			case 'q':				//종료 
				{
					cout << " 장비를 정지합니다. 정지하겠습니다. 안 되잖아? 어? 저, 정지가 안 돼. 정지시킬 수가 없어, 앙 안-돼! 이런 일이 일어날 것 같은 조짐을 느꼈지. 하지만 행정관 이 내 말을 듣지 않았어. 오늘은 중요한 날이야, 프리맨? 모든 게 제대로 되어 가는군. 난 더 이상 감당할 수 없어. 이런 걸 전에 본 적이 있나? 안돼, 그쪽으로 가지마. 난 정말 모르겠어. 여기서 과연 나갈 수가 있을까? 난 여기서 빠져나가야 되겠어. 아하이구 맙소사, 우린 인제 죽었어. 안돼! 죽고 싶지 않아. 이건 미친 짓이야, 나는 여기서 나가겠어. 안 되잖아? 으아아아아아아아~ " << endl;
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
	
	cout << "	통장관리 프로그램	" << endl;
	cout <<	"-----------------------------\n";
	cout <<	"	1. 입 	 금	\n";
	cout <<	"	2. 출 	 금	\n";
	cout <<	"	3. 잔액조회	\n";
	cout <<	"	q. 프로그램 종료\n";
	cout <<	"-----------------------------\n";
	cout <<	"	메뉴 선택 : ";
	
	cin >> menu; 
	
	return menu;
}
