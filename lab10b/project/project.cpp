#include <iostream>
#include <stdio.h>
#include <time.h>

const int N = 100;
const int M = 100;


int write_double_array(int row, int col, int Arr_double[N][M])
{
	std::cout << std::endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << Arr_double[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}

int positive_elements(int row, int col, int Arr_double[N][M])
{
	int numbers = 0;

	int row_element = 0;

	std::cout << "Enter row elements: ";

	std::cin >> row_element;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (Arr_double[i][j] > 0)
			{
				numbers++;
				if (i = row_element)
				{
					std::cout << std::endl;
					std::cout << std::endl;
					break;
				}
			}
			numbers = 0;
		}
	}

	return numbers;
}

int double_array(int row, int col, int Arr_double[N][M])
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr_double[i][j] = -100 + rand() % 200;
		}
	}

	return 0;
}

int main()
{
	srand(time(NULL));

	const int N = 100;
	const int M = 100;

	int Arr_double[N][M] = {};

	int row = 0;
	int col = 0;
	std::cout << "Enter row: ";
	std::cin >> row;
	std::cout << "Enter col: ";
	std::cin >> col;

	double_array(row, col, Arr_double);

	write_double_array(row, col, Arr_double);

	std::cout << "count positive: " << positive_elements(row, col, Arr_double);
}