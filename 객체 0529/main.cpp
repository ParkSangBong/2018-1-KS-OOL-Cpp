#include <iostream>

using namespace std; 

class Shape{	//base class 기본 클래 
	//오버라이딩 시키기 위하여 virtual 키워드를 붙인다. (가상 함수 임을 나타냄) 
	public:
		virtual void draw()= 0; //순수가상함수란 선언만하는 가상함수이다. 상속받는 파생클래스는 반드시 구현해서 사용 해야만 한다. 
		//c++ 에서는 순수가상함수를 가지는 클래스를 추상클래스라고 한다. 
		/*{
			cout << " 도형을 그린다. " << endl;
		}*/
	
}; 

class Circle:public Shape{	//derive class 파생 클래스 
	//오버라이딩 : 기본 클래스의 맴버 함수를 파생 클래스에서 재정의 한다. 
	public:
		virtual void draw(){
			cout << " 원을 그린다. " << endl;
		}
	
};
//동적바인딩의 조건 
//1.파생 클래스의 함수를 오버라이딩 한다.(virtual 키워드를 사용) 
//2.업캐스팅을 시켜준다.	(1과 2번의 조건은 프로그램에서 코딩해야하는 것) 
class Rect:public Shape{
	
	public:
		virtual void draw(){
			cout << " 사각형을 그린다. " << endl;
		}
	
};

int main(int argc, char** argv) {
	//실습 1 : 맴버 함수 호출 
	//heap영역에 할당되고 결과로 주소 즉 포인터가 넘어오기 때문에 받을때 포인터 변수로 받는다. 
	//Shape *p = new Shape();	//new 동적할당 
	//p->draw();				//실행결과 : 도형을 그린다. (기본 클래스의 내용이 출력된다.) 
	
	//실습 2 : 오버라이딩 된 결과 확인
	Shape *q = new Circle();
	q->draw(); 				//실행결과 : 원을 그린다. 
	
	Shape *r = new Rect();
	r->draw();				//실행결과 : 사각형을 그린다. 
	//업캐스팅이란 파생 클래스에서 생성된 포인터를 기본 클래스의 포인터로 보내준다. 
	
	return 0;
}
