/*
#include <stdio.h>
#include <stdlib.h>
int jiecheng(int n) {//定义函数阶乘
    int result;
    if (n < 0)
    {
        printf("输入有误！\n");
        return 0;
    }
    else if (n == 0 || n == 1)
    {
        result = 1;
    }
    else
    {
        result = jiecheng(n - 1) * n;
    }
    return result;
}
int main()
{
    int n;
    printf("输入你想计算阶乘的数：\n");
    scanf("%d", &n);
    printf("%d的阶乘=%d",n,jiecheng(n));
    return 0;
}
*/