#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(void) {
	int x, y, z;
	cout << "������������:";
	cin >> x >> y >> z;
	//�����������ֵ
	if (x > y) {
		if (x > z) {
			cout << "��������:" << x<<endl;
		}
		else {
			cout << "��������:" << z<<endl;
		}
	}
	else {
		if (y > z) {
			cout << "��������:" << y<<endl;
		}
		else {
			cout << "��������:" << z << endl;
		}
	}





	system("pause");
	return 0;
}