/*
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int score ; //考试分数为87分 
    printf("请输入成绩：");
    scanf("%d", &score);
    score /= 10;//把score每隔10分一个等级
    switch (score)
    {
        //想想以下代码为什么用这种方式；
         //这种方式的好处？
    case 10://100
    case 9://90+
        printf("等级A");
        break;
    case 8://80+
        printf("等级B");
        break;                  
    case 7://70+
    case 6://60+
        printf("等级C");
        break;          //之后就是60分以下  
    default:       //default    在switch里使用，如果不满足case中的任何一种情况就执行default 下的语句
        printf("等级D");
        break;
    }
    return 0;
}
*/