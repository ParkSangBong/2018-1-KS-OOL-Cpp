#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	//1. ��ü���� (���� �Ҵ�) 
	string str = "I love";
	str.append(" C++");		//���ٽ� . �����ڸ� ����Ͽ� �����Ѵ�
	cout << str << endl;	//append �Լ��� ���ڿ��� �߰��ϴ� �Լ��̴�. 
	cout << "\n";			//������ : I love c++ 
	 
	//2. ��ü���� (���� �Ҵ�) - heap ������ �Ҵ�Ǿ�����. �����͸� �޴´�. 
	string *p = new string("C++");	//������� *�� �ּҸ� ���� 
	cout << "*p = " << *p << endl;	//������� *�� �ּ��� ������ ��� 
									//������ : p* = c++ 
	p->append(" Great!! ");			//���ٽ� -> �����ڷ� ����
	cout << "*p = " << *p << endl;	//������ : p* = c++ Great!!
	
	return 0;
}
