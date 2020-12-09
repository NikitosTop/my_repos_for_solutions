#include <iostream>
#include <stdio.h>
#include <time.h>

//int double_arr(int row, int col)
//{
//	int Arr[100][100] = { {},{} };
//
//	int size = row * col;
//
//	for (int i = 0;i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			int number = 0;
//			std::cout << "Enter number: ";
//			std::cin >> number;
//			Arr[i][j] = number;
//		}
//	}
//}
//
//int write_array(int row, int col)
//{
//	std::cout << std::endl;
//
//	int Arr[100][100] = {};
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			std::cout << Arr[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}4
//	
//	return 0;
//}
////
////int positivs_elements(int Arr)
////{
////
////}

int main()
{
	srand(time(NULL));

	int row = 0;
	int col = 0;
	std::cout << "Enter row: ";
	std::cin >> row;
	std::cout << "Enter col: ";
	std::cin >> col;

	int Arr[100][100] = { {},{} };

	int size = row * col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Arr[i][j] = -10 + rand() % 20;
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << Arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	int numbers = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (Arr[i][j] > 0)
			{
				numbers++;
			}
		}
		std::cout << std::endl;
		std::cout << "Row" << "(" << i + 1 << ")" << numbers;
		std::cout << std::endl;
		numbers = 0;
	}
}