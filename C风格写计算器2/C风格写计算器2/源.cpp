#include <stdio.h>
#include <Windows.h>

int main(void) {
	double one;
	double two;
	double retult;
	char oper;
	printf("请输入第一个运算数:");
	scanf_s("%lf", &one);
	printf("请输入第二个运算数:");
	scanf_s("%lf", &two);
	printf("你输入要进行的运算符(+ - * /):");
	getchar();    //第一次输入用来清空输入缓冲区
	scanf_s("%c", &oper, sizeof(oper));//第二次就可以输入了

	if (oper == '+') {
		retult = one + two;
		printf("计算结果是:%.2f\n",retult);
	}
	else if (oper == '-') {
		retult = one - two;
		printf("计算结果是:%.2f\n", retult);
	}
	else if (oper == '*') {
		retult = one * two;
		printf("计算结果是:%.2f\n", retult);
	}
	else if (oper == '/') {
		retult = one / two;
		printf("计算结果是:%.2f\n", retult);
	}
	system("pause");
	return 0;
}