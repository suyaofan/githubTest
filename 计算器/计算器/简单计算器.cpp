#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	double num1, num2, result;
	cout << "---------�򵥼�����---------"<<endl;
	cout << "�������һ����:";
	cin >> num1;
	cout << "������ڶ�����:";
	cin >> num2;
	cout << "----�Ӽ��˳�����������-----"<<endl;
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