#include <iostream>
#include <cstdlib>
#include "Student.h"

using namespace std; 

char selectMenu();

int main(int argc, char** argv) {

	char ans;
	int number;
	cout << "학번을 입력하세요 : ";		//학번으로 학생 객체 생성 
	cin >> number;
	Student student(number);
	
	do{
		
		switch(ans=selectMenu()){

			case '1':				 
				{
					int nKor, nEng, nMath;
					cout << "해당 학생의 국어, 영어, 수학 성적을 입력하세요 : ";//성적입력 
					cin >> nKor >> nEng >> nMath;
					student.setmKOR(nKor);
					student.setmENG(nEng);
					student.setmMath(nMath);
				}
				break;
			
			case '2':			 
				{
					int nKor, nEng, nMath;
					cout << "국어, 영어, 수학 순으로 수정 하세요 : ";//성적수정 (양아치) 
					cin >> nKor >> nEng >> nMath;
					student.setmKOR(nKor);
					student.setmENG(nEng);
					student.setmMath(nMath);
				}
				break;
			
			case '3':				
				{
					cout << "학번 : " << student.getmSN() << "인 학생의 성적 조회 " << endl;		//성적조회 
					cout << "국어 : " << student.getmKor() << " 영어 : " << student.getmEng() << " 수학 : " << student.getmMath() << endl;
				}
				break;
			
			case '4':				
				{
					cout << "학번 : " << student.getmSN() << " 인 학생의 성적 평균 조회 " << endl;
					cout << "평균 점수 : " << student.getAvg() << endl;
				}
				break;
						
			case '5':				
				{
					string nName;
					cout << "학번 : " << student.getmSN() << "인 학생의 이름을 설정합니다. " << endl;	//학생이름
					cout << "이름은 ? ";
					cin >> nName;
					student.setmName(nName);
					cout << "학번 : " << student.getmSN() << ", 이름 : " << student.getmName() << " 설정 완료!" << endl;
				}
				break;
			case '6':
				{
					cout << "현재 등록 되어 있는 객체의 정보는 ";
					cout << "학번이 " <<  student.getmSN() << " 이름이 "<< student.getmName() << " 국어 점수가 " << student.getmKor() << " 영어 점수가 " << student.getmEng() << " 수학 점수가 " << student.getmMath() << " 모두 출력 끝 " << endl;
				}
				break;
				 
			case 'q':				
				{
						cout << " 장비를 정지합니다. " << endl;//프로그램 종료 
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
	
	cout << "	학생성적(점수) 관리 프로그램	" << endl;
	cout <<	"-----------------------------\n";
	cout <<	"	1. 성적 입력\n";
	cout <<	"	2. 성적 수정\n";
	cout <<	"	3. 성적 조회\n";
	cout << "	4. 평균 성적\n";
	cout << "	5. 학생 이름 설정\n";
	cout << "	6. 학생의 총 정보 출력\n";
	cout <<	"	q. 프로그램 종료\n";
	cout <<	"-----------------------------\n";
	cout <<	"	메뉴 선택 : ";
	
	cin >> menu; 
	
	return menu;
}
