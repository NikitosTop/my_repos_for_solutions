
#include <iostream>
#include <stdio.h>
#include <time.h>


int main()
{

	int myArray[200]; // главный массивй
	int term_arr[200]; // временный массив
	int max = term_arr[0]; // максимальное значение массива
	int term = 0; // временная переменная 
	int n = 0; // номер элемента в массиве 
	int numbers = 0;
	srand(time(NULL));

	// заполняем массив числами
	for (int i = 0; i < 200; myArray[i++] = -50 + rand() % 100);

	// алгоритм нахождения ряда элементов
	for (int i = 0; i < 200; i++)
	{
		if (myArray[i] > 0)
		{
			++term;
		}
		else
		{
			term_arr[n] = term;
			n++;
			term = 0;
		}
	}

	for (int i = 0; i <= n; i++) // находим максимальнгое число масива
	{
		if (term_arr[i] > 7)
			numbers++;
	}

	for (int j = 0; j < 200; j++) // вывод массива
	{
		if (j % 10 == 0 && j != 0)
		{
			printf("\n");
		}
		else 
		{
			printf("%3d  ", myArray[j]);
		}
	}
	for (int i = 0; i < n; i++) // вывод массива времееных данных
	{
		if (i % 10 == 0 && i != 0)
		{
			printf("\n");
		}
		else
		{
			printf("%3d  ", term_arr[i]);
		}
	}

	printf("max: %d", numbers);

	std::cout << " ENTER 1: ";
	int a;
	std::cin >> a;

	if (a == 1)
	{
		return main();
	}

}
