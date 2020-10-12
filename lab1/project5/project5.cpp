#include <stdio.h>
#define _CTR_SECURE_NO_WARNINGS
#include <stdlib.h>

int main()
{
	int a, b;
	a = 10;
	b = a;
	printf("number b = %d\n", b);
	int c, d, f;
	c = 10;
	d = c - 5;
	f = d + 5;
	printf("number f = %d\n", f);
	return 0;
}