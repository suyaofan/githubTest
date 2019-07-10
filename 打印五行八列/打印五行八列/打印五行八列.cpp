#include <iostream>
#include <Windows.h>
using namespace std;

int main(void) {
	int num;
	int num2;
	cout << "请输入行数:";
	cin >> num;
	cout << "请输入列数:";
	cin >> num2;
	

	for (int i=0; num>i; i++) {    //循环第一次
		
		for (int x = 0; num2 > x; x++) {
			cout << "*" ;
		}
		cout << endl;


	}
	



	system("pause");
	return 0;

}