#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {

	double  one;
	double  two;
	double  result;     //运算结果
	char oper;      //存储运算符

	cout << "请输入第一个运算数:";
	cin >> one;
	cout << "请输入第二个运算数:";
	cin >> two;
	cout << "请输入要进行的运算符(+ - * /):";
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
		cout << one << "乘以" << two << "=" << result <<endl;
		break;
	case '/':
		result = one / two;
		cout << one << "除以" << two << "=" << result <<endl;
		break;
	default:
		cout << "你的输入错误!请输入运算符(+ - * / )!";

	}

	system("pause");
	return 0;
}