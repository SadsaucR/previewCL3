/*常用題型:自訂函數(次方應用)*/
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
	printf("輸入數字>>");
	scanf("%lf", &a);
	rewind(stdin);
	printf("輸入次方數>>");
	scanf("%d", &n);
	printf("%lf的%d次方=%lf", a, n, power(a, n));
}