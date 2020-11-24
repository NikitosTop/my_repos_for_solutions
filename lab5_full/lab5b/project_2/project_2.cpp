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

	if (number % 10 == 1 && number % 100 != 11)
	{
		printf("у меня %d гриб\n", number); // 1 21 31 ...
	}
	
	if (number % 10 == 2 || number % 10 == 3 || number % 10 == 4)
	{
		if (number % 100 != 12 && number % 100 != 13 && number % 100 != 14)
		{
			printf("у меня %d гриба\n", number); // 2 3 4 22 33 44
		}
	}

	if (number % 100 == 11 || number % 100 == 12 || number % 100 == 13 || number % 100 == 14 || number % 10 > 4 && number % 10 < 10 || number % 10 == 0)
	{
		printf("у меня %d грибов\n", number); // 11 111 12 13 14 5 6 7 8 9 10
	}

	return main();
}