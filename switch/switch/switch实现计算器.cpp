#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {

	double  one;
	double  two;
	double  result;     //������
	char oper;      //�洢�����

	cout << "�������һ��������:";
	cin >> one;
	cout << "������ڶ���������:";
	cin >> two;
	cout << "������Ҫ���е������(+ - * /):";
	cin >>oper;

	cout.flags(cout.fixed);
	cout.precision(3);


	switch (oper) {
	case '+':
		result = one + two;
		cout << one << "+" << two << "=" << result <<endl;
		break;
	case '-':
		result = one - two;
		cout << one << "+" << two << "=" << result <<endl;
		break;
	case '*':
		result = one * two;
		cout << one << "����" << two << "=" << result <<endl;
		break;
	case '/':
		result = one / two;
		cout << one << "����" << two << "=" << result <<endl;
		break;
	default:
		cout << "����������!�����������(+ - * / )!";

	}

	system("pause");
	return 0;
}