#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	string names[5];
	
	for(int i=0 ; i<5 ; i++){
		cout << " �̸� >> ";
		getline(cin, names[i], '\n');
	}
	
	string latter = names[0];
	
	for(int i=1 ; i<5 ; i++){
		if(latter < names[i]){
			latter = names[i];
		}
	}
	
	cout << " �������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
	
	return 0;
}
