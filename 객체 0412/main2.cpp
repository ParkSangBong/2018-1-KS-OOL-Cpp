#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	cout << " �Է��� ������ ������ �Է��ϼ��� : ";
	cin >> n;
	
	if(n <= 0){
		return 0;
	}
	
	int *p = new int[n];
	if(!p){
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�. ";
		return 0;
	}

	for(int i = 0 ; i < n ; i++){
		cout << i+1 << "��° ���� : ";
		cin >> p[i];
	}
	
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum += p[i];
	}
	cout << " ��� = " << sum / n << endl;
	
	delete[] p;
	
	return 0;
}
