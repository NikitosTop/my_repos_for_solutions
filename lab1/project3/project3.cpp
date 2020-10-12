#define _CTR_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d;
	printf("Input number: ");
	scanf_s("%lf", &a);
	b = a * a;
	c = b * b;
	d = c * c;
	printf("Your number in 8 degree: %lf", d);
	return 0;
}