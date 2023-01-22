//C言語(C++でも同じ)
#include <stdio.h>
int(*f())[3]
{
	//static にすることが大切(または外部変数)
	//ポインタを返した後どうなるのか
	//static なら、データは残っている
	static int a[] = { 1, 10, 100 };
	return &a;
}
int main()
{
	int (*a)[3] = f();//配列を指すポインタのため、通常より難しくなっている
	for (size_t i = 0; i < sizeof *a / sizeof **a; ++i) {
		printf("%d\n", (*a)[i]);
	}
}
