#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(void) {

	int num;
	string ret;
	string houseRet;
	string carRet;
	cout << "---------����!��ӭ��������ƥ��ϵͳ---------" << endl;
	cout << "����������Ҫ���׵Ĵ���:";
	cin >> num;

	for (int a = 1; a <= num; a++) {
		cout << "��ʼ��" << a << "������";
		for (int x = 0; x < 3; x++) {
			cout << ".";
			Sleep(900);
		}
		cout << "--------------------------" << endl;
		cout << "��ϲ������ ?(ϲ��/��ϲ��):";
		cin >> ret;
		cout << "--------------------------"<<endl;
		cout << "���з��� ?(��/û��):";
		cin >> houseRet;
		cout << "--------------------------"<<endl;
		cout << "���г��� ?(��/û��):";
		cin >> carRet;
			
		
			if (houseRet == "��" && carRet == "��") {
				cout << endl;
				cout << "emmmm";
				for (int a = 0; a < 4; a++) {
					cout << " .";
					Sleep(900);
				}
				cout << "�Ҿ�������̫������,���ǽ�����~~!" << endl;
				cout << endl;
				cout << "----�����������ʵ���----" << endl;
				cout << "��������֮��";
				for (int a = 0; a < 4; a++) {
					cout << ".";
					Sleep(900);
				}
				cout << endl;
				system("pause");
				return 0;
			}
			else if (houseRet == "û��" && carRet == "û��") {
				cout << endl;
				cout << "emmmm";
				for (int b = 0; b < 4; b++) {
					cout << ".";
					Sleep(900);
				}
				cout << endl;
				cout << "�Բ���,���ǲ�����~~~~~~!!!" << endl;
				cout << endl;
				cout << "���¿�ʼ��һ������~~~~~~" << endl;
				system("pause");
				system("cls");
			}
			else if ((houseRet == "��" && carRet == "û��") || (houseRet == "û��" && carRet == "��")) {
				cout << "emmmm";
				for (int c = 0; c < 4; c++) {
					cout << ".";
					Sleep(900);
				}
				cout << endl;
				cout << "�㻹����Ŷ!!,�����п�����ϵŶ!~~" << endl;
				cout << "emmmmm,�㻹����Ŷ,���ǼӸ�΢�Ű�~~~~" << endl;
				system("pause");
				return 0;
			}
			else {
				cout << "����Ƿ�,����������!" << endl;
				goto error;
			}

		
			
		

	}
	error:
	cout << "���������ѽ���~~~" << endl;
	system("pause");
	return 0;
}
