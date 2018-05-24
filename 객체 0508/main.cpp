#include <iostream>
using namespace std; 

void square(int &n){
	n = n + n;
}

int main(int argc, char** argv) {
	
	int m = 2;
	square(m);
	cout << m;
	
	return 0;
}
