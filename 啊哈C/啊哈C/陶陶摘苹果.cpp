/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10];
    int h, i, sum;//sum表示陶陶摘到的苹果数目，h表示陶陶的身高
    for (i = 0; i <= 9; i++)
    {
        printf("请输入苹果的高度：");
        scanf("%d", &a[i]);
    }
    printf("请输入陶陶的身高：");
    scanf("%d", &h);
    sum = 0;
    for (i = 0; i <= 9; i++)
    {
        if (a[i] <= h + 30)
            sum++;
    }
    printf("陶陶可以摘到的苹果数：%d", sum);
    return 0;
}
*/