/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[101];
    char b[101];
    int x, y;
    printf("输入第一个人及其成绩：");
    scanf("%s", a);//再用scanf进行输入时，只有与%s配合才可以不加取址符 & 
    scanf("%d", &x);
    printf("输入第二个人及其成绩：");
    scanf("%s", b);//读取字符串除了用scanf  还可以用  gets              gets(a)
    scanf("%d", &y);
    if (x > y)
    {
        printf("%s的成绩较好", a);//输出字符串除了用 printf  还可以用             puts(a)
    }
    else
    {
        if (x < y)
        {
            printf("%s的成绩较好", b);
        }
        else
        {
            printf("%s和%s的分数相同", a, b);
        }
    }
    return 0;
}
*/