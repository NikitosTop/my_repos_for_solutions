#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "rus");
	// mush1 , mush2 , mush3;

	int number;
	printf("Сколько у вас грибов: ");
	scanf_s("%d", &number);

	if (number == 0)
	{
		printf("у меня %d грибов\n", number);

	}

	if (number == 1 || number % 10 == 1 != (number % 100 == 11))
	{
		printf("у меня %d гриб\n", number);
	}
	
	if (number > 1 && number <= 4 && (number != 12 || number != 13 || number != 14) && (number % 10 == 2 || number % 10 == 3 || number % 10 == 4))
	{
		printf("у меня %d гриба\n", number);
	}

	if (number > 4 && number < 10 || number % 100 == 11 || number == 12 || number == 13 || number == 14 || number % 10 == 0 || number % 10 == 5 || number % 10 == 6 || number % 10 == 7 || number % 10 == 8 || number % 10 == 9)
	{
		printf("у меня %d грибов\n", number);
	}

	return main();
}