#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int num;
	int num2;
	cout << "����������:";
	cin >> num;
	cout << "����������:";
	cin >> num2;
	

	for (int i=0; num>i; i++) {    //ѭ����һ��
		
		for (int x = 0; num2 > x; x++) {
			cout << "*" ;
		}
		cout << endl;


	}
	



	system("pause");
	return 0;

}