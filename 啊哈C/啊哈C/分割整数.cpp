
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[10];
    printf("����һ��С��10��������");
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (i != strlen(a) - 1)
            printf("%c ", a[i]);
        else
            printf("%c ", a[i]);
    }
    return 0;
}
