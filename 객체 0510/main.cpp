#include <iostream>

using namespace std;

void copy(int &dest, int &src){
	dest = src;
}

int main(int argc, char** argv) {
	
	int a = 4, b = 5;
	copy(a,b);
	cout << a << ' ' << b << endl;
	
	return 0;
}
