/*試寫自訂函數，能運算次方數*/
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
	printf("輸入基數>>");
	scanf("%lf",&x);
	rewind(stdin); /*fflush(stdin)*/
	printf("輸入次方數>>");
	scanf("%d", &n);
	printf("%lf的%d次方為%lf", x, n, pow(x, n));
}