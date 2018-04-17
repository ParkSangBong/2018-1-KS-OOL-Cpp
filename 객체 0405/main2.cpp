#include <iostream>
#include <cstdlib>
#include "Student.h"

using namespace std; 

char selectMenu();

int main(int argc, char** argv) {

	char ans;
	int number;
	cout << "�й��� �Է��ϼ��� : ";		//�й����� �л� ��ü ���� 
	cin >> number;
	Student student(number);
	
	do{
		
		switch(ans=selectMenu()){

			case '1':				 
				{
					int nKor, nEng, nMath;
					cout << "�ش� �л��� ����, ����, ���� ������ �Է��ϼ��� : ";//�����Է� 
					cin >> nKor >> nEng >> nMath;
					student.setmKOR(nKor);
					student.setmENG(nEng);
					student.setmMath(nMath);
				}
				break;
			
			case '2':			 
				{
					int nKor, nEng, nMath;
					cout << "����, ����, ���� ������ ���� �ϼ��� : ";//�������� (���ġ) 
					cin >> nKor >> nEng >> nMath;
					student.setmKOR(nKor);
					student.setmENG(nEng);
					student.setmMath(nMath);
				}
				break;
			
			case '3':				
				{
					cout << "�й� : " << student.getmSN() << "�� �л��� ���� ��ȸ " << endl;		//������ȸ 
					cout << "���� : " << student.getmKor() << " ���� : " << student.getmEng() << " ���� : " << student.getmMath() << endl;
				}
				break;
			
			case '4':				
				{
					cout << "�й� : " << student.getmSN() << " �� �л��� ���� ��� ��ȸ " << endl;
					cout << "��� ���� : " << student.getAvg() << endl;
				}
				break;
						
			case '5':				
				{
					string nName;
					cout << "�й� : " << student.getmSN() << "�� �л��� �̸��� �����մϴ�. " << endl;	//�л��̸�
					cout << "�̸��� ? ";
					cin >> nName;
					student.setmName(nName);
					cout << "�й� : " << student.getmSN() << ", �̸� : " << student.getmName() << " ���� �Ϸ�!" << endl;
				}
				break;
			case '6':
				{
					cout << "���� ��� �Ǿ� �ִ� ��ü�� ������ ";
					cout << "�й��� " <<  student.getmSN() << " �̸��� "<< student.getmName() << " ���� ������ " << student.getmKor() << " ���� ������ " << student.getmEng() << " ���� ������ " << student.getmMath() << " ��� ��� �� " << endl;
				}
				break;
				 
			case 'q':				
				{
						cout << " ��� �����մϴ�. " << endl;//���α׷� ���� 
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
	
	cout << "	�л�����(����) ���� ���α׷�	" << endl;
	cout <<	"-----------------------------\n";
	cout <<	"	1. ���� �Է�\n";
	cout <<	"	2. ���� ����\n";
	cout <<	"	3. ���� ��ȸ\n";
	cout << "	4. ��� ����\n";
	cout << "	5. �л� �̸� ����\n";
	cout << "	6. �л��� �� ���� ���\n";
	cout <<	"	q. ���α׷� ����\n";
	cout <<	"-----------------------------\n";
	cout <<	"	�޴� ���� : ";
	
	cin >> menu; 
	
	return menu;
}
