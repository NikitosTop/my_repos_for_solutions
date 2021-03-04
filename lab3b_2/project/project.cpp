#include <iostream>
#include "functions.h"
using namespace std;


int main()
{
	cout << "Input size: ";

	int size_temp;

	cin >> size_temp;

	Array size;

	size.size = size_temp;

	Array* array = new Array[size.size];

	random_array(array, size);

	sort_function(array, size);

	print(array, size);

	delete[] array;
}