#include <iostream>
#include <cstdio>
#include "delete.h"
using namespace std;

int main()
{
	char array[255];

	cout << "Enter words: ";

	gets_s(array);

	std::cout << array;

	std::cout << std::endl;

	delete_func(array);
}