#include <iostream>
#include <Windows.h>
#include <string>	
using namespace std;

int main(void) {
	short hours;
	short min;
	short sec;
	cout << "-----动态时钟-----" << endl;
	cout << "---请先开始对时---" << endl;
	cout << "请输入当前(时):";
	cin >> hours;
	cout << "请输入当前(分):";
	cin >> min;
	cout << "请输入当前(秒):";
	cin >> sec;
	
	while (1) {
		if (hours >= 24) {
			hours = 0;
		}
		for (hours; hours < 24; hours++) {
			for (min; min < 60; min++) {
				for (sec; sec < 60; sec++) {
					cout << hours << "(点)" << " : " << min << "(分)" << " : " << sec << "(秒)";
					Sleep(1000);
					system("cls");
					cout << "---------当前时间---------" << endl;
				}
				sec = 0;
			}
			min = 0;
		}
	}
	system("pause");
	return 0;

}