/*static�R�A�ܼƫŧi*/
void func()
{
	static int a = 100; /*�ŧi�ɰt�m�O����A�ܼƭȷ|�O�d�A�`�N�O�����}���ܤơC*/
	printf("In func() a=%d %p\n", a,a);
	a += 200;
}
void L3_10()
{
	func();
	func();
	func();
}