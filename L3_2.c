/*���Ǧ^�Ȫ����*/
#include<stdio.h>
#pragma warning(disable:4996)
int add(int num, int num2) /*�ŧi���*/
{
	return num + num2; /*�Ǧ^�ۥ[����*/
}
void L3_2()
{
	int a, b;
	printf("��JA�PB����>>");
	scanf("%d,%d", &a, &b);
	printf("%d+%d=%d", a, b, add(a, b)); /*��ƥi��@�B�⦡�ϥ�*/
}