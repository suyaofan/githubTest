#include <graphics.h>
#include <conio.h>
#include <math.h>

//�����κ���
//x0,y0,λ��
//size:��С  
//COLORREF C����ɫ
void heart(int x0, int y0, int size, COLORREF C)
{
	double  m, n, x, y; double i;
	for (i = 0; i <= 2 * size; i = i + 0.01)
	{
		//�����������
		m = i;
		n = -size * (((sin(i)*sqrt(fabs(cos(i)))) / (sin(i) + 1.4142)) - 2 * sin(i) + 2);
		//ת��Ϊ�ѿ�������
		x = n*cos(m) + x0;
		y = n*sin(m) + y0;
		putpixel(x, y, C);
	}
}
void main()
{
	initgraph(640, 480);
	setbkcolor(RGB(64, 128, 128));
	cleardevice();
	
	heart(300, 150, 80, RGB(255,0,0));
	setlinestyle(PS_SOLID, 10);
	_getch();








	closegraph();
}
