#include <iostream>
#include <cstdlib>

using namespace std;

class Circle{
	
	int radius;
	
public:
	
	Circle();				//기본 생성자 
	Circle(int r);			//매개변수 포함 생성자 
	~Circle();				//소멸자 
	
	void setRadius(int r){
		radius = r;
	}
	double getArea(){
		return 3.14 * radius * radius;
	}
	
};

Circle::Circle(){
	
	radius = 1;
	cout << " 생성자 실행 radius = " << radius << endl;
	
} 

Circle::Circle(int r){
	radius = r;
	cout << " 생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
	cout << " 소멸자 실행 radius = " << radius << endl;
}


int main(int argc, char** argv) {
	
	//객체 배열 생성 - 동적할당 (new) -> 힙(heap) 영역에 생성
	Circle *pArray = new Circle[3];	//동적할당을 받으면 배열의 주소가 포인터로 넘어 온다 그렇기 때문에 객체 포인터로 주소를 받는다. 
									//객체 배열을 동적으로 생성한다. 객체 배열을 생성할때에는 초기화 시키기 위해 자동으로 기본생성자 함수가 호출이 된다. 
	//반지름을 설정
	for(int i=0 ; i<3 ; i++){
		pArray[i].setRadius(10);
	}
	
	//객체 배열의 면적을 출력
	for(int i=0 ; i<3 ; i++) {
		cout << pArray[i].getArea() << endl;
	}
	 
	 Circle *p = pArray;	//*p는 pArray의 주소를 대입
	 
	 for(int i=0 ; i<3 ; i++) {
	 	cout << p->getArea() << endl;
	 	p++;	//다음 주소로 증가  
	 }
	 
	 delete[]  pArray;		//힙 영역에 할당받은 객체 배열 공간을 반납하는 구문 
	 						//객체를 동적으로 생성 하고 반환 할때는 delete만 사용하면 되지만
							//객체 배열을 반환할때는 delete 뒤에 반드시 [] 를 붙여줘야 한다. 
	return 0;
}









