/*常見題型:遞迴(recursive)乘冪運算*/
#include <stdio.h>
#pragma warning (disable:4996)
int fac(int n) /*宣告傳值函數*/
{
	if (n > 0) /*遞迴函數終止條件*/
		return n * (fac(n - 1)); /*此處呼叫fac(n-1)，重複至n=0為止，得出fac(0)=1,fac(1)=1*fac(0),fac(2)=2*fac(1)......以此類推*/
	else
		return 1;
} 
void L3_7()
{
	int num;
	printf("請輸入數值>>");
	scanf("%d", &num);
	printf("%d!=%d",num,fac(num));
}