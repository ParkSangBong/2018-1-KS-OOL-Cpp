#include <iostream>
#include <cstring>
#include <cstdlib> 

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*	실습문제 5번 
	char c[100];
	int count = 0;
	
	cout << "문자들을 입력하라(100개 미만). " << endl;
	cin.getline(c,100,'\n');
	
	int i=0;
	while(true){
		if(c[i]=='\0') break;
		if(c[i]=='x') count++;
		i++;
	}
	
	cout << 'x' << "의 개수는 " << count << endl;
	*/
	/*	실습문제 6번 
	char password1[100];
	char password2[100];
	
	cout << "새 암호를 입력하세요 >> " << endl;
	cin >> password1;
	cout << "새 암호를 다시 한 번 입력하세요 >> " << endl;
	cin >> password2;
	
	if(strcmp(password1, password2) ==0 )
		cout << "같습니다";
	else
		cout << "같지 않습니다"; 
	*/
	/*	실습문제 7번 
	char yes[100];
		
		while(true){
			cout << "종료하고 싶으면 yes를 입력하세요 >> ";
			cin.getline(yes,100,'yes');
				
			if(strcmp(yes,"yes") == 0)
				break;
		}
	
	cout << "종료합니다.";
	*/
	/*	실습문제 8번 
	char name[100]; 
	
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요 " << endl;
	cout << ">>";
	
	int length = 0; 
	char longest[100];
	for(int i=0; i<5;i++){
		cin.getline(name,100,';');
		cout << i+1 << ":" << name << endl;
		if (length < strlen(name)){
			length = strlen(name);
			strcpy(longest,name);				//strcpy 는 
		}
	
	}
	
	cout << "가장 긴 이름은 " << longest; 
	*/ 
	/*	실습문제 9번 
	char name[20];
	char address[100];
	int age;
	
	cout << "이름은?";
	cin.getline(name,20);
	cout << "주소는?";
	cin.getline(address,100);
	cout << "나이는?";
	cin >> age;
	
	cout << name << ", " << address << ", " << age << "세";
	*/
	
	return 0;
}
