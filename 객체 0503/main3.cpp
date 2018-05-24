#include <iostream>
using namespace std; 

bool average(int a[], int size, int &avg){	//참조 매개 변수 avg를 사용 
	
	if(size <= 0){
		return false;
	}
	
	int sum = 0;
	for(int i=0 ; i<size ; i++){
		sum += a[i];
	}
	
	avg = sum/size;
	return true;
	
}

int main(int argc, char** argv) {
	
	int x[] = {0,1,2,3,4,5};
	int avg;
	
	if(average(x, 6, avg)){					//참조 매개 변수를 사용하기 때문에 간단히 변수를 넘겨주기만 하면 값이 실제로도 바뀌기 때문에 좋다. 
		cout << "평균은 " << avg << endl;	//함수 내에서도 참조 매개 변수를 보통 변수처럼 사용 하기 때문에 작성하기 쉽고 보기 좋은 코드가 된다는 장점이 있다. 
	}
	else
		cout << "매개 변수 오류 " << endl;
		
	if(average(x, -2, avg)){
		cout << "평균은 " << avg << endl;
	}
	else
		cout << "매개 변수 오류 " << endl;

	return 0;
}
