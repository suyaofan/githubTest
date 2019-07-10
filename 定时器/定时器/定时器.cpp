#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {

	int hours, min, sec;
	
	cout << "--------定时器--------"<<endl;
	cout << "----请设定计时器---- " << endl;
	cout << "请输入(小时):";
	cin >> hours;
	cout << "请输入(分钟):";
	cin >> min;
	cout << "请输入(秒):";
	cin >>sec;

	for (hours; hours >= 0; hours--) {
		for (min; min >= 0; min--) {
			for (sec; sec >= 0; sec--) {
				cout << "计时将于 " << hours << "(小时)" << ":" << min << "(分钟)" << ":" << sec << "(秒) " << "后结束"<<endl;
				Sleep(1000);
				system("cls");
				cout << "----------当前倒计时----------" << endl;
			}
			sec = 59;
		}
		min = 59;
	}
	cout << "计时结束,谢谢使用" << endl;



	system("pause");
	return 0;
}