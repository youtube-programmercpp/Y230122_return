#include <stdio.h>

struct beta {
	struct alpha {
		int x;
	} y;
};
int main()
{
	// :: �X�R�[�v�������Z�q
#ifdef __cplusplus
	//C++�p�̋L�q
	beta::alpha  a;
#else
	//C����p�̋L�q
	struct alpha a;
#endif
	struct beta  b;
	b.y.x = 10;
	a.x = 123;

	putchar('A');//int �^�f�[�^��n���Ă���
	//C++ �̏ꍇ�� 'A' �� int �^�ɐL�΂���


	;//�����萔 (���� literal)
	//char�^...C++�ł���� char �^
	//int �^...C����ł� int �^�ł���
}
