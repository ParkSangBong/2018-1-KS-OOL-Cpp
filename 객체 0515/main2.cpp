#include <iostream>

using namespace std;
/*	1���Լ� 
void fillLine(){	//25���� '*'���ڸ� �� ���ο� ��� 
	for(int i=0; i<25; i++){
		cout << '*';
	}
	cout << endl;
}
	2���Լ� 
void fillLine(int n, char c){	//n���� c ���ڸ� �� ���ο� ��� 
	for(int i=0; i<n; i++){
		cout << c;
	}
	cout << endl;
}
*/
void fillLine(int n=25, char c='*'){	//1���� 2�� �Լ��� ����Ʈ �Ű� ������ �̿��Ͽ� �ϳ��� �Լ��� ����.	n���� c���ڸ� �� ���ο� ��� 
	for(int i=0; i<n; i++){
		cout << c;
	}
	cout << endl;
}

int main(int argc, char** argv) {

	fillLine();				//	����Ʈ �Ű������� ���� 25���� *�� �� ���ο� ����Ѵ�. 
	fillLine(10, '%'); 		//	�Ű������� �Է°��� �����Ƿ� 10���� %�� �� ���ο� ����Ѵ�. 

	return 0;
}
