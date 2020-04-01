/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, a, b, c, d, e, f, g, h, t;
	printf("输入一个小于99999999的数（大于会报错偶）：");
	scanf("%d", &x);
	if (x > 99999999 || x < 1)
		while (1 > 0) {
			printf("Error!");
		}
	else
	{
		a = x / 10000000 % 10;
		b = x / 1000000 % 10;
		c = x / 100000 % 10;
		d = x / 10000 % 10;
		e = x / 1000 % 10;
		f = x / 100 % 10;
		g = x / 10 % 10;
		h = x / 1 % 10;
		t = a + b + c + d + e + f + h + g;
		printf("%d ", t);
	}
	system("pause");
	return 0;
}//输入一个n位数，范围在1~99999999，求这个n位数每一位上的数之和
*/