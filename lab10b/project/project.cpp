#include <iostream>
#include <stdio.h>
#include <time.h>

int write_double_array(int row, int col, int Arr[])
{

	int Arr_2[100][100] = { {} };

	int term = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr_2[i][j] = Arr[term];
			term++;
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << Arr_2[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}

int positive_elements(int row, int col, int Arr[])
{
	int Arr_2[100][100] = { {} };

	int term = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr_2[i][j] = Arr[term];
			term++;
		}
	}

	int numbers = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (Arr_2[i][j] > 0)
			{
				numbers++;
			}
		}
		std::cout << std::endl;
		std::cout << "Row" << "(" << i + 1 << ")" << numbers;
		std::cout << std::endl;
		numbers = 0;
	}

	return 0;
}

int double_array(int row, int col)
{
	srand(time(NULL));

	int Arr[100] = {};

	int size = row * col;

	for (int i = 0; i < size; i++)
	{
		Arr[i] = -10 + rand() % 20;
	}

	write_double_array(row, col, Arr);

	positive_elements(row, col, Arr);

	return 0;
}

int main()
{
	srand(time(NULL));

	int row = 0;
	int col = 0;
	std::cout << "Enter row: ";
	std::cin >> row;
	std::cout << "Enter col: ";
	std::cin >> col;

	double_array(row, col);
}