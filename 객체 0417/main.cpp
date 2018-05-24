#include <iostream>
#include <cstdlib>

using namespace std;

class Circle{
	
	int radius;
	
public:
	
	Circle();				//�⺻ ������ 
	Circle(int r);			//�Ű����� ���� ������ 
	~Circle();				//�Ҹ��� 
	
	void setRadius(int r){
		radius = r;
	}
	double getArea(){
		return 3.14 * radius * radius;
	}
	
};

Circle::Circle(){
	
	radius = 1;
	cout << " ������ ���� radius = " << radius << endl;
	
} 

Circle::Circle(int r){
	radius = r;
	cout << " ������ ���� radius = " << radius << endl;
}

Circle::~Circle(){
	cout << " �Ҹ��� ���� radius = " << radius << endl;
}


int main(int argc, char** argv) {
	
	//��ü �迭 ���� - �����Ҵ� (new) -> ��(heap) ������ ����
	Circle *pArray = new Circle[3];	//�����Ҵ��� ������ �迭�� �ּҰ� �����ͷ� �Ѿ� �´� �׷��� ������ ��ü �����ͷ� �ּҸ� �޴´�. 
									//��ü �迭�� �������� �����Ѵ�. ��ü �迭�� �����Ҷ����� �ʱ�ȭ ��Ű�� ���� �ڵ����� �⺻������ �Լ��� ȣ���� �ȴ�. 
	//�������� ����
	for(int i=0 ; i<3 ; i++){
		pArray[i].setRadius(10);
	}
	
	//��ü �迭�� ������ ���
	for(int i=0 ; i<3 ; i++) {
		cout << pArray[i].getArea() << endl;
	}
	 
	 Circle *p = pArray;	//*p�� pArray�� �ּҸ� ����
	 
	 for(int i=0 ; i<3 ; i++) {
	 	cout << p->getArea() << endl;
	 	p++;	//���� �ּҷ� ����  
	 }
	 
	 delete[]  pArray;		//�� ������ �Ҵ���� ��ü �迭 ������ �ݳ��ϴ� ���� 
	 						//��ü�� �������� ���� �ϰ� ��ȯ �Ҷ��� delete�� ����ϸ� ������
							//��ü �迭�� ��ȯ�Ҷ��� delete �ڿ� �ݵ�� [] �� �ٿ���� �Ѵ�. 
	return 0;
}









