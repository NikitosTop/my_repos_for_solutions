#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Enter a: ");
	scanf_s("%d", &a);
	printf("Enter b: ");
	scanf_s("%d", &b);
	printf("Enter c: ");
	scanf_s("%d", &c);

	double sqrt_d = sqrt(b * b - 4 * a * c);

	if (sqrt_d > 0) {

		double x1 = (-b + sqrt_d) / (2 * a);

		double x2 = (-b - sqrt_d) / (2 * a);

		printf("x1 = %3.2lf x2 = %3.2lf\n", x1, x2);
	}
	else if (sqrt_d == 0)
	{
		double x1 = (-b + sqrt_d) / (2 * a);

		printf("x = %lf\n", x1);
	}
	else {
		printf("warning\n");
	}

	return main();