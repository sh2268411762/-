/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k, a, b, i, count1, count2;
    for (k = 4; k <= 100; k += 2)
    {
        for (a = 2; a <= k / 2; a++)
        {
            //�ж�a�Ƿ�Ϊ����
            count1 = 0;
            for (i = 2; i <= a - 1; i++)
            {
                if (a % i == 0)
                {
                    count1++;
                    break;
                }
            }
            if (count1 == 0)//���aΪ����
            {
                b = k - a;//�ж�b�Ƿ�Ϊ����
                count2 = 0;
                for (i = 2; i <= b - 1; i++)
                {
                    if (b % i == 0)
                    {
                        count2++;
                        break;
                    }
                }
                if (count2 == 0)//���bҲ������
                {
                    printf("%d=%d+%d\n", k, a, b);
                    //break;//��ӡ����Ⲣ����ѭ��
                }
            }
        }
    }
    system("pause");
    return 0;
}
*/