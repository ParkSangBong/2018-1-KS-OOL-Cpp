#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {

	//	1. ���ڿ� ġȯ =������ 
	string a = "Java", b= "C++";
	cout << " a = " << a << " b = " << b << endl;	//������ a = Java b = c++ 
	
	a=b;
	
	cout << " ġȯ �� a = " << a << ", b = " << b << endl;	//ġȯ �� ������ a=c++, b=c++
	
	//	2. ���ڿ� �� compare()
	string name = "Hong";
	string subName = "GilDong";
	
	int res = name.compare(subName);
	
	if(res==0){
		cout << "�� ���ڿ��� ����." << endl;
	}
	else if(res < 0){	//name �� alphabet�������� �տ� ���ð�� 
		cout << name << " < " << subName << endl;
	}
	else{				//name �� alphabet�������� �ڿ� ���ð�� 
		cout << name << " > " << subName << endl;
	}

	//	3. ���ڿ� ���� insert()
	cout << "012345678901234567890\n";
	a = "I love C++";
	a.insert(2, "really ");	// ������ 012345678901234567890
							//			I really love C++ 
	
	//	4. ���ڿ����� Length()
	int len = a.length();
	cout << "���ڿ��� ���� = " << len << endl;	//������ ���ڿ��� ���� = 17
	
	//	5. ���ڿ����� erase()
	a.erase(0, 7);	//0�� �ε��� ���� 7���� �����. 6�� �ε������� �����. 
	cout << "���ڿ� 0~7���� ����" << a << endl;	//������ ���ڿ� 0~7���� ����y love C++
	
	//	6. ���ڿ��Ϻκ� ���� substr()
	cout <<    "012345678901234567890\n";
	b = "I love C++";
	string c = b.substr(2,4);	//2�� �ε������� 4���� �����Ѵ�. 
	cout << "c = " << c << endl;
	
	//	7. ���ڿ� �˻� find() 
	cout <<    "012345678901234567890\n";
	b = "I love love C++";
	
	int index = b.find("love");
	cout << "love�� �ε����� " << index << endl;	//������ 2 why? ������ �ܾ�� ó�� ���� �ܾ��� �ε����� ã�´�. 
	
	index = b.find("love", index+1); 
	cout << "love�� �ε����� " << index << endl;
	
	//	8. �ε�����ȣ�� �����ؼ� ���ڸ� �д� ��� at() 
	char ch1 = b.at(12);
	cout << "12�� �ε����� ���ڴ� " << ch1 << endl;
	
	return 0;
}
