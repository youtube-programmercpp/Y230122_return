//C++�̏�����
int(&f())[3]
{
	static int a[] = { 1, 10, 100 };
	return a;//�z���Ԃ��Ă���悤�ȃC���[�W
}
#include <iostream>
int main()
{
	for (const auto n : f()) {
		std::cout << n << '\n';
	}
}
