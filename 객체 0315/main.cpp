#include <cstdlib> 
#include <iostream>
#include <cstring>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	double biggest(double x[], int n){
		double r;
		r=x[0];
		
		for(int i=0;i<n;i++){
			if(r < x[i])
				r = x[i];
		}
		
		return r;
	}

int main(int argc, char** argv) {
	/*
	//���ڿ�ó��1 : c-String ��� : c-String�� ��(Null) ���ڷ� ������ char �迭�� �����ؼ� ����Ѵ�. 
	//�� ���ڿ��� '\0' Ȥ�� 0 �� �ִ�. 
	
	char password1[100];
	char password2[100];
	
	cout << " �� ��ȣ�� �Է��ϼ��� >> ";
	cin >> password1;
	cout << " ������ ��ȣ�� Ȯ���ϼ��� (���Է�) >> ";
	cin >> password2;
	
	if(strcmp(password1,password2) == 0)
	{
		cout << " ��й�ȣ ����Ϸ� ";
	}
	else
		cout << " ��й�ȣ�� �ٸ��ϴ�. �缳�� �ϼ��� ";
	cout << endl; 
	*/
	//�ּ��Է�
	/*
	char address[100];
	cout << " �ּҸ� �Է��Ͻÿ� : ";	
	//cin >> address;					//cin �Լ��� ������ ������ �Է��� �����Ƿ� �� ���ķδ� ����� ���� �ʴ� �������� �ִ�. 
	cin.getline(address, 100, '\n');	//��� cin.getline �̶�� �ɹ��Լ��� ����ϸ� ������ ������ ���ڿ��� �Է��� �����ϴ�. 
	cout << " ����� �ּҴ� ���Ⱑ �½��ϱ� ? " << address << endl;
	
	char city[21];
	cout << " ���ø� �Է��ϼ��� : ";
	cin.getline(city, 21, '.');
	cout << " �Է��� ���ô� " << city << endl;
	*/
	/*
	//string Ŭ���� 
	
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;
	
	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";
	
	getline(cin, singer);
	if(singer == elvis)
		cout << "�¾ҽ��ϴ�."; 
	else
		cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl; 
	*/
	/*	�ǽ����� 1�� 
	for(int i = 1 ; i <= 100 ; i++){
		
		cout << i;
		
		if(i%10==0){
			cout << endl;
		}
		else
			cout << '\t';
	
	} 
	*/
	/*	�ǽ����� 2�� 
	for(int i=1;i<=9;i++){
		
		for(int j=1;j<=9;j++){
			
			cout << j << 'x' << i << '=' << j*i << '\t';
			
		}
		
		cout << endl;
		
	}
	*/
	/*	 �ǽ����� 3�� 
	int a, b;
	
	cout << "�� ���� �Է��϶� >> ";
	cin >> a >> b;
	cout << " ū �� = " ;
	if(a>b){
		cout << a;
	}
	else
		cout << b;
	*/
	
	double a[5];

	cout << "5���� �Ǽ��� �Է��϶� >> ";
	
	for(int i=0;i<5;i++){
		
		cin >> a[i];
		
	} 
	
	cout << "���� ū�� = " << biggest(a, 5) << endl;
	
	return 0;
}
