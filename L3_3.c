/*�i���������*/
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
	printf("��J�n�C�L���r��:");
	scanf("%c", &print);
	rewind(stdin);
	printf("��J�n�C�L������:");
	scanf("%d", &time);
	display(print, time);
}