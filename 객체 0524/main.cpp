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
		cout << "A �ɹ� ���� x = " << x << endl;
	}
};

class B : public A{
	int y;
	
public:
	B(int x, int y) : A(x+5){
		this->y =y;
		cout << "B �ɹ� ���� x = " << x << " B �ɹ� ���� y = "<< y << endl;
	}
};

class C : public B{
	int m;

public:
	C(int x, int y, int z) : B(x, y){
		m = x*y*z;
		cout << "C �ɹ� ���� x = " << x << " C �ɹ� ���� y = "<< y << " C �ɹ� ���� m = "<< m << endl;
	}
};

int main(int argc, char** argv) {
	
	C c(3,5,2);		//c ��ü�� ������ ȣ������� C > B > A �� �Ž��� �ö󰡼� �������� ���� ������ A > B > C ������ �ȴ�. 
	cout << endl;
	B b(3,4);
	
	return 0;
}
