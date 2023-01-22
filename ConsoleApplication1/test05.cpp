//C++の書き方
int(&f())[3]
{
	static int a[] = { 1, 10, 100 };
	return a;//配列を返しているようなイメージ
}
#include <iostream>
int main()
{
	for (const auto n : f()) {
		std::cout << n << '\n';
	}
}
