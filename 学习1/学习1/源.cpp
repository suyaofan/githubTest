#include <iostream>
#include <Windows.h>	
#include <string>

using namespace std;

int main(void) {

	char num;
	cout << "��������(a--d):";
	cin >> num;

	switch (num) {
	case 'a':
		cout << "����������һ!";
		break;
	case 'b':
		cout << "���������ڶ�";
		break;
	case 'c':
		cout << "������������";
		break;
	case 'd':
		cout << "������������";
		break;
	default:
		cout << "�����������!,��������a-b";
		
	}
	








	system("pause");
	return 0;
}