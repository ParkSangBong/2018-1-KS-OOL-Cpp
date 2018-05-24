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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = "  << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
	
}
//	���� ���� ȣ���� ������ : ��ü�� �Ű� ������ ������ �Լ��� ��� �����ڴ� 
//	������� �ʰ� �Ҹ��ڸ� ����Ǿ����� �������� �߻��Ѵ�. 
void increase(Circle c) {					//	c��� �������� ������ ����ϱ� ������ 
	int r = c.getRadius();					//	�Ű��������� �ٽ� �����ϸ� �޾��ش�. 
	c.setRadius(r+1);						//	������ �����ڴ� ȣ������ �ʴ´�. 
}											//	���� ������ ������ ���� �����ڶ� �༮�� ���� 

int main(int argc, char** argv) {
	
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
		
	system("pause");
	return 0;
}
