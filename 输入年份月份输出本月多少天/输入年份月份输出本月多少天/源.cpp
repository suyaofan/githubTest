#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main(void) {
	int years;
	int mouth;
	bool flags;
	cout << "������һ�����(��):";
	cin >> years;
	cout << "������һ���·�(��):";
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
		cout << years << "��" << mouth << "����31��" << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << years << "��" << mouth << "����30��" << endl;
		break;
	case 2:
		if (flags == true) {
			cout << years << "��" << mouth << "����29��" << endl;
		} else {
			cout << years << "��" << mouth << "����28��" << endl;
		}
	}
	system("pause");
	return 0;
}