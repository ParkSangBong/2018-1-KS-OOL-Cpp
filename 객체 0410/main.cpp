#include <cstdlib>
#include <iostream>

using namespace std;

class Circle {
	int radius;
	
public:
	Circle() { 
	radius = 1; 
}
	Circle(int r) { 
	radius = r; 
}  
	void setRadius(int r) {
		radius = r;
	}
	double getArea();
}; 

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main(int argc, char *argv[])
{
    Circle circleArray[3] = { Circle(10), Circle(20), Circle() };	//�Ű� ������ �ִ� �����ڷ� ��ü 2���� �����ǰ� �״��� �⺻ �����ڿ� ���� �����ȴ�. 
    
    for(int i = 0 ; i < 3 ; i++){
    	cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	}
    																//main �Լ��� ���� �ǰ� ���� ��ü �迭�� �Ҹ�Ǹ� ���� �ε����������� ���� ��ü�� ���������� �Ҹ�ȴ�. 
    system("PAUSE");
    return EXIT_SUCCESS;
}
