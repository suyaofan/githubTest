#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string word;
	int length=0;
	int count=0;


	cout << "请输入多个单词:"<<endl;

	while (1) {
		if (!(cin >> word)) {
			break;
		}
		
		count++;
		length += word.length();


	}

	cout << "总共输入了:" << count << "个单词" << endl;
	cout << "总长度为:" << length << "字节" << endl;




	system("pause");
	return 0;
}