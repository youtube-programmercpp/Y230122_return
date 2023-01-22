#include <stdio.h>
int main()
{
	static const char s[] = "ABCDE";
	for (int i = 0; &s[i] < &s[sizeof s - 1]; ++i) {
		printf("%c\n", s[i]);
	}
}
