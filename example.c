#include<Windows.h>

#include "random.c"

int main() {
	SetRandSeed();
	int i;
	wchar_t str[20];
	for (int b;b<5;b++)
	{
		i = random(-100,100);
		_itow(i, str, 10);
		MessageBoxW(0, str, L"succ", MB_OK);
	}
}