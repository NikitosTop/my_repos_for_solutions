
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b, c;
	double p, s;

	printf("input a: ");
	scanf_s("%lf", &a);
	printf("input b: ");
	scanf_s("%lf", &b);
	printf("input c: ");
	scanf_s("%lf", &c);


	p = (a + b + c) / 2;
	printf(" 0.5 perimetra: %lf\n", p);

	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf(" square: %lf", s);
	return 0;
}