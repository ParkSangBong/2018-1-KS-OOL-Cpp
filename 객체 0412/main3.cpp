#include <iostream>
#include <cstdlib>

using namespace std;

class Circle{
	
	int radius;
	
public:
	
	Circle();				//기본 생성자 
	Circle(int r);			//매개변수 포함 생성자 
	~Circle();				//소멸자 
	
	void setRadius(int r){
		radius = r;
	}
	double getArea(){
		return 3.14 * radius * radius;
	}
	
};

Circle::Circle(){
	
	radius = 1;
	cout << " 생성자 실행 radius = " << radius << endl;
	
} 

Circle::Circle(int r){
	radius = r;
	cout << " 생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
	cout << " 소멸자 실행 radius = " << radius << endl;
}

int main(int argc, char** argv) {
	
	Circle *p, *q;			//객체 포인터 변수 선언 
	p = new Circle;			//new로 객체의 동적 생성 
	q = new Circle(30);		
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;				//new로 동적 생성한 객체들은 순서에 관계 없이 소멸가능. 
	delete q;
	
	return 0;
}
