#include <string.h>
#include <Windows.h>
#include <stdio.h>

int main(void) {
	char addr[32];

	printf("���,��������������?\n");
	scanf_s("%s", addr, sizeof(addr));

	if (strcmp(addr, "ɽ��") == 0) {
		printf("����������Ŷ!!");
	}else {
		printf("����Ҳ���һ���ط���Ŷ!!\n");
	}
	

	system("pause");
	return 0;
}