#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	int i;
	int h;
	printf("|   x   |      y     |\n");
	printf("|-------|------------|\n");
	for (i = 0; i < 5; i++)
	{
		for (x = 0; x < 4; x+=0.25)
		{
			if (x < 2)
			{
				y = sqrt(4 - (x - 2) * (x - 2));
			}
			else
			{
				y = 4 - x;
			}
			h = (y + 1) * 10;
			printf("| %5.2lf | %10.7lf |", x + i * 4, y);
			if (y - 1 - h * 10 > 0.5)
			{
				h++;
			}
			for (; h > 0; h-=1)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
}