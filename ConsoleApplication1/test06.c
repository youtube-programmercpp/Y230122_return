//C����(C++�ł�����)
#include <stdio.h>
int(*f())[3]
{
	//static �ɂ��邱�Ƃ����(�܂��͊O���ϐ�)
	//�|�C���^��Ԃ�����ǂ��Ȃ�̂�
	//static �Ȃ�A�f�[�^�͎c���Ă���
	static int a[] = { 1, 10, 100 };
	return &a;
}
int main()
{
	int (*a)[3] = f();//�z����w���|�C���^�̂��߁A�ʏ������Ȃ��Ă���
	for (size_t i = 0; i < sizeof *a / sizeof **a; ++i) {
		printf("%d\n", (*a)[i]);
	}
}
