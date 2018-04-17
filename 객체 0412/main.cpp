#include <iostream>
#include <cstdlib>

using namespace std;

class Sample{
	
	int a;
	
public:
	
	Sample(){
		a = 100;
		cout << a << ' ';
	}
	Sample(int x){
		a = x;
		cout << a << ' ';
	}
	Sample(int x, int y){
		a = x*y;
		cout << a << ' ';
	}
	int get(){
		return a;
	}
}; 



int main(int argc, char** argv) {
	
	int sum=0;
	Sample arr[3];
	Sample arr2D[2][2] = {{Sample(2,3), Sample(2,4)},{Sample(5), Sample()}};
	Sample *p = arr;
	
	cout << endl << endl;
	
	for(int i = 0 ; i < 3 ; i++){
		sum += p[i].get();			// sum += p->get();	p++; ±³¼ö´Ô ÄÚµå  
	}
	cout << "arrÀÇ ÃÑÇÕÀº : " << sum << endl << endl; 
	
	sum = 0;
	
	for(int i = 0 ; i < 2 ; i++){
		for(int j = 0; j < 2 ; j++){
			sum += arr2D[i][j].get();
		}
	}
	cout << "arr2DÀÇ ÃÑÇÕÀº : " << sum << endl;
	
	return 0;
}
