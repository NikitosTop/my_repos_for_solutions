#include <iostream>
#include <time.h>
#include "function.h"

using namespace std;


int main()
{
	Array_full full_array[AMOUNT] = {};

	random_function(full_array);

	print(full_array);

	find_min_elements(full_array);

	print(full_array);
}