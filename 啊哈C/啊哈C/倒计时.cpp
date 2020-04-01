/*
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>//如果要使用Sleep(),就必须添加头文件 #include <windows.h>
int main()
{
    int a;
    printf("请输入要倒计时的时间；\n");
    scanf("%d", &a);
    system("color 0a");//修改颜色
    while (a >= 0)
    {
        system("cls");//“清屏”语句，就是将之前屏幕上的东西全部清除
        printf("%d ", a);
        Sleep(1000);//Sleep表示“等待”,圆括号内的数字表示要等待的时间，单位是毫秒
        a = a - 1;
    }
}
*/