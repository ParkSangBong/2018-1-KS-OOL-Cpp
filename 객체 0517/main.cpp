#include <iostream>
#include <cstdlib> 

using namespace std;

class Point{
	
	int x, y;	//x, y의 좌표값
	
public :
	
	void set(int x, int y){
		this->x=x;
		this->y=y;
	}
	void showPoint(){
		cout << "(" << x << ", " << y << ")" << endl;
	}
	
};

class colorPoint : public Point{
	
	string color;
	
public:
	
	void setColor(string color){
		this->color=color;
	}
	void showColorPoint(){
		cout << color << ": ";
		showPoint();	//기본 클래스의 맴버 함수를 호출한다. 
	}
	
};

int main(int argc, char** argv) {
	
	Point p;	//기본 클래스의 객체 p를 생성한다.
	colorPoint cp;		//파생 클래스의 객체 cp를 생성한다.
	
	//재사용성 확인하기
	cp.set(3,4);
	cp.setColor("Red");
	cp.showColorPoint(); 
	
	return 0;
}
