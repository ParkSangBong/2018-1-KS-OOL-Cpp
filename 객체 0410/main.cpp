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
    Circle circleArray[3] = { Circle(10), Circle(20), Circle() };	//매개 변수가 있는 생성자로 객체 2개가 생성되고 그다음 기본 생성자에 의해 생성된다. 
    
    for(int i = 0 ; i < 3 ; i++){
    	cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}
    																//main 함수가 종료 되고 나면 객체 배열이 소멸되며 높은 인덱스에서부터 원소 객체가 순차적으로 소멸된다. 
    system("PAUSE");
    return EXIT_SUCCESS;
}
