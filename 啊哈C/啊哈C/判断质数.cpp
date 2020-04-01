/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, count, i;
    count = 0;
    scanf("%d", &a);
    for (i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)//i表示约数
        {
            count++;//count用来记录有多少个约数
            //break;//break表示提前结束当前循环    
            printf("%d ", i);
        }
    }
    if (count == 0)
        printf("质数\n");
    else
        printf("合数\n");
    return 0;
}//break是用来提前终止for、while、do-while循环的 
*/