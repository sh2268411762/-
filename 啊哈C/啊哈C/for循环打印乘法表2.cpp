/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	// 定义相乘数字i,j以及结果result
	int i, j, result, k;
	for (i = 9; i >= 1; i--)
	{
		printf("\n");

		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d*%d=%-4d", i, j, result);
		}
	}
	//在输出格式控制字符串中：按十进制输出对应的变量值，格式为4列左对齐；
							//   实际数位不足4列时后面用空格补齐，
							//   实际数位多于4位时按实际数位输出。................................%-4d
	return 0;
}
*/