#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	cout << " 입력할 정수의 개수를 입력하세요 : ";
	cin >> n;
	
	if(n <= 0){
		return 0;
	}
	
	int *p = new int[n];
	if(!p){
		cout << "메모리를 할당할 수 없습니다. ";
		return 0;
	}

	for(int i = 0 ; i < n ; i++){
		cout << i+1 << "번째 정수 : ";
		cin >> p[i];
	}
	
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		sum += p[i];
	}
	cout << " 평균 = " << sum / n << endl;
	
	delete[] p;
	
	return 0;
}
