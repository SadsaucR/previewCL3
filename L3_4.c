/*�`���D��:�ۭq���(��������)*/
#include <stdio.h>
#pragma warning (disable:4996)
double power(double a, int n)
{
	int i;
	double pow = 1.0;
	if (n < 0)
	{
		for (i = 0;i > n;i--)
			pow /= a;
	}
	else
		for (i = 0;i < n;i++)
			pow *= a;
	return pow;
}
void L3_4()
{
	int  n;
	double a;
	printf("��J�Ʀr>>");
	scanf("%lf", &a);
	rewind(stdin);
	printf("��J�����>>");
	scanf("%d", &n);
	printf("%lf��%d����=%lf", a, n, power(a, n));
}