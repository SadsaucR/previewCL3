/*有傳回值的函數*/
#include<stdio.h>
#pragma warning(disable:4996)
int add(int num, int num2) /*宣告函數*/
{
	return num + num2; /*傳回相加的值*/
}
void L3_2()
{
	int a, b;
	printf("輸入A與B的值>>");
	scanf("%d,%d", &a, &b);
	printf("%d+%d=%d", a, b, add(a, b)); /*函數可當作運算式使用*/
}