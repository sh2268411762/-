/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[1001], i, j, t, n;
    for (i = 0; i <= 1000; i++)
        a[i] = 0;
    printf("输入要比较大小数的个数：");
    scanf("%d", &n);
    printf("输入%d个数\n", n);
    for (i = 1; i <= n; i++)//输入n个数
    {
        scanf("%d", &t);
        a[t]++;
    }
    printf("排序应该是：");
    for (i = 0; i <= 1000; i++)
        for (j = 1; j <= a[i]; j++)
            printf("%d ", i);

    return 0;
}
*/