#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(void) {
	int x, y, z;
	cout << "请输入三个数:";
	cin >> x >> y >> z;
	//三个数求最大值
	if (x > y) {
		if (x > z) {
			cout << "最大的数是:" << x<<endl;
		}
		else {
			cout << "最大的数是:" << z<<endl;
		}
	}
	else {
		if (y > z) {
			cout << "最大的数是:" << y<<endl;
		}
		else {
			cout << "最大的数是:" << z << endl;
		}
	}





	system("pause");
	return 0;
}