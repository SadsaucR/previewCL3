/*常見題型:遞迴2(recursive)次方應用*/
#include <stdio.h>
#pragma warning (disable:4996)
double repow(double base, int n)
{
	if (n > 0) /*遞迴函數中止條件n=0*/
		return base * (repow(base, n - 1));
	else
		return 1; 
}
void L3_8()
{
	double x;
	int n;
	printf("輸入基數>>");
	scanf("%lf", &x);
	rewind(stdin); /*fflush(stdin)*/
	printf("輸入次方數>>");
	scanf("%d", &n);
	printf("%lf的%d次方=%lf", x, n, repow(x, n));
}