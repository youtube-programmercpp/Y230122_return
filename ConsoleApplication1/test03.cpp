//CŒ¾Œê‚Å‚à“¯‚¶
int(*f())[3]
{
	static int a[] = { 1, 10, 100 };
	return &a;
}
#include <iostream>
int main()
{
	for (const auto n : *f()) {
		std::cout << n << '\n';
	}
}
