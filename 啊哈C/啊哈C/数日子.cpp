/*
#include <stdio.h>
int trans(int year, int month, int day);
int IsRun(int n);//判断是否为闰年
int main()
{
	int n;
	int year, month, day;
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &year, &month, &day);
		printf("%d\n", trans(year, month, day));
	}
	return 0;
}
int trans(int year, int month, int day)
{
	int n = 0, i;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (i = 0; i <= month - 1 - 1; i++)
		n += a[i];
	n += day;
	if (IsRun(year) && month > 2 - 1)
		n++;
	return n;
}
int IsRun(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))//判断是否为闰年
		return 1;
	else
		return 0;
}
*/