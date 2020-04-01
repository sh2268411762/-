/*
//嵌套就是在一个 if-else 语句中在“嵌套”另外一个 if-else 语句
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	printf("输入三个数：");
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
}//else 的匹配采取就近原则，离上方哪个if 最近，就属于哪个 if 
*/