#include <iostream>
#include <cstdlib>

using namespace std;

class Rectangle{
public:
	Rectangle();
	Rectangle(int r);
	Rectangle(int r, int k);
	int width, height;	
	bool isSquare();
	
};

Rectangle::Rectangle(){
	width = height = 1;
}

Rectangle::Rectangle(int r){
	width = r;
	height = r;
}

Rectangle::Rectangle(int r, int k){
	width = r;
	height = k;
}

bool Rectangle::isSquare(){
	if(width==height){
		return true;
	}
	else
		return false;
}

int main(int argc, char** argv) {
	
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if(rect1.isSquare()){
		cout << "rect1은 정사각형이다." << endl;
	}
	
	if(rect2.isSquare()){
		cout << "rect2은 정사각형이다." << endl;
	}
	
	if(rect3.isSquare()){
		cout << "rect3은 정사각형이다." << endl;
	}
	
	
	return 0;
}
