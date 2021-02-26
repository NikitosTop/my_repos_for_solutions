#define _CRT_SECURE_NO_WARNINGS
#define PRINT_TYPE
#define DEBUG


#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include "structure.h"
#include "input.h"

using namespace std;

void switch_function(int input_number, List_Structure* array)
{

#ifdef PRINT_TYPE

	switch (input_number) {

		case 1: 
			input_array_function(array); 
			break;
		case 2: 
			random_input_function(array); 
			break;
	}

#endif

	switch (input_number)
	{
	case 3:
		sort_function(array);
		break;

	case 4:
		print(array);
		break;

	default:
		break;
	}
}

int main()
{
	cout << "Enter 1 if you want fill the array from keypad: " << endl;
	cout << "Enter 2 if you want fill the array with random: " << endl;
	cout << "Enter 3 if you want sort array: " << endl;
	cout << "Enter 4 if you want print array: " << endl;
	cout << "Enter 5 if you want exit from programm: " << endl;

	while (true)
	{
		int input_number;

		List_Structure* array = amount;

		cin >> input_number;

		if (input_number != 5)
		{
			switch_function(input_number, array);
		}
		else
		{
			break;
		}
	}

	delete amount;
}

