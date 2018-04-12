#include <cstdlib> 
#include <iostream>
#include <cstring>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	double biggest(double x[], int n){
		double r;
		r=x[0];
		
		for(int i=0;i<n;i++){
			if(r < x[i])
				r = x[i];
		}
		
		return r;
	}

int main(int argc, char** argv) {
	/*
	//문자열처리1 : c-String 방식 : c-String은 널(Null) 문자로 끝나는 char 배열을 선언해서 사용한다. 
	//널 문자에는 '\0' 혹은 0 이 있다. 
	
	char password1[100];
	char password2[100];
	
	cout << " 새 암호를 입력하세요 >> ";
	cin >> password1;
	cout << " 변경한 암호를 확인하세요 (재입력) >> ";
	cin >> password2;
	
	if(strcmp(password1,password2) == 0)
	{
		cout << " 비밀번호 변경완료 ";
	}
	else
		cout << " 비밀번호가 다릅니다. 재설정 하세요 ";
	cout << endl; 
	*/
	//주소입력
	/*
	char address[100];
	cout << " 주소를 입력하시오 : ";	
	//cin >> address;					//cin 함수는 공백을 만나면 입력이 끝나므로 그 이후로는 출력이 되지 않는 문제점이 있다. 
	cin.getline(address, 100, '\n');	//대신 cin.getline 이라는 맴버함수를 사용하면 공백을 포함한 문자열도 입력이 가능하다. 
	cout << " 당신의 주소는 여기가 맞습니까 ? " << address << endl;
	
	char city[21];
	cout << " 도시를 입력하세요 : ";
	cin.getline(city, 21, '.');
	cout << " 입력한 도시는 " << city << endl;
	*/
	/*
	//string 클래스 
	
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;
	
	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";
	
	getline(cin, singer);
	if(singer == elvis)
		cout << "맞았습니다."; 
	else
		cout << "틀렸습니다." + elvis + "입니다." << endl; 
	*/
	/*	실습문제 1번 
	for(int i = 1 ; i <= 100 ; i++){
		
		cout << i;
		
		if(i%10==0){
			cout << endl;
		}
		else
			cout << '\t';
	
	} 
	*/
	/*	실습문제 2번 
	for(int i=1;i<=9;i++){
		
		for(int j=1;j<=9;j++){
			
			cout << j << 'x' << i << '=' << j*i << '\t';
			
		}
		
		cout << endl;
		
	}
	*/
	/*	 실습문제 3번 
	int a, b;
	
	cout << "두 수를 입력하라 >> ";
	cin >> a >> b;
	cout << " 큰 수 = " ;
	if(a>b){
		cout << a;
	}
	else
		cout << b;
	*/
	
	double a[5];

	cout << "5개의 실수를 입력하라 >> ";
	
	for(int i=0;i<5;i++){
		
		cin >> a[i];
		
	} 
	
	cout << "제일 큰수 = " << biggest(a, 5) << endl;
	
	return 0;
}
