#include <stdio.h>

struct beta {
	struct alpha {
		int x;
	} y;
};
int main()
{
	// :: スコープ解決演算子
#ifdef __cplusplus
	//C++用の記述
	beta::alpha  a;
#else
	//C言語用の記述
	struct alpha a;
#endif
	struct beta  b;
	b.y.x = 10;
	a.x = 123;

	putchar('A');//int 型データを渡している
	//C++ の場合は 'A' を int 型に伸ばして


	;//文字定数 (文字 literal)
	//char型...C++であれば char 型
	//int 型...C言語では int 型である
}
