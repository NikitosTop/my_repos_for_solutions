#pragma once
#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#define DEBUG
#define AMOUNT 101

#include <time.h>
#include <iostream>
using namespace std;

struct Array_full
{
	int number;
	int full_array[AMOUNT];
};

void random_function(Array_full* array);

void find_min_elements(Array_full* array);

void print(Array_full* array);

#endif