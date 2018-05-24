#include <iostream>

using namespace std;
/*	1번함수 
void fillLine(){	//25개의 '*'문자를 한 라인에 출력 
	for(int i=0; i<25; i++){
		cout << '*';
	}
	cout << endl;
}
	2번함수 
void fillLine(int n, char c){	//n개의 c 문자를 한 라인에 출력 
	for(int i=0; i<n; i++){
		cout << c;
	}
	cout << endl;
}
*/
void fillLine(int n=25, char c='*'){	//1번과 2번 함수를 디폴트 매개 변수를 이용하여 하나의 함수로 만듬.	n개의 c문자를 한 라인에 출력 
	for(int i=0; i<n; i++){
		cout << c;
	}
	cout << endl;
}

int main(int argc, char** argv) {

	fillLine();				//	디폴트 매개변수에 의해 25개의 *를 한 라인에 출력한다. 
	fillLine(10, '%'); 		//	매개변수에 입력값이 있으므로 10개의 %를 한 라인에 출력한다. 

	return 0;
}
