const char* s()
{
	return  "ABCDEFG"   ;//����
//	return &"ABCDEFG"[0];//���������Ă��ǂ����c������ƕ�
}

int* f()
{
	static int a[10];
	return  a   ;//�擪�v�f���w���|�C���^��Ԃ�
//	return &a[0];//�擪�v�f���w���|�C���^��Ԃ�
}
int(*g())[10]
{
	static int a[10];
	return &a;
}
int main()
{
}
