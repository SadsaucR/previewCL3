/*���j4(recursive)�i�����ΡA�N�H�U�ƦC�W�ߥΨ�Ƶ���X�ӡC*/
/*IF n=1,2   fib(n)=1
  IF n>=3    fib(n)=fib(n-1)+fib(n-2)
  �Эp��fib(10)*/
#include <stdio.h>
int fib(int n)
{
	if (n >= 3)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}
void test3_9()
{
	printf("fib(10)=%d", fib(10));
}