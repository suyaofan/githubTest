#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string word;
	int length=0;
	int count=0;


	cout << "������������:"<<endl;

	while (1) {
		if (!(cin >> word)) {
			break;
		}
		
		count++;
		length += word.length();


	}

	cout << "�ܹ�������:" << count << "������" << endl;
	cout << "�ܳ���Ϊ:" << length << "�ֽ�" << endl;




	system("pause");
	return 0;
}