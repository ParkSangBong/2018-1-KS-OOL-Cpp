#include <iostream>

using namespace std;

int sum(int a){			// 1�� sum �Լ� : a���� b���� ���ϱ� 
	int s = 0;
	for(int i = 0; i<=a; i++){
		s+=i;
	}
	return s;
}

int sum(int a, int b){	// 2�� sum �Լ� : 0���� a���� ���ϱ� 
	int s = 0;
	for(int i = a; i<=b; i++){
		s+=i;
	}
	return s;
}

int main(int argc, char** argv) {
	
	cout << sum(3, 5) << endl;	//2�� sum �Լ� ������ �Ǿ� 3���� 5���� ������ ���� ��� 
	cout << sum(3) << endl;		//1�� sum �Լ� ������ �Ǿ� 0���� 3���� ������ ���� ��� 
	cout << sum(100) << endl;	//1�� sum �Լ� ������ �Ǿ� 0���� 100���� ������ ���� ��� 
	
	return 0;
}
