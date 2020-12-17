#include <iostream>
#include <time.h>
#include <chrono>
#include <ctime>

int IndexOfMax(int array[], int n)
{
	int maxPositionIndex = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (array[i] > array[maxPositionIndex])
			maxPositionIndex = i;
	}

	return maxPositionIndex;
}

void Flip(int array[], int end)
{
	for (int start = 0; start < end; start++, end--)
	{
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;
	}
}

int PancakeSort(int array[], int n)
{
	auto start = std::chrono::high_resolution_clock::now();

	for (int subArrayLength = n - 1; subArrayLength >= 0; subArrayLength--)
	{
		int indexOfMax = IndexOfMax(array, subArrayLength);
		if (indexOfMax != subArrayLength)
		{
			Flip(array, indexOfMax);
			Flip(array, subArrayLength);
		}
	}

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = end - start;

	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Sort time: " << duration.count() << " ";

	std::cout << std::endl;

	return 0;
}

int Odd_even_sort(int array[], int n)
{
	auto start = std::chrono::high_resolution_clock::now();

	int isSorted = 0;
	while (isSorted == 0)
	{
		isSorted = 1;
		for (int i = 0; i < n - 1; i += 2)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				isSorted = 0;
			}
		}

		for (int i = 1; i <= n - 2; i += 2)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				isSorted = 0;
			}
		}
	}

	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> duration = end - start;


	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "Sort time: " << duration.count() << " ";

	std::cout << std::endl;

	return 0;
}


int main() 
{
	setlocale(LC_ALL, "Russian");
	printf("/********************************/\n");
	printf("/                                /\n");
	printf("/  расчетно графическое задание  /\n");
	printf("/                                /\n");
	printf("/       три типа массивов        /\n");
	printf("/                                /\n");
	printf("/        две сортировки          /\n");
	printf("/                                /\n");
	printf("/********************************/\n");


	double average = 0;

	int arr = 0;
	std::cout << std::endl;
	std::cout << "Выберите тип массива: (упорядоченый)1 , (рандомный)2 или (упорядоченый в обратном порядке)3: ";
	std::cin >> arr;

	double average_arr[5] = {};
	int term_var = 0;

	int type_arr = 0;
	std::cout << std::endl;
	std::cout << "Выберите тип сортировки (1 - PancakeSort) или (2 - Odd_even_sort): ";
	std::cin >> type_arr;

	for (int a = 0; a < 9; a++)
	{
		srand(time(NULL));
		const int n = 45;
		int Arr[n] = {};

		int amount_numbers = 0;
		std::cout << std::endl;
		std::cout << "Введите количество элементов массива: ";
		std::cin >> amount_numbers;


		if (arr == 1)
		{
			for (int i = 0; i < amount_numbers; i++)
			{
				Arr[i] = i + 1;
			}

			for (int i = 0; i < amount_numbers; i++)
			{
				std::cout << Arr[i] << " ";
			}
		}
		else if (arr == 2)
		{
			for (int i = 0; i < amount_numbers; i++)
			{
				Arr[i] = 1 + rand() % 99;
			}

			for (int i = 0; i < amount_numbers; i++)
			{
				std::cout << Arr[i] << " ";
			}
		}
		else
		{
			int term_number = amount_numbers;

			for (int i = 0; i < amount_numbers; i++)
			{
				Arr[i] = term_number--;
			}

			for (int i = 0; i < amount_numbers; i++)
			{
				std::cout << Arr[i] << " ";
			}
		}


		if (type_arr == 1)
		{

			std::cout << std::endl;

			PancakeSort(Arr, amount_numbers);

		}
		else
		{

			std::cout << std::endl;

			Odd_even_sort(Arr, amount_numbers);

		}
	}

	std::cout << std::endl;

}

