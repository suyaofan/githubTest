#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {

	int hours, min, sec;
	
	cout << "--------��ʱ��--------"<<endl;
	cout << "----���趨��ʱ��---- " << endl;
	cout << "������(Сʱ):";
	cin >> hours;
	cout << "������(����):";
	cin >> min;
	cout << "������(��):";
	cin >>sec;

	for (hours; hours >= 0; hours--) {
		for (min; min >= 0; min--) {
			for (sec; sec >= 0; sec--) {
				cout << "��ʱ���� " << hours << "(Сʱ)" << ":" << min << "(����)" << ":" << sec << "(��) " << "�����"<<endl;
				Sleep(1000);
				system("cls");
				cout << "----------��ǰ����ʱ----------" << endl;
			}
			sec = 59;
		}
		min = 59;
	}
	cout << "��ʱ����,ллʹ��" << endl;



	system("pause");
	return 0;
}