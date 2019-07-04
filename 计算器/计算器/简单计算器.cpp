#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	double num1, num2, result;
	cout << "---------简单计算器---------"<<endl;
	cout << "请输入第一个数:";
	cin >> num1;
	cout << "请输入第二个数:";
	cin >> num2;
	cout << "----加减乘除计算结果如下-----"<<endl;
	result = num1 + num2;
	cout << num1 <<"+"<<num2<<"="<< result << endl;
	result = num1 - num2;
	cout << num1 << "-" << num2 << "=" << result << endl;
	result = num1 * num2;
	cout << num1 << "*" << num2 << "=" << result << endl;
	result = num1 / num2;
	cout << num1 << "/" << num2 << "=" << result << endl;
	system("pause");
	return 0;
}