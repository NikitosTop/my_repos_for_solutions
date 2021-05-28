#include "delete.h"
#include <iostream>
using namespace std;

void delete_func(char* array)
{
	int input_numbers = 0;

	cout << "Enter number: ";
	cin >> input_numbers;

	int words = 0;


	cout << "new array: ";
	for (int i = 0; i < 255; i++)
	{
		*(array + i);
		if (array[i] == ' ')
		{
			words++;
		}

		if (words == input_numbers)
		{
			for (int j = array[i]; j < 255; j++)
			{
				cout << *(array + j);
				if (array[j] == ' ')
				{
					cout << " ";
				}

				if (array[j] == NULL)
				{
					break;
				}
			}
			break;
		}
	}

	cout << endl;
}