/*進階函數應用*/
#include <stdio.h>
#pragma warning (disable:4996)
void display(char p, int t)
{
	int i;
	for (i = 1;i <= t;i++)
	{
		printf("%c", p);
	}
	return;
}
void L3_3()
{
	int time;
	char print;
	printf("輸入要列印的字元:");
	scanf("%c", &print);
	rewind(stdin);
	printf("輸入要列印的次數:");
	scanf("%d", &time);
	display(print, time);
}