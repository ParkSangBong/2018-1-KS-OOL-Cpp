#include <iostream>

using namespace std; 

class A{
	int x;
	
public:
	A(){
		x = 0;
	}
	A(int x){
		this->x = x;
		cout << "A 맴버 변수 x = " << x << endl;
	}
};

class B : public A{
	int y;
	
public:
	B(int x, int y) : A(x+5){
		this->y =y;
		cout << "B 맴버 변수 x = " << x << " B 맴버 변수 y = "<< y << endl;
	}
};

class C : public B{
	int m;

public:
	C(int x, int y, int z) : B(x, y){
		m = x*y*z;
		cout << "C 맴버 변수 x = " << x << " C 맴버 변수 y = "<< y << " C 맴버 변수 m = "<< m << endl;
	}
};

int main(int argc, char** argv) {
	
	C c(3,5,2);		//c 객체의 생성자 호출순서는 C > B > A 로 거슬러 올라가서 생성자의 실행 순서는 A > B > C 순으로 된다. 
	cout << endl;
	B b(3,4);
	
	return 0;
}
