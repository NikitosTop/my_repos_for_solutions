#include <iostream>
#include <stdio.h>

int main()
{
	// mush1 , mush2 , mush3;

	int number;
	std::cout << "Enter number: " << std::endl;
	std::cin >> number;

	if (number == 0)
	{
		std::cout << "mush1" << std::endl;
		
	}

	if (number > 1 && number <= 4)
	{
		std::cout << "mush2" << std::endl;
	}

	if (number > 4 && number < 10 || number % 10 == 0)
	{
		std::cout << "mush3" << std::endl;
	}

	return main();
}