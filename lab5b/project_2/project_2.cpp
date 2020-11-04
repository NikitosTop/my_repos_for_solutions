#include <iostream>
#include <stdio.h>

int main()
{
	unsigned int k;
	printf("how many mushrooms do you have: ");
	scanf_s("%d", &k);

	if (k < 100)
	{
		printf("i have %d mushrooms", k);
	}
	else
	{
		printf("i call the police");
	}
}