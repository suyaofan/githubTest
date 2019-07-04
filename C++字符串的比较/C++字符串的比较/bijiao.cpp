#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string addr;
	cout << "请输入您的地址:" << endl;
	cin >> addr;
	if (addr == "山西") {
		cout << "我们是老乡哦~~!" << endl;
	}
	else {
		cout << "我们不是一个地方的哦~~!" << endl;
	}





	system("pause");
	return 0;
}