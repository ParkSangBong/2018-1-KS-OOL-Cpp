#include <iostream>
#include <cstdlib>
#include <cstring> 

using namespace std;

//Ŭ���� �����ϴ� ��ġ�� maim() �Լ� ���� ���´�. (Ŭ������ ���赵 �̱� �����̴�.) 
class Circle{			//Ŭ������ ����� 

public:
	int radius;			//�ɹ����� 
	double getArea();	//�ɹ��Լ�
	Circle();			//�⺻�������Լ� 
	Circle(int r);
};

//Ŭ������ ������ 
Circle::Circle(){
	radius = 1;
	cout << "�⺻�������Լ� ����" << endl;
	cout << "������ " << radius << endl; 
	
} 

Circle::Circle(int r){
	radius = r;
	cout << "�Ű����� 1�� �ִ� �������Լ� ����" << endl;
	cout << "������ " << radius << endl;
}

double Circle::getArea(){		// �ɹ��Լ� ������ �ݵ�� :: �������������ڸ� �ٿ��ش�. 
	return 3.14*radius*radius; 	// �������������ڴ� �ش� �Լ��� ��� ���ϴ����� �� �� �ְ� ���ش�. 
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
	//��ü�������1	(Ŭ�����̸� + ��ü�̸�) 
	Circle donut;
	//������ ��ü�� �ɹ��� �����ϴ� ����� ��ü�̸��� . �����ڸ� ����Ͽ� �ɹ������� ����. 
	donut.radius = 1;		// �ɹ��Լ��� �����ϴ� ��� (��ü�̸� + . + �ɹ�����)
	double area = donut.getArea();		//������ ����ϴ� �ɹ��Լ��� �̿��Ͽ� ����� ������ area ������ �����Ѵ�. 
	cout << "donut ������ " << area << endl;
	
	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
	*/
	/*
	Rectangle rect;
	rect.width=3;
	rect.height=5;
	
	cout << "�簢���� ������ " << rect.getArea() << endl; 
	*/
	
	//�������Լ��� ��ü�� �����ɶ� �ڵ����� ȣ��Ǵ� �Լ��̴�.
	//�������Լ��� �̸��� Ŭ�����̸��� ���� �̸��� ����. 
	Circle donut;	//donut ��ü ������ �Ű������� ���� ��ü�� �����Ͽ��ٴ� ���̰� 
					//�Ű������� ���� ��ü�� �����Ҷ����� �⺻ ������ �Լ��� ȣ���Ѵ�. 
	
	Circle pizza(30);	//�Ű������� �ϳ� �ִ� ��ü�� �����Ѵ�.				
 
	
	return 0;
}
