#pragma once 
#include <iostream>
#include <time.h>
#include "functions.h"
#define DEBUG

using namespace std;


void random_array(Array* array, Array size)
{
	srand(time(NULL));

	for (int i = 0; i < size.size; i++)
	{
		array[i].numbers = -100 + rand() % 200;
	}
}

Array MIN, ZERO, MAX;

void sort_function(Array* array, Array size)
{
	int min = 0 , max = 0, zero = 0;
	for (int i = 0; i < size.size; i++)
	{
		if (array[i].numbers < 0)
		{
			array[min].min = array[i].numbers;
			min++;
			MIN.temp_size = min;
			
		}
		else if (array[i].numbers == 0)
		{
			array[zero].zero = 0;
			zero++;
			ZERO.temp_size = zero;
		}
		else
		{
			array[max].max = array[i].numbers;
			max++;
			MAX.temp_size = max;
		}
	}

}
void print(Array* array, Array size)
{
	cout << "[ ";
	for (int i = 0; i < size.size; i++)
	{
		cout << array[i].numbers << ",";
	}
	cout << " ]";

	cout << endl;

	cout << "min array: ";
	cout << "[ ";
	int j = 0;
	for (int i = 0; i < MIN.temp_size; i++)
	{
		if (array[i].min >= 0)
		{
			continue;
		}
		else {
			cout << array[j].min << ",";
			j++;
		}
	}
	cout << " ]";
	cout << endl;
	cout << "zero array: ";
	cout << "[ ";
	for (int i = 0; i < ZERO.temp_size; i++)
	{
		if (array[i].zero != 0)
		{
			continue;
		}
		else {
			cout << array[i].zero << ",";
		}
	}
	cout << " ]";
	cout << endl;
	cout << "max array: ";
	cout << "[ ";
	for (int i = 0; i < MAX.temp_size; i++)
	{
		cout << array[i].max << ",";
	}
	cout << " ]";

	cout << endl;

	add_functions(array, size);

	cout << "[ ";
	for (int i = 0; i < size.size; i++)
	{
		cout << array[i].numbers << ",";
	}
	cout << " ]";

}

void add_functions(Array* array, Array size)
{
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < ZERO.temp_size; i++)
	{
		array[i].numbers = array[a].zero;
		a++;
	}
	for (int i = ZERO.temp_size; i < MIN.temp_size + ZERO.temp_size; i++)
	{
		array[i].numbers = array[b].min;
		b++;
	}
	for (int i = MIN.temp_size; i < MAX.temp_size + MIN.temp_size; i++)
	{
		array[i].numbers = array[c].max;
		c++;
	}
}