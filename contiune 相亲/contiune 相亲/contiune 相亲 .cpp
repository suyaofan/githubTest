#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(void) {

	int num;
	string ret;
	string houseRet;
	string carRet;
	cout << "---------您好!欢迎进入相亲匹配系统---------" << endl;
	cout << "请输入您想要相亲的次数:";
	cin >> num;

	for (int a = 1; a <= num; a++) {
		cout << "开始第" << a << "次相亲";
		for (int x = 0; x < 3; x++) {
			cout << ".";
			Sleep(900);
		}
		cout << "--------------------------" << endl;
		cout << "你喜欢吗我 ?(喜欢/不喜欢):";
		cin >> ret;
		cout << "--------------------------"<<endl;
		cout << "你有房吗 ?(有/没有):";
		cin >> houseRet;
		cout << "--------------------------"<<endl;
		cout << "你有车吗 ?(有/没有):";
		cin >> carRet;
			
		
			if (houseRet == "有" && carRet == "有") {
				cout << endl;
				cout << "emmmm";
				for (int a = 0; a < 4; a++) {
					cout << " .";
					Sleep(900);
				}
				cout << "我觉得我们太合适了,我们交往吧~~!" << endl;
				cout << endl;
				cout << "----您已遇到合适的人----" << endl;
				cout << "开启浪漫之旅";
				for (int a = 0; a < 4; a++) {
					cout << ".";
					Sleep(900);
				}
				cout << endl;
				system("pause");
				return 0;
			}
			else if (houseRet == "没有" && carRet == "没有") {
				cout << endl;
				cout << "emmmm";
				for (int b = 0; b < 4; b++) {
					cout << ".";
					Sleep(900);
				}
				cout << endl;
				cout << "对不起,我们不合适~~~~~~!!!" << endl;
				cout << endl;
				cout << "重新开始下一轮相亲~~~~~~" << endl;
				system("pause");
				system("cls");
			}
			else if ((houseRet == "有" && carRet == "没有") || (houseRet == "没有" && carRet == "有")) {
				cout << "emmmm";
				for (int c = 0; c < 4; c++) {
					cout << ".";
					Sleep(900);
				}
				cout << endl;
				cout << "你还不错哦!!,我们有空在联系哦!~~" << endl;
				cout << "emmmmm,你还不错哦,我们加个微信吧~~~~" << endl;
				system("pause");
				return 0;
			}
			else {
				cout << "输入非法,请重新输入!" << endl;
				goto error;
			}

		
			
		

	}
	error:
	cout << "您的相亲已结束~~~" << endl;
	system("pause");
	return 0;
}
