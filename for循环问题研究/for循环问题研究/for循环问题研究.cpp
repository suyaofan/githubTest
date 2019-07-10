#include <iostream>
#include <Windows.h>	

using namespace std;

int main(void) {
	unsigned sec;

	cout << "输入一个整数:";
	cin >> sec;

	for (sec; sec >= 0; sec--) {
		cout << "---" << sec << "---";
		Sleep(1000);
		system("cls");
	}
	sec = 59;
	// 最后一次循环的时候 sec=0 条件成立, 执行循环体 , 循环体完成以后, 执行sec-- , sec的值为42亿
	//然后再次循环    sec=42亿 条件还是成立的  用永远的循环下去,成为一个死循环  所以sec=59,
	// 永远不会执行 除非  循环完42亿次.

	system("pause");
	return 0;
}