/*�ռg�ۭq��ơA��B�⦸���*/
#include <stdio.h>
#pragma warning(disable:4996)
double pow(double base, int n)
{
	int i;
	double pow = 1.0;
	if (n < 0)
	{
		for (i = 0;i > n;i--)
			pow /= base;
	}
	else
		for (i = 0;i < n;i++)
			pow *= base;
	return pow;
}
void test3_4()
{
	double x;
	int n;
	printf("��J���>>");
	scanf("%lf",&x);
	rewind(stdin); /*fflush(stdin)*/
	printf("��J�����>>");
	scanf("%d", &n);
	printf("%lf��%d���謰%lf", x, n, pow(x, n));
}