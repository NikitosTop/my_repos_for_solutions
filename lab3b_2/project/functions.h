#pragma once

#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
#define DEBUG

#include <iostream>
using namespace std;

struct Array 
{
	int size;
	int numbers;
	int min;
	int temp_size;
	int zero;
	int max;
	int* array;
};

void random_array(Array* array, Array size);

void sort_function(Array* array, Array size);

void print(Array* array, Array size);

#endif
