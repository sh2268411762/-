/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a;
	int b;
	int sum;
	system("color B4");
	sum = 6;//sum�����޶������Ĵ���
	srand((unsigned)time(NULL));//srand��������ʼ������������ģ��������time����ȡ��time��ֵÿʱÿ�̶���ͬ�������������ͬ  ��0~32767��
	a = rand() % 100;//ʹ��������Ϊ0~99
	while (1)//����������while��1��ʹ�����������ѭ�������¶�ʱ��break;����ѭ��
	{
		sum--;
		scanf("%d", &b);
		if (b > a)
			printf("���ˣ����ɵ�ƻ���%d�λ���\n", sum);
		if (b < a)
			printf("С�ˣ����ɵ�ƻ���%d�λ���\n", sum);
		if (b == a)
		{
			printf("��ţ�ƣ����ڴ����\n");
			break;
		}
		if (sum == 0)
		{
			printf("û�л����ˣ����ϣ�ɵ�ƣ���������������\n");
		}
	}
	printf("����%d\n", a);
	system("pause");
	return 0;
}
*/