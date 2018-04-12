#include <iostream>
#include <cstdlib>
#include <cstring> 

using namespace std;

//클래스 정의하는 위치는 maim() 함수 위에 적는다. (클래스는 설계도 이기 때문이다.) 
class Circle{			//클래스의 선언부 

public:
	int radius;			//맴버변수 
	double getArea();	//맴버함수
	Circle();			//기본생성자함수 
	Circle(int r);
};

//클래스의 구현부 
Circle::Circle(){
	radius = 1;
	cout << "기본생성자함수 실행" << endl;
	cout << "반지름 " << radius << endl; 
	
} 

Circle::Circle(int r){
	radius = r;
	cout << "매개변수 1개 있는 생성자함수 실행" << endl;
	cout << "반지름 " << radius << endl;
}

double Circle::getArea(){		// 맴버함수 구현시 반드시 :: 범위지정연산자를 붙여준다. 
	return 3.14*radius*radius; 	// 범위지정연산자는 해당 함수가 어디에 속하는지를 알 수 있게 해준다. 
} 

class Rectangle{

public:
	int width,height;
	double getArea();
};

double Rectangle::getArea(){
	return width*height;
}

int main(int argc, char** argv) {
	/*
	//객체생성방법1	(클래스이름 + 객체이름) 
	Circle donut;
	//생성된 객체로 맴버에 접근하는 방법은 객체이름에 . 연산자를 사용하여 맴버변수를 쓴다. 
	donut.radius = 1;		// 맴버함수에 접근하는 방법 (객체이름 + . + 맴버변수)
	double area = donut.getArea();		//면적을 계산하는 맴버함수를 이용하여 계산한 면적을 area 변수에 저장한다. 
	cout << "donut 면적은 " << area << endl;
	
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
	*/
	/*
	Rectangle rect;
	rect.width=3;
	rect.height=5;
	
	cout << "사각형의 면적은 " << rect.getArea() << endl; 
	*/
	
	//생성자함수는 객체가 생성될때 자동으로 호출되는 함수이다.
	//생성자함수의 이름은 클래스이름과 같은 이름을 쓴다. 
	Circle donut;	//donut 객체 생성은 매개변수가 없는 객체를 생성하였다는 것이고 
					//매개변수가 없는 객체를 생성할때에는 기본 생성자 함수를 호출한다. 
	
	Circle pizza(30);	//매개변수가 하나 있는 객체를 생성한다.				
 
	
	return 0;
}
