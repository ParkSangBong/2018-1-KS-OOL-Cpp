#include <iostream>

using namespace std;

class Circle {
private:
	int radius; 
public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea()  { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
}; 

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
	
}
//	값에 의한 호출의 문제점 : 객체를 매개 변수로 가지는 함수의 경우 생성자는 
//	실행되지 않고 소멸자만 실행되어지는 문제점이 발생한다. 
void increase(Circle c) {					//	c라는 독립적인 공간을 사용하기 때문에 
	int r = c.getRadius();					//	매개변수에는 다시 선언하며 받아준다. 
	c.setRadius(r+1);						//	하지만 생성자는 호출하지 않는다. 
}											//	눈에 보이지 않지만 복사 생성자란 녀석이 있음 

int main(int argc, char** argv) {
	
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
		
	system("pause");
	return 0;
}
