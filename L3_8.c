/*�`���D��:���j2(recursive)��������*/
#include <stdio.h>
#pragma warning (disable:4996)
double repow(double base, int n)
{
	if (n > 0) /*���j��Ƥ������n=0*/
		return base * (repow(base, n - 1));
	else
		return 1; 
}
void L3_8()
{
	double x;
	int n;
	printf("��J���>>");
	scanf("%lf", &x);
	rewind(stdin); /*fflush(stdin)*/
	printf("��J�����>>");
	scanf("%d", &n);
	printf("%lf��%d����=%lf", x, n, repow(x, n));
}