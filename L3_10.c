/*static靜態變數宣告*/
void func()
{
	static int a = 100; /*宣告時配置記憶體，變數值會保留，注意記憶體位址的變化。*/
	printf("In func() a=%d %p\n", a,a);
	a += 200;
}
void L3_10()
{
	func();
	func();
	func();
}