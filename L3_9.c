/*�`���D��:���j3(recursive)�֥[����*/
#include <stdio.h>
#pragma warning (disable:4996)
int readd(int n)
{
	if (n > 0) /*���j�פ����*/
		return n + (readd(n - 1));
	else
		return 0; /*���B�n�]0�A�]��readd(0)=0*/
}
void L3_9()
{
	int n;
	printf("���֥[��?>>");
	scanf("%d", &n);
	printf("�q0�֥[��%d��%d", n, readd(n));
}
