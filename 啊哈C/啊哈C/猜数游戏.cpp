/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a;
	int b;
	int sum;
	system("color B4");
	sum = 6;//sum用来限定猜数的次数
	srand((unsigned)time(NULL));//srand是用来初始化随机种子数的，这里根据time来获取，time的值每时每刻都不同，所以随机数不同  （0~32767）
	a = rand() % 100;//使产生的数为0~99
	while (1)//这里我们用while（1）使程序进入无限循环，当猜对时用break;结束循环
	{
		sum--;
		scanf("%d", &b);
		if (b > a)
			printf("大了，你个傻逼还有%d次机会\n", sum);
		if (b < a)
			printf("小了，你个傻逼还有%d次机会\n", sum);
		if (b == a)
		{
			printf("你牛逼，终于答对了\n");
			break;
		}
		if (sum == 0)
		{
			printf("没有机会了，智障，傻逼，二球，重新再来吧\n");
		}
	}
	printf("答案是%d\n", a);
	system("pause");
	return 0;
}
*/