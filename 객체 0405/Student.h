#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student{
	
	//ĸ��ȭ�� ���� ���� 
	
	int mSN;						
	int mKor;								
	int mEng;
	int mMath;
	string mName;
	double mAvg;
	
public:
	
	//������ 
	
	int getmSN();
	int getmKor();
	int getmEng();
	int getmMath();
	string getmName();
	
	//������	
	
	void setmSN(int Sn);
	void setmKOR(int Kor);
	void setmENG(int Eng);
	void setmMath(int Math);
	void setmName(string Name);

	//������ 
	Student();
	Student(int SN);
	
	//��� ��� �Լ�	
	double getAvg();
	
};

#endif
