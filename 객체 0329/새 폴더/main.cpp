#include <cstdlib>
#include <iostream>
#include "Circle.h"

using namespace std;

int main(int argc, char *argv[])
{
    Circle donut; // �Ű� ���� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30); // �Ű� ���� �ִ� ������ ȣ��
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
