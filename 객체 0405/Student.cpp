#include <iostream>
#include <cstdlib>
#include "Student.h"

using namespace std;

Student::Student(){
	
}

Student::Student(int SN){
	mSN = SN;
	cout << "학번이 " << mSN << "인 객체 생성" << endl;
}
	
int Student::getmSN(){
	return mSN;
}						
int Student::getmKor(){
	return mKor;
}
int Student::getmEng(){
	return mEng;
}
int Student::getmMath(){
	return mMath;
}
string Student::getmName(){
	return mName;
}

void Student::setmSN(int Sn){
	mSN = Sn;
}
void Student::setmKOR(int Kor){
	mKor = Kor;
}
void Student::setmENG(int Eng){
	mEng = Eng;	
}
void Student::setmMath(int Math){
	mMath = Math;
}
void Student::setmName(string Name){
	mName = Name;
}
double Student::getAvg(){
	mAvg = 	(mKor + mEng + mMath) / 3;
	return mAvg;
}

