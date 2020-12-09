#include <iostream>
#include <stdio.h>


char compare(int a, int b)
{
	if (a > b)
	{
		char symbol = '>';
		return symbol;
	}
	else if (a < b)
	{
		char symbol = '<';
		return symbol;
	}
	else
	{
		char symbol = '=';
		return symbol;
	}
}

int main()
{
	int a, b;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;

	std::cout << compare(a, b);
}
