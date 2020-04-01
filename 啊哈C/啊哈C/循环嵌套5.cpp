/*
//输入一个整数n（1<=n<=30），当输入的值为3时，输出
//1
//2 2
//3 3 3
//当输入的值为6时，输出
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
//6 6 6 6 6 6            
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int b;
	int n;
	int a;
	a = 1;
	scanf("%d", &n);
	while (a <= n)
	{
		if (n < 1 || n>30)
		{
			while(1>0)
			printf("Error!\n");
			printf("Error!\n");
			printf("Error!\n");
			printf("Error!\n");
			n = 0;
		}
		else
		{
			b = 1;
			while (b <= a)
			{
				printf("%d", a);
				b++;
			}
			printf("\n");
			a++;
		}
	}
	return 0;
}
*/