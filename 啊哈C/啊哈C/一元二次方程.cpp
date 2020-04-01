/*
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, disc, x1, x2, p, q;//定义各变量为double型
	scanf("%lf%lf%lf", &a, &b, &c);//输入方程系数
	disc = b * b - 4 * a * c;//求b方减去4ac
	if (disc < 0)
	{
		printf("无实数解");
	}
	else
	{
		p = -b / (2.0 * a);
		q = sqrt(disc) / (2.0 * a);
		x1 = p + q;
		x2 = p - q;
		printf("x1=%7.2f\nx2=%7.2f\n", x1, x2);//输出函数根
		return 0;
	}
}
*/