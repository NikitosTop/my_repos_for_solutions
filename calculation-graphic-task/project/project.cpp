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

int* PancakeSort(int n, int* new_arr)
{
	for (int subArrayLength = n - 1; subArrayLength >= 0; subArrayLength--)
	{
		int indexOfMax = IndexOfMax(new_arr, subArrayLength);
		if (indexOfMax != subArrayLength)
		{
			Flip(new_arr, indexOfMax);
			Flip(new_arr, subArrayLength);
		}
	}

	return &new_arr[0];
}

int* Odd_even_sort(int n, int* new_arr)
{

	int isSorted = 0;
	while (isSorted == 0)
	{
		isSorted = 1;
		for (int i = 0; i < n - 1; i += 2)
		{
			if (new_arr[i] > new_arr[i + 1])
			{
				int temp = new_arr[i];
				new_arr[i] = new_arr[i + 1];
				new_arr[i + 1] = temp;
				isSorted = 0;
			}
		}

		for (int i = 1; i <= n - 2; i += 2)
		{
			if (new_arr[i] > new_arr[i + 1])
			{
				int temp = new_arr[i];
				new_arr[i] = new_arr[i + 1];
				new_arr[i + 1] = temp;
				isSorted = 0;
			}
		}
	}
	return &new_arr[0];
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

	double during_arr[9] = {};

	int during_term = 0;

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

		int* new_arr = (int*)malloc(sizeof(int) * n);

		for (int i = 0; i < n; i++)
		{
			new_arr[i] = Arr[i];
		}

		if (type_arr == 1)
		{
			int* target;

			std::cout << std::endl;

			target = PancakeSort(amount_numbers, new_arr);

			for (int i = 0; i < amount_numbers; i++)
			{
				std::cout << target[i] << " ";
			}

			auto start = std::chrono::high_resolution_clock::now();

			PancakeSort(amount_numbers, new_arr);

			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> duration = end - start;

			during_arr[during_term] = duration.count();

			during_term++;

		}
		else
		{
			int* target;

			std::cout << std::endl;

			target = Odd_even_sort(amount_numbers, new_arr);

			for (int i = 0; i < amount_numbers; i++)
			{
				std::cout << target[i] << " ";
			}

			auto start = std::chrono::high_resolution_clock::now();

			Odd_even_sort(amount_numbers, new_arr);

			auto end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<double> duration = end - start;

			during_arr[during_term] = duration.count();

			during_term++;

		}

	}

	std::cout << std::endl;

	for (int i = 0; i < 9; i++)
	{
		std::cout << " | " << during_arr[i] << " | ";

	}

}

