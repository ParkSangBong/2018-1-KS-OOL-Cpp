#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n;			//참조변수 refn을 선언. refn은 n의 별칭과 같은 것이다. 
	n=4;					//refn은 n의 공간을 공유하기 때문에 n이 4가 되면 refn도 4가 된다. 
	refn++;					//refn이 1이 증가하면 n도 증가, 5 와 5가 된다. 
	cout << i << '\t' << n << '\t' << refn << endl;	//	1	5	5
	
	refn = i;				//refn에 i의 값을 대입시킨다.refn과 n 그리고 i 모두 1이 된다. 
	refn++;					//refn이 증가하면 n도 같이 증가한다. refn과 n은 2가 된다. 
	cout << i << '\t' << n << '\t' << refn << endl;	//	1	2	2
	
	int *p = &refn;			//p가 refn의 주소를 가진다. 즉 p는 n의 주소를 가진다. 
	*p = 20;				//p가 가르키는 곳이 20이 된다. 즉 refn과 n 둘다 20이 된다. 
	cout << i << '\t' << n << '\t' << refn << endl;	//	1	20	20
	
	return 0;
}
