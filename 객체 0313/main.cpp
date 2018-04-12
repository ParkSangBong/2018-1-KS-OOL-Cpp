#include <cstdlib> 
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int width,height;
	int radius;
	
	cout << "너비를 입력하세요 : ";
	cin >> width;						//키보드에서 너비를 입력받아 width 변수에 저장해줌 
	
	//cin : 표준 입력 스트림, 값을 입력받는 객체이며 >> 연산자와 함께 이용하여 유저로 부터 키를 입력받는다. 
	// >> (스트링 추출연산자) : Enter 키를 칠 때 변수에 키 값을 전달한다. 
	
	cout << "높이를 입력하세요 : ";
	cin >> height;
	
	//c++은 실행문 사이에 변수선언이 가능하다.
	int area = width * height; 
	cout << "면적은 " << area << endl;	//endl은 \n과 같은 의미 
	
	cout << "반지름을 입력하세요 : ";
	cin >> radius;
	
	double area2 = radius * radius * 3.14;
	cout << "원의 면적은 " << area2 << endl;
	
	system("PAUSE");
	return 0;
}
