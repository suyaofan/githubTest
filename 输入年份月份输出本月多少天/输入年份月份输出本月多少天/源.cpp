#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main(void) {
	int years;
	int mouth;
	bool flags;
	cout << "请输入一个年份(年):";
	cin >> years;
	cout << "请输入一个月份(月):";
	cin >> mouth;

	if (years % 400 == 0) {
		flags = true;
	} else if (years % 4==0 && years % 100 != 0){
		flags = true;
	} else {
		flags = false;
	}
	
	switch (mouth){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << years << "年" << mouth << "月有31天" << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << years << "年" << mouth << "月有30天" << endl;
		break;
	case 2:
		if (flags == true) {
			cout << years << "年" << mouth << "月有29天" << endl;
		} else {
			cout << years << "年" << mouth << "月有28天" << endl;
		}
	}
	system("pause");
	return 0;
}