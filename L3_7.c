/*�`���D��:���j(recursive)�����B��*/
#include <stdio.h>
#pragma warning (disable:4996)
int fac(int n) /*�ŧi�ǭȨ��*/
{
	if (n > 0) /*���j��Ʋפ����*/
		return n * (fac(n - 1)); /*���B�I�sfac(n-1)�A���Ʀ�n=0����A�o�Xfac(0)=1,fac(1)=1*fac(0),fac(2)=2*fac(1)......�H������*/
	else
		return 1;
} 
void L3_7()
{
	int num;
	printf("�п�J�ƭ�>>");
	scanf("%d", &num);
	printf("%d!=%d",num,fac(num));
}