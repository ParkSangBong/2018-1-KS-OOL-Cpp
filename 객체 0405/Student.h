#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student{
	
	//캡슐화에 대한 설명 
	
	int mSN;						
	int mKor;								
	int mEng;
	int mMath;
	string mName;
	double mAvg;
	
public:
	
	//접근자 
	
	int getmSN();
	int getmKor();
	int getmEng();
	int getmMath();
	string getmName();
	
	//설정자	
	
	void setmSN(int Sn);
	void setmKOR(int Kor);
	void setmENG(int Eng);
	void setmMath(int Math);
	void setmName(string Name);

	//생성자 
	Student();
	Student(int SN);
	
	//평균 계산 함수	
	double getAvg();
	
};

#endif
