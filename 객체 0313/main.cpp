#include <cstdlib> 
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int width,height;
	int radius;
	
	cout << "�ʺ� �Է��ϼ��� : ";
	cin >> width;						//Ű���忡�� �ʺ� �Է¹޾� width ������ �������� 
	
	//cin : ǥ�� �Է� ��Ʈ��, ���� �Է¹޴� ��ü�̸� >> �����ڿ� �Բ� �̿��Ͽ� ������ ���� Ű�� �Է¹޴´�. 
	// >> (��Ʈ�� ���⿬����) : Enter Ű�� ĥ �� ������ Ű ���� �����Ѵ�. 
	
	cout << "���̸� �Է��ϼ��� : ";
	cin >> height;
	
	//c++�� ���๮ ���̿� ���������� �����ϴ�.
	int area = width * height; 
	cout << "������ " << area << endl;	//endl�� \n�� ���� �ǹ� 
	
	cout << "�������� �Է��ϼ��� : ";
	cin >> radius;
	
	double area2 = radius * radius * 3.14;
	cout << "���� ������ " << area2 << endl;
	
	system("PAUSE");
	return 0;
}
