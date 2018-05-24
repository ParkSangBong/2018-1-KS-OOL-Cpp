#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	//1. 객체생성 (정적 할당) 
	string str = "I love";
	str.append(" C++");		//접근시 . 연산자를 사용하여 접근한다
	cout << str << endl;	//append 함수는 문자열울 추가하는 함수이다. 
	cout << "\n";			//실행결과 : I love c++ 
	 
	//2. 객체생성 (동적 할당) - heap 영역에 할당되어진다. 포인터를 받는다. 
	string *p = new string("C++");	//선언부의 *은 주소를 저장 
	cout << "*p = " << *p << endl;	//실행부의 *은 주소의 내용을 출력 
									//실행결과 : p* = c++ 
	p->append(" Great!! ");			//접근시 -> 연산자로 접근
	cout << "*p = " << *p << endl;	//실행결과 : p* = c++ Great!!
	
	return 0;
}
