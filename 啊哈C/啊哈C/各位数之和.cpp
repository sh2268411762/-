/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, a, b, c, d, e, f, g, h, t;
	printf("����һ��С��99999999���������ڻᱨ��ż����");
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
}//����һ��nλ������Χ��1~99999999�������nλ��ÿһλ�ϵ���֮��
*/