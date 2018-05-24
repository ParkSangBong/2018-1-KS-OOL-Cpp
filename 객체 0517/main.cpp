#include <iostream>
#include <cstdlib> 

using namespace std;

class Point{
	
	int x, y;	//x, y�� ��ǥ��
	
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
		showPoint();	//�⺻ Ŭ������ �ɹ� �Լ��� ȣ���Ѵ�. 
	}
	
};

int main(int argc, char** argv) {
	
	Point p;	//�⺻ Ŭ������ ��ü p�� �����Ѵ�.
	colorPoint cp;		//�Ļ� Ŭ������ ��ü cp�� �����Ѵ�.
	
	//���뼺 Ȯ���ϱ�
	cp.set(3,4);
	cp.setColor("Red");
	cp.showColorPoint(); 
	
	return 0;
}
