#pragma once
#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#define DEBUG

#include <time.h>
#include <iostream>
using namespace std;

struct Array_full
{
	int size;
	int number;
	int *full_array;
};

void random_function(Array_full* array, Array_full size);

void find_min_elements(Array_full* array, Array_full size);

void print(Array_full* array, Array_full size);

#endif