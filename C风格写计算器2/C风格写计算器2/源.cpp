#include <stdio.h>
#include <Windows.h>

int main(void) {
	double one;
	double two;
	double retult;
	char oper;
	printf("�������һ��������:");
	scanf_s("%lf", &one);
	printf("������ڶ���������:");
	scanf_s("%lf", &two);
	printf("������Ҫ���е������(+ - * /):");
	getchar();    //��һ����������������뻺����
	scanf_s("%c", &oper, sizeof(oper));//�ڶ��ξͿ���������

	if (oper == '+') {
		retult = one + two;
		printf("��������:%.2f\n",retult);
	}
	else if (oper == '-') {
		retult = one - two;
		printf("��������:%.2f\n", retult);
	}
	else if (oper == '*') {
		retult = one * two;
		printf("��������:%.2f\n", retult);
	}
	else if (oper == '/') {
		retult = one / two;
		printf("��������:%.2f\n", retult);
	}
	system("pause");
	return 0;
}