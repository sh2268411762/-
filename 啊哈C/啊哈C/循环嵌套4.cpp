/*
//Ƕ�׾�����һ�� if-else ������ڡ�Ƕ�ס�����һ�� if-else ���
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	printf("������������");
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b)
	{
		if (a >= c)
			printf("%d", a);
		else
			printf("%d", c);
	}
	else
	{
		if (b >= c)
			printf("%d", b);
		else
			printf("%d", c);
	}
	return 0;
}//else ��ƥ���ȡ�ͽ�ԭ�����Ϸ��ĸ�if ������������ĸ� if 
*/