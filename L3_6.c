/*常見題型:找出1~100所有的質數(傳值函數)*/
#include <stdio.h>
#pragma warning (disable:4996)
int prime2(int num)
{
	int i;
	for (i = 2;i <= num - 1;i++)
		if (num%i == 0)
			return 0;
	return 1;
}
void L3_6()
{
	int i;
	printf("1~100的質數有>>");
	for(i=2;i<=100;i++)
		if (prime2(i))
		{
			printf("%3d", i);
		}
}
