#include <iostream>
#include <Windows.h>
#include <string>	
using namespace std;

int main(void) {
	short hours;
	short min;
	short sec;
	cout << "-----��̬ʱ��-----" << endl;
	cout << "---���ȿ�ʼ��ʱ---" << endl;
	cout << "�����뵱ǰ(ʱ):";
	cin >> hours;
	cout << "�����뵱ǰ(��):";
	cin >> min;
	cout << "�����뵱ǰ(��):";
	cin >> sec;
	
	while (1) {
		if (hours >= 24) {
			hours = 0;
		}
		for (hours; hours < 24; hours++) {
			for (min; min < 60; min++) {
				for (sec; sec < 60; sec++) {
					cout << hours << "(��)" << " : " << min << "(��)" << " : " << sec << "(��)";
					Sleep(1000);
					system("cls");
					cout << "---------��ǰʱ��---------" << endl;
				}
				sec = 0;
			}
			min = 0;
		}
	}
	system("pause");
	return 0;

}