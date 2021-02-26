#pragma once
#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#define AMOUNT 100

#include <time.h>
#include <iostream>
using namespace std;

struct Array_full
{
	int number;

} full_array[AMOUNT];

void random_function(Array_full* array);

void find_min_elements(Array_full* array);

void print(Array_full* array);

void random_function(Array_full* array)
{
	srand(time(NULL));

	for (int i = 0; i < AMOUNT; i++)
	{
		array[i].number = -100 + rand() % 200;
	}

}

void find_min_elements(Array_full* array)
{
	int a = 0;

	int array_min[3];

	while (true)
	{
		int min = array[0].number;

		for (int i = 0; i < AMOUNT; i++)
		{
			if (min > array[i + 1].number)
			{
				swap(min, array[i + 1].number);
			}

			if (i == 99)
			{
				for (int j = 0; j < AMOUNT; j++)
				{
					if (min == array[j].number) { array[j].number = 0; }
				}
			}
		}



		array_min[a] = min;

		if (a == 2)
		{
			break;
		}

		a++;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "MIN:" << array_min[i] << " ";
	}

	cout << endl;
}

void print(Array_full* array)
{
	for (int i = 0; i < AMOUNT; i++)
	{
		cout << array[i].number << " ";
		if (i % 5 == 0)
		{
			cout << endl;
		}
	}
}


#endif