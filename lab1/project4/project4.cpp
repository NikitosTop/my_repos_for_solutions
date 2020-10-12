#include <stdio.h>
#include <stdlib.h>
#define _CTR_SECURE_NO_WARNINGS

int main()
{
	double a, b;
	//a = people b = PC
	printf("Input number: ");
	scanf_s("%lf", &a);
	b = a * 3;
	printf("Number people: %lf Number PC: %lf", a, b);
	return 0;
}

