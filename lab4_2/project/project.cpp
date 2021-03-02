#include <iostream>
#include <time.h>
#include "function.h"

using namespace std;


int main()
{
	int temp_size;

	cout << "Input size this array: ";

	cin >> temp_size;

	Array_full size;

	size.size = temp_size;

	Array_full* full_array = new Array_full[size.size];

	random_function(full_array, size);

	print(full_array, size);

	find_min_elements(full_array, size);

	print(full_array, size);

	find_min_elements(full_array, size);

	delete[] full_array;
}