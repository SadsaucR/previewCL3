/*�`���D��:��X1~100�Ҧ������(�_���j��)*/
#include <stdio.h>
#pragma warning (disable:4996)
void prime()
{
	int i, j, y;
	for (i = 2;i <= 100;i++)
	{
		y = 1;
		for (j = 2;j <= i - 1;j++)
		{
			if (i % j == 0)
			{
				y = 0;
				break;
			}
		}
		if (y == 1)
			printf("%3d", i);
	}

}
void L3_5()
{
	printf("1~100�Ҧ������>>");
	prime();
}