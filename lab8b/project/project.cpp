#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 100;

	int size = n;

	long Arr[n];

	int Arr_second[100];

	int amount_of_elements, numbers;

	cout << "Enter amount of elements: ";
	cin >> amount_of_elements;
	for (int i = 0; i < amount_of_elements; i++)
	{
		cout << "Enter numbers: ";
		cin >> numbers;
		Arr[i] = numbers;
	}

	int symbol;
	cout << "Which ( 1(+) or 0(-) ): ";
	cin >> symbol;

	if (symbol == 0)
	{
		int position, amount_of_numbers;
		cout << "Enter position: ";
		cin >> position;
		cout << "Enter amount of numbers: ";
		cin >> amount_of_numbers;

		amount_of_elements = amount_of_elements - amount_of_numbers;

		if (position + amount_of_numbers > amount_of_elements)
		{
			for (int i = 0; i < amount_of_elements; i++)
			{
				Arr[position + i] = Arr[position + i + amount_of_numbers];
			}

			for (int i = 0; i < amount_of_elements; i++)
			{
				cout << Arr[i] << " ";
			}
		}
		else
		{
			cout << "warning";
		}
	}
	else
	{
		int position, amount_of_numbers;
		cout << "Enter amount of numbers: ";
		cin >> amount_of_numbers;

		/*numbers = numbers + amount_of_numbers;*/

		int numbers_2;

		cout << "Enter position: ";
		cin >> position;

		amount_of_elements = amount_of_elements + amount_of_numbers;

		for (int i = 0; i < position; i++)
		{
			Arr_second[i] = Arr[i];
		}

		for (int i = position; i < position + amount_of_numbers; i++)
		{
			cout << "Enter numbers: ";
			cin >> numbers_2;
			Arr_second[i] = numbers_2;
		}

		for (int i = position + amount_of_numbers; i <= amount_of_elements; i++)
		{
			Arr_second[i] = Arr[position + i - (position + amount_of_numbers)];
		}

		for (int i = 0; i < amount_of_elements; i++)
		{
			cout << Arr_second[i] << " ";
		}

	}
}
