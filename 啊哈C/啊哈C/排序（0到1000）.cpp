/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[1001], i, j, t, n;
    for (i = 0; i <= 1000; i++)
        a[i] = 0;
    printf("����Ҫ�Ƚϴ�С���ĸ�����");
    scanf("%d", &n);
    printf("����%d����\n", n);
    for (i = 1; i <= n; i++)//����n����
    {
        scanf("%d", &t);
        a[t]++;
    }
    printf("����Ӧ���ǣ�");
    for (i = 0; i <= 1000; i++)
        for (j = 1; j <= a[i]; j++)
            printf("%d ", i);

    return 0;
}
*/