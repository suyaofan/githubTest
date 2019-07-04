#include <iostream>
#include <Windows.h>	
#include <string>

using namespace std;

int main(void) {

	char num;
	cout << "请输入编号(a--d):";
	cin >> num;

	switch (num) {
	case 'a':
		cout << "今天是星期一!";
		break;
	case 'b':
		cout << "今天是星期二";
		break;
	case 'c':
		cout << "今天是星期三";
		break;
	case 'd':
		cout << "今天是星期四";
		break;
	default:
		cout << "您的输入错误!,请输入编号a-b";
		
	}
	








	system("pause");
	return 0;
}