int main()
{
	int   a [30]     ;//配列
	int(* c)[30] = &a;//配列を指すポインタ
	int* b = a;//要素を指している

	sizeof b;//ポインタのサイズ
	sizeof* b;//要素のサイズ
	sizeof c;
	const auto n = sizeof* c / sizeof **c;



}
