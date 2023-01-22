//関数ポインタ
int f(void)
{
	return 123;
}
typedef int (*pointer_to_function) (void);
//int (*  g(void) ) (void)
pointer_to_function g(void)
{
	return f;//これで f のアドレスが返される
}
int main()
{
	int (*a[2])(void) =
	{ g()
	, g()
	};
}
