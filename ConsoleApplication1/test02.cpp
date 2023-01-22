const char* s()
{
	return  "ABCDEFG"   ;//普通
//	return &"ABCDEFG"[0];//そう書いても良いが…ちょっと変
}

int* f()
{
	static int a[10];
	return  a   ;//先頭要素を指すポインタを返す
//	return &a[0];//先頭要素を指すポインタを返す
}
int(*g())[10]
{
	static int a[10];
	return &a;
}
int main()
{
}
