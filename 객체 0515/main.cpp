#include <iostream>

using namespace std;

int sum(int a){			// 1번 sum 함수 : a에서 b까지 합하기 
	int s = 0;
	for(int i = 0; i<=a; i++){
		s+=i;
	}
	return s;
}

int sum(int a, int b){	// 2번 sum 함수 : 0에서 a까지 합하기 
	int s = 0;
	for(int i = a; i<=b; i++){
		s+=i;
	}
	return s;
}

int main(int argc, char** argv) {
	
	cout << sum(3, 5) << endl;	//2번 sum 함수 실행이 되어 3부터 5까지 합해진 값을 출력 
	cout << sum(3) << endl;		//1번 sum 함수 실행이 되어 0부터 3까지 합해진 값을 출력 
	cout << sum(100) << endl;	//1번 sum 함수 실행이 되어 0부터 100까지 합해진 값을 출력 
	
	return 0;
}
