#include <iostream>
#include <cstring>
#include <cstdlib> 

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*	�ǽ����� 5�� 
	char c[100];
	int count = 0;
	
	cout << "���ڵ��� �Է��϶�(100�� �̸�). " << endl;
	cin.getline(c,100,'\n');
	
	int i=0;
	while(true){
		if(c[i]=='\0') break;
		if(c[i]=='x') count++;
		i++;
	}
	
	cout << 'x' << "�� ������ " << count << endl;
	*/
	/*	�ǽ����� 6�� 
	char password1[100];
	char password2[100];
	
	cout << "�� ��ȣ�� �Է��ϼ��� >> " << endl;
	cin >> password1;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ��� >> " << endl;
	cin >> password2;
	
	if(strcmp(password1, password2) ==0 )
		cout << "�����ϴ�";
	else
		cout << "���� �ʽ��ϴ�"; 
	*/
	/*	�ǽ����� 7�� 
	char yes[100];
		
		while(true){
			cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";
			cin.getline(yes,100,'yes');
				
			if(strcmp(yes,"yes") == 0)
				break;
		}
	
	cout << "�����մϴ�.";
	*/
	/*	�ǽ����� 8�� 
	char name[100]; 
	
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ��� " << endl;
	cout << ">>";
	
	int length = 0; 
	char longest[100];
	for(int i=0; i<5;i++){
		cin.getline(name,100,';');
		cout << i+1 << ":" << name << endl;
		if (length < strlen(name)){
			length = strlen(name);
			strcpy(longest,name);				//strcpy �� 
		}
	
	}
	
	cout << "���� �� �̸��� " << longest; 
	*/ 
	/*	�ǽ����� 9�� 
	char name[20];
	char address[100];
	int age;
	
	cout << "�̸���?";
	cin.getline(name,20);
	cout << "�ּҴ�?";
	cin.getline(address,100);
	cout << "���̴�?";
	cin >> age;
	
	cout << name << ", " << address << ", " << age << "��";
	*/
	
	return 0;
}
