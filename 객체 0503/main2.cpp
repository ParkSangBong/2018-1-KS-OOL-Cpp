#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n;			//�������� refn�� ����. refn�� n�� ��Ī�� ���� ���̴�. 
	n=4;					//refn�� n�� ������ �����ϱ� ������ n�� 4�� �Ǹ� refn�� 4�� �ȴ�. 
	refn++;					//refn�� 1�� �����ϸ� n�� ����, 5 �� 5�� �ȴ�. 
	cout << i << '\t' << n << '\t' << refn << endl;	//	1	5	5
	
	refn = i;				//refn�� i�� ���� ���Խ�Ų��.refn�� n �׸��� i ��� 1�� �ȴ�. 
	refn++;					//refn�� �����ϸ� n�� ���� �����Ѵ�. refn�� n�� 2�� �ȴ�. 
	cout << i << '\t' << n << '\t' << refn << endl;	//	1	2	2
	
	int *p = &refn;			//p�� refn�� �ּҸ� ������. �� p�� n�� �ּҸ� ������. 
	*p = 20;				//p�� ����Ű�� ���� 20�� �ȴ�. �� refn�� n �Ѵ� 20�� �ȴ�. 
	cout << i << '\t' << n << '\t' << refn << endl;	//	1	20	20
	
	return 0;
}
