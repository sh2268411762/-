/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cnt = 0, i = 1;
    int num=100;
    while (num) {
        cnt += i * (num % 16);//cnt=cnt+i*(num%16);
        i *= 10;//i=i*10;
        num /= 16;//num=num/16;
    }
    printf("%d\n", cnt);
    return 0;
}
*/