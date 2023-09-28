/*常見題型:遞迴3(recursive)累加應用*/
#include <stdio.h>
#pragma warning (disable:4996)
int readd(int n)
{
	if (n > 0) /*遞迴終止條件*/
		return n + (readd(n - 1));
	else
		return 0; /*此處要設0，因為readd(0)=0*/
}
void L3_9()
{
	int n;
	printf("欲累加至?>>");
	scanf("%d", &n);
	printf("從0累加至%d為%d", n, readd(n));
}
