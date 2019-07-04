#include <string.h>
#include <Windows.h>
#include <stdio.h>

int main(void) {
	char addr[32];

	printf("你好,请问你是哪里人?\n");
	scanf_s("%s", addr, sizeof(addr));

	if (strcmp(addr, "山西") == 0) {
		printf("我们是老乡哦!!");
	}else {
		printf("你和我不是一个地方的哦!!\n");
	}
	

	system("pause");
	return 0;
}