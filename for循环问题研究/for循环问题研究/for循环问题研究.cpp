#include <iostream>
#include <Windows.h>	

using namespace std;

int main(void) {
	unsigned sec;

	cout << "����һ������:";
	cin >> sec;

	for (sec; sec >= 0; sec--) {
		cout << "---" << sec << "---";
		Sleep(1000);
		system("cls");
	}
	sec = 59;
	// ���һ��ѭ����ʱ�� sec=0 ��������, ִ��ѭ���� , ѭ��������Ժ�, ִ��sec-- , sec��ֵΪ42��
	//Ȼ���ٴ�ѭ��    sec=42�� �������ǳ�����  ����Զ��ѭ����ȥ,��Ϊһ����ѭ��  ����sec=59,
	// ��Զ����ִ�� ����  ѭ����42�ڴ�.

	system("pause");
	return 0;
}