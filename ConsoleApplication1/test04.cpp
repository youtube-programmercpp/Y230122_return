#define	N 3
int *f()
{
	static int a[N] = { 1, 10, 100 };
	return a;
}
#include <iostream>
int main()
{
	const auto a = f();
	for (size_t i = 0; i < N;++i) {
		const auto n = a[i];
		std::cout << n << '\n';
	}
}

