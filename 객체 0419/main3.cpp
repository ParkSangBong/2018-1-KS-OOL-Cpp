#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {

	//	1. 문자열 치환 =연산자 
	string a = "Java", b= "C++";
	cout << " a = " << a << " b = " << b << endl;	//실행결과 a = Java b = c++ 
	
	a=b;
	
	cout << " 치환 후 a = " << a << ", b = " << b << endl;	//치환 후 실행결과 a=c++, b=c++
	
	//	2. 문자열 비교 compare()
	string name = "Hong";
	string subName = "GilDong";
	
	int res = name.compare(subName);
	
	if(res==0){
		cout << "두 문자열이 같다." << endl;
	}
	else if(res < 0){	//name 이 alphabet순서에서 앞에 나올경우 
		cout << name << " < " << subName << endl;
	}
	else{				//name 이 alphabet순서에서 뒤에 나올경우 
		cout << name << " > " << subName << endl;
	}

	//	3. 문자열 삽입 insert()
	cout << "012345678901234567890\n";
	a = "I love C++";
	a.insert(2, "really ");	// 실행결과 012345678901234567890
							//			I really love C++ 
	
	//	4. 문자열길이 Length()
	int len = a.length();
	cout << "문자열의 길이 = " << len << endl;	//실행결과 문자열의 길이 = 17
	
	//	5. 문자열삭제 erase()
	a.erase(0, 7);	//0번 인덱스 부터 7개를 지운다. 6번 인덱스까지 지운다. 
	cout << "문자열 0~7까지 삭제" << a << endl;	//실행결과 문자열 0~7까지 삭제y love C++
	
	//	6. 문자열일부분 추출 substr()
	cout <<    "012345678901234567890\n";
	b = "I love C++";
	string c = b.substr(2,4);	//2번 인덱스부터 4개를 추출한다. 
	cout << "c = " << c << endl;
	
	//	7. 문자열 검색 find() 
	cout <<    "012345678901234567890\n";
	b = "I love love C++";
	
	int index = b.find("love");
	cout << "love의 인덱스는 " << index << endl;	//실행결과 2 why? 동일한 단어는 처음 나온 단어의 인덱스만 찾는다. 
	
	index = b.find("love", index+1); 
	cout << "love의 인덱스는 " << index << endl;
	
	//	8. 인덱스번호를 지정해서 문자를 읽는 방법 at() 
	char ch1 = b.at(12);
	cout << "12번 인덱스의 문자는 " << ch1 << endl;
	
	return 0;
}
